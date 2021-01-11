# 4.LD integral

Iespēja noteikt f-jas laukuma lielumu, izmantojot integrāli, to rēķinot ar:
- tainstūra laukumu;
- trapeces laukumu;
- Simpsona metodi (kaut kas koda nesanāca, jo netiku ārā no cikla);

Attēls no [Wolframaplha](https://github.com/valterssne/sne-studijas/blob/master/ld4/integr.PNG) kā pierādījums f-jas inegrālim.

Attēls ar iekrāsoto laukuma daļu no [Gnuplot ](https://github.com/valterssne/sne-studijas/blob/master/ld4/interaalis_gpp.png).

f(x)=cos(x)*cos(x)

Šie 3 varianti ir iespējami, jo integrālis balstās uz šiem rēķināšanas veidiem.

S(tains)=a*b integralis=(b-a)*f((a+b)/2)

S(trap) =((a+b)/2)*h  integralis=(b-a)*((f(a)+f(b))/2)

Simspona formula integraalim= ((b-a)/6)*(f(a)+4f((a+b)/2)+f(b))

Intergāļa vērtības bija gandrīz identiksas, atšķīrās tikai 3 cipars aiz komata.

[Termināļa history](https://github.com/valterssne/sne-studijas/blob/master/history_20210111_all_lw) - šeit diemžēl ir tikai lielākā daļa no vēsture, likās ka linux saglabā visu darbību vēsturi.
```
#include<stdio.h>
#include<math.h>

float taisn(float); //definejam f-jas jau sākumā ar return vertibu float veidaa
float trapece(float);
//float simpsons(float);  //simspona metodes daļu ieliku komentaros, lai nebojatu koda darbibu

float a,b,preciz,h,s,s1,s2, integr1=0, integr2; //apzimejam mainigos
int k, n=2;  //definej 2.veida mainigos, kur n ir const

int main(){


printf("Lietotāj, lūdzu ievadiet sākuma robežu a:\n");
scanf("%f",&a);
printf("Lietotāj, lūdzu ievadiet beigu robežu b:\n");
scanf("%f",&b);
printf("Lietotāj, lūdzu izvēlieties aprēķinu precizitāti:\n");   //dialogs ar lietotaju, lai iegutuvajadzigas vertibas
scanf("%f",&preciz);

printf("Rezultāts izmantojot taisnstūra metodi: %f\n", taisn(integr1)); //attainojam rezultatus no aprekinatas vertibas
printf("Rezultāts izmantojot trapeces metodi: %f\n", trapece(integr1));
//printf("Rezultāts izmantojot Simpsona metodi: %f\n", simpsons(integr1));

}

float taisn(float integr1){ //taisnstura integrala aprekinasanas metode
	
	integr2=(b-a)*pow(cos((a+b)/n),2);

	while(fabs(integr2-integr1)>preciz){  //nemam absoluto vertibu ar fabs, lai rez +
	n*=2;
	h=(b-a)/n;
	integr1=integr2;
	integr2=0; //nonnulejam, lai nesajauktu rezultaatu

		for(k=0;k<n;k++){     //cikls, lai noteiktu atbilstošo laukumu, ko veido f-jas grafiks noteitkajas robezaas
		integr2+=h*pow(cos(a+(k+0.5)*h),2); //palielinam integrali 
		}
	}
return integr1; //atgriezam tā vērtību kā rezultatu, kuru attēlot main fjaa scanfā
}

float trapece(float integr1){  //fja integralim ar trapeces metodi, darbiibas soļi identiski kā taisnstuurim

	integr2=((b-a)/n)*(pow(cos(a),2)*pow(cos(b),2))/n;

	while(fabs(integr2-integr1)>preciz){ 
	n*=2;
	h=(b-a)/n;
	integr1=integr2;
	integr2=0;

		for(k=0;k<n;k++){
		integr2+=h*pow(cos(a+(k+0.5)*h),2);
		}
	}
return integr1;
}


/*
float simpsons(float integr1){
	integr1=((b-a)/6)*(pow(cos(a),2)-4*(pow(cos((a+b)/2),2)+pow(cos(b),2))); //izmatojam simpsona formulu
	
	while(fabs(integr2-integr1)>preciz){  //izmantojam absoluto vertibu 
		n*=2;                            //meklēju padomus e-vidē, nespēju saprast arī kā ši īsti būtu jāraksta, tikai aptuvens koda mineejums
		h=(b-a)/n;
		integr1=integr2;
		integr2=0;
		for(k=1;k<n;k++){
			if(k%2==0){
				integr2+=2*pow(cos(a+k*h),2);
				}
			else{
				integr2+=4*pow(cos(a+k*h),2);
				}
			}
		integr1=(h/6)*((pow(cos(a),2)+pow(cos(b),2)+integr2));
}
return integr1;
}*/
```
