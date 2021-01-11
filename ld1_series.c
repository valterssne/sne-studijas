#include <stdio.h>
#include <math.h>

int draw(){

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
        long double a,S,y,y1;
        double x;
        int k=0;

        printf("Ievadiet, lūdzu, argumenta x vertību: ");
        scanf("%lf" ,&x);

        y=cos(x)*cos(x);
        printf("y=cos^2(%lf)=%.3Lg\n" ,x,y);

        a=pow(-1,k+1)*pow(x,2*k)*pow(2,2*k-1)/(1.);
        S=1-a;

        while(k<501)
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

	y1=pow(cos(x),2);
	printf("Funkcijas vērtība caur funkciju: cos^2(%.2f)=%.3Lg\n",x,y1);

        draw();
}

