# 5.LD bubble sort

Laboratroijas darbs, kurā jāveic ieejas simbolu sakārtošana augošā secībā pēc ASCII vērtībām, nosakot vidējo aritm, modu, mediānu, max un min vērtības, izvadot arī datus augošā secībā ar visām ASCII vērtībām.

Kaut gan kods ir uzrakstīts arī modas aprēķinam, ir pieļauta kāda kļūda, kas to neattēlo

Datu nolasīšanai un vērtību noteikšanai tika izmantoti gan %c , gan %d datu veidi, kas ļāva uzreiz nomainīt ot vērtības uz bin, neliekot veidot atsevišķu daru faili salīdzināšanai.

Šo datu attēlosana Gnuplot man nesanāca, jo nespēju saprast, kā ko rakstīt gnuplotam.

[Termināļa history](https://github.com/valterssne/sne-studijas/blob/master/history_20210111_all_lw) - šeit diemžēl ir tikai lielākā daļa no vēsture, likās ka linux saglabā visu darbību vēsturi.


```
#include<stdio.h> 
#include<string.h>

int main(){ 
char input[256]; 
int x, y, tmp, gar, min=256, max=0, vid_v, medi, vertiba, kop_s=0;   //mainīgie, to definējums 


printf("Lūdzu ievadiet simbolu rindu (ne vairāk kā 256 rakstzīmēm!):\n");   //simbolu rinda noteikšana
scanf("%[^\n]", input); //veicam ievadito simbolu ierakstisanu masīvā


length=strlen(input); 
printf("Ievadīto simbolu skaits ir %d.\n\n", gar);  //rindas garuma noskaidrošana ar strlen un tās rezultāta izvadisana


for (y=0;y<gar;y++){        //simbolu kārtošana 
	for (x=0;x<gar-1;x++){   //pedejo simbolu neņem vera, jo masiva sak skatiti no 0
		if(input[x]>input[x+1]){  //parbauda vai joprojam izpildaas nosacijums, lai turpinatu kartot
 		tmp =input[x+1]; input[x+1] = input[x]; input[x]= tmp;   //veica simbolu vērtību salidzinasanu peec ascii vertiibam, tos sakartojot augosa seciba
 		}
 	}
}


for(x=0;gar>x;x++){        //simbolu vidējā ascii vērtība 
	vertiba = (int)input[x];
		if (max<vertiba) 
      max=vertiba;  //nosakam lielako vertibu no ievaddes datiem
		if (min>vertiba && vertiba>32)
			min = vertiba;   //nosakam mazako vertibu no ievades datiem un lielakam par 32, jo lidz 32 nav attelojamie simboli, tikai darbiibas vertiibas
      kop_s=kop_s+vertiba; //palielinas kop_s vertibu
}



printf("Mazākā vērtība ir %d (pēc ASCII), simbols %c;\n\n", min, min);   //simbolu mazākā vērtība 


printf("Lielākā vērtība ir %d (pēc ASCII), simbols %c;\n\n", max, max);  //simbolu lielākā vērtība 


 vid_v=kop_s/gar;          //simbolu vidējā vērība
printf("Vidējā vērtība pēc ASCII ir %d;\n\n",vid_v);



printf("Ievadītā rindas mediāna ir %d (pēc ASCII), simbols %c;\n\n", input[gar/2], input[gar/2]);    //simbolu mediāna


 y=0;        //moda
for(x=0;gar>x;x++){
 	if(input[x]==input[x+1]){  //noskaidrojams vai simbolu skaits masiva ir para vai nepaara un veicam modas mekleesanu, samazinot vertibas
 		y++;
	 }
	else if (input[x] != input[x+1]){
		if(y>max)
		max=y;
		y=0;
	 }
}

y=0;
for(x=0;gar>x;x++){
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
for(x=0;gar>x;x++){
	printf("N.p.k. %d \t %c \t %d \n", x, input[x], input[x] );
}


return 0;
}
```
