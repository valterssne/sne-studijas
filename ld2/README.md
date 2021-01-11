# 2.LD Roots f-jai cos(x)cos(x)

Pēc lietotājam vēlamo datu noskaidrošanas ir iespējams veikt f-jas mainīgā aprēķinu, lai parādītu lietotājam, kurās x vērtībās, viņa izvēlētā f-jas vērtība, būs 0.

[Termināļa history](https://github.com/valterssne/sne-studijas/blob/master/history_20210111_all_lw) - šeit diemžēl ir tikai lielākā daļa no vēsture, likās ka linux saglabā visu darbību vēsturi.

Links uz attēlu [f-jas saknēm]()

```
#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, x, delta_x ,funkca, funkcb, funkcx; //mainigie
	int k=0;


	printf("Lūdzu ievadiet sākuma robežu:  \n");
	scanf("%f",&a);
	printf("Lūdzu ievadiet beigu robežu:  \n");
	scanf("%f",&b);
	printf("Lūdzu ievadiet vēlamo precizitāti (no 0 līdz 1):  \n");
	scanf("%f",&delta_x);
	printf("Lūdzu ievadiet, kādai f(x) vērtībai aprēķināt x vērtību (no 0 līdz 1):  \n"); //lietotājam lūdzam ievadīt vēlamās vērtības, lai veiktu aprēķinus, tās novērtē
	scanf("%f",&c);

	
	funkca=(cos(a)*cos(a))-c;  //f-jas vērtības, ja nepieciesams noteikt lietotajam vajadzigas vertibas, izvēlēto vērtību atņemot no pamat f-jas vērtības
	funkcb=(cos(b)*cos(b))-c;

	if(funkca*funkcb>0)
	{
		printf("Izvēlētajā intrvāla [%.2f;%.2f]  ar šīm vērtībām nav iespējams veikt darbības f-jai cos(x)*cos(x)!\n" ,a,b);  //ja izvēlēts intervāls kura nav sakņu vai ir nepareizi                                                       //ievadīti precizitātes vai f(x) vērtības dati
	return 0;
	}

	while((b-a)>delta_x){  //norādām cik ilgi darbiiba jaatkarto, lai sasniegtu precizitātes vērtību
		x=(a+b)/2.;  //nosakam intervāla garumu
//	printf("%f\n" ,x);
		if(funkca*((cos(x)*cos(x)-c)>0))
			a=x;       //f-ja var but tikai +
			
		else
			b=x; 
		k++;
		}
	printf("%2d. iterācija: cos(%7.3f)=%7.3f\n" ,k,a,cos(x)*cos(x));  //norāda cik reizes atkārtoja loop, lai veiktu aprēķinus
	printf("cos(%7.3f)=%7.3f\n" ,x,cos(x)*cos(x)); //attainojums izmantojot pamatf-ju
	printf("cos(%7.3f)=%7.3f\n" ,b,funkcb);   //attainojums izmanotjot pamatfju ar b robežas mainiga vertibu

	printf("Sakne atrodas pie x=%.3f, jo cos(x) ir %.3f\n",x,pow(cos(x),2)); //parādam saknes vertibu

return 0;
}
```
