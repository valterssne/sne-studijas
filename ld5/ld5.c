#include<stdio.h> 
#include<string.h>

int main(){ 
//mainīgie, to definējums 
char input[256]; 
int x, y, tmp, length, min=256, max=0, vid_v, medi, vertiba, kop_s=0;


//simbolu rinda noteikšana
printf("Lūdzu ievadiet simbolu rindu (ne vairāk kā 256 rakstzīmēm!):\n"); 
scanf("%[^\n]", input);


//rindas garuma noskaidrošana 
length=strlen(input); 
printf("Ievadīto simbolu skaits ir %d.\n\n", length);


//simbolu kārtošana 
for (y=0;y<length;y++){
	for (x=0;x<length-1;x++){
		if(input[x]>input[x+1]){
 		tmp =input[x+1]; input[x+1] = input[x]; input[x]= tmp;
 		}
 	}
}


//simbolu vidējā ascii vērtība 
for(x=0;length>x;x++){
	vertiba = (int)input[x];
		if (max<vertiba) max=vertiba;
		if (min>vertiba && vertiba>32)
			min = vertiba; kop_s=kop_s+vertiba;
}


//simbolu mazākā vērtība 
printf("Mazākā vērtība ir %d (pēc ASCII), simbols %c;\n\n", min, min);


//simbolu lielākā vērtība 
printf("Lielākā vērtība ir %d (pēc ASCII), simbols %c;\n\n", max, max);


//simbolu vidējā vērība
 vid_v=kop_s/length; 
printf("Vidējā vērtība pēc ASCII ir %d;\n\n",vid_v);


//simbolu mediāna
printf("Ievadītā rindas mediāna ir %d (pēc ASCII), simbols %c;\n\n", input[length/2], input[length/2]);


//moda y=0;
for(x=0;length>x;x++){
 	if(input[x]==input[x+1]){
 		y++;
	 }
	else if (input[x] != input[x+1]){
		if(y>max)
		max=y;
		y=0;
	 }
}

//y=0;
for(x=0;length>x;x++){
	if(input[x]==input[x+1]){
		y++;
		}
	else if(input[x] != input[x+1]){
		if (max==y){
		printf("Rindas moda ir %d, simbols %c; \n\n", input[x],input[x]);
		}
	y=0;
	}
}


//alfabētiskā secība 
for(x=0;length>x;x++){
	printf("N.p.k. %d \t %c \t %d \n", x, input[x], input[x] );
}


return 0;
}
