# 1.LD Series (funkcija **cos^2(x)=cos(x)cos(x)**)

Izmantojot šo kodu ir iespējams noteikt savas f-jas n-tā locekļa vērtību un ipeirkšējo locekļu summu, izmantojot rekurences reizinātāju.

Links uz f-jas cos(x)cos(x) [grafiku](https://github.com/valterssne/sne-studijas/blob/master/ld1/ld1_series.png)

[Termināļa history](https://github.com/valterssne/sne-studijas/blob/master/history_20210111_all_lw) - šeit diemžēl ir tikai lielākā daļa no vēsture, likās ka linux saglabā visu darbību vēsturi.

-Programmas kods:

```
#include <stdio.h>
#include <math.h>

int draw(){  //zīmējums ASCII priekš summas funkcijas un rekurences reizinātāja

printf("\n\n");
printf("                 Funkcijas cos(x)*cos(x) summas izteiksme: \n");
printf("\n ");
printf("                   500\n ");
printf("                  _____ \n");
printf("                   \\\         k+1  2*k  2*k-1\n ");
printf("                   \\\    (-1)  *x   *2\n ");
printf("cos(x)*cos(x)=> 1-  |   _________________\n ");
printf("                   /          (2*k)!\n ");
printf("                  /_____ \n");
printf("                    k=0\n ");           
printf(" \n");
printf("                                  2 \n");
printf("                             -2*x \n");
printf("rekurences reizinātājs:   ____________ \n");
printf("                            k*(2*k-1) \n");

}

int main(){
//mainīgie
long double a,S,y,y1;
        double x;
        int k=0;

        printf("Ievadiet, lūdzu, argumenta x vertību: ");  //vajadzīgo vērtību palūgšana lietotājam un to noteikšana
        scanf("%lf" ,&x);

        y=cos(x)*cos(x);                           //vispariga f-ja
        printf("y=cos^2(%lf)=%.3Lg\n" ,x,y);    //vērtības f-jai attainojam ar long float, lai parādītu mazaas veertiibas

        a=pow(-1,k+1)*pow(x,2*k)*pow(2,2*k-1)/(1.);
        S=1-a; //f-jas vērtība

        while(k<501)                      //cikls 499 un 500 locekļa noteikšanai 
        {
                k++;
                a=a*(-2)*pow(x,2)/(k*(2*k-1));
                S=1-(S+a);
                if(k==500||k==499)
                {
                printf("%d.\t a=%.3Lg\t S=%.3Lg\n",k,a,S);
                }
        }

        y=cos(x)*cos(x);
        printf("Funkcijas vērtība caur Teilora rindu: cos^2(%.2f)=%.3Lg\n" ,x,y);

	y1=pow(cos(x),2); //izmantoju dažādus savas f-jas attainojuma veidus, jo nebiju doršs, ka vienmēr strādās viens veids un dažkārt varēja atrāk ar pow pierakstīt
	printf("Funkcijas vērtība caur funkciju: cos^2(%.2f)=%.3Lg\n",x,y1);

        draw();           //zimejuma attainošana pēc visiem aprēķiniem
}
```
