# 3.LD Derivative f-jai cos(x)cos(x)

Funkcijas atvasinājumi:
1. kārtas ((cos(x))^2)'= -2cos(x)sin(x)
2. kārtas ((cos(x))^2) ''= 2(sin(x))^2-2(cos(x))^2

Atvasinājuma vērtības var noteikt izmantojot analītiskās formulas veidā(atvasinot) vai arī izmantojot f-jas izmaiņas laikā, kā skaitlisko diferncēšanas veidu.

Links uz grafiku, kur attēloti [gan ar analītiskās, gan diferencēšanas veidā attēlotie atasinājumi](https://github.com/valterssne/sne-studijas/blob/master/ld3/3ld.png), izmantojot Gnuplot ([kods](https://github.com/valterssne/sne-studijas/blob/master/ld3/derivative_gnp.gp)). Dati ir pārskatāmāki un var redzēt, ka abu veidu rēķināšanas rezultāti ir vienādi.
Dati tika iegūti no [dat faila](https://github.com/valterssne/sne-studijas/blob/master/ld3/derivative.dat), kurā programma ievadīja visas aprēķinātās un x vērtības.

```
#include<stdio.h>
#include<math.h>


int main(){

float a,b,x,delta_x;     //mainīgo definēšana - float jo tās būs mazas vērtības, double. jo var but lielas
double y,y1,y2,y2_1,y3,y3_1;

FILE*deriv;  //piesaistām failu, kur saglabāt datus

deriv = fopen("derivative.dat", "w"); //faila atversana un rakstīšana/pārrakstīšana
	
printf("Lietotāj, lūdzu, izvēlieties funkcijas sākuma robežas vērtību a:\n");
scanf("%f", &a);
printf("Lietotāj, lūdzu, izvēlieties funkcijas beigu robežas vērtību b:\n");
scanf("%f", &b);
printf("Lietotāj, lūdzu, izvēlieties funkcijas precizitātes vērtību dx:\n");  //dialogs ar lietotāju viņam vēlamo paramteru noskaidrosanai un to nolasīšana
scanf("%f", &delta_x);

fprintf(deriv,"\tx\t\tf(x)\tf\'(x) analyt.\tf\'(x) finite\tf\'\'(x) analyt.\tf\'\'(x) finite\n"); //failā ierakstām kollonu nosaukumus
printf("\tx\t\tf(x)\tf\'(x) analyt.\tf\'(x) finite\tf\'\'(x) analyt.\tf\'\'(x) finite\n");  //attēlojam uz ekrāna 
x=a;
while(x<b){  //liekam ciklā, lai aprekinatu f(x), f(x)' un f(x)'' vērtības ar x izmaiņām kā precizitāti un norādītu x vērtības 
	y=cos(x)*cos(x); //f(x) analitiska forma
        y1=cos(x+delta_x)*cos(x+delta_x); 
	y2_1=-2*cos(x)*sin(x); //f(x)' analitiska forma
        y2=(y1-y)/delta_x;
        y3_1=2*pow(sin(x),2)-2*pow(cos(x),2);//f(x)'' analitiska forma
        y3=(cos(x+delta_x)*cos(x+delta_x)-2*cos(x)*cos(x)+cos(x-delta_x)*cos(x-delta_x))/pow(delta_x,2); //f(x)'' skaitliskā forma (finite)
	printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,y,y2,y2_1,y3,y3_1); //attelojam uz ekrana datus
        fprintf(deriv,"%10.2f\t%10.2f\t%10.2f\t\%10.2f\t%10.2f\t%10.2f\n",x,y,y2,y2_1,y3,y3_1);  //attelojam failaa datus
        x+=delta_x;  //palielinam delta_x vertibu
	}
fclose(deriv); //aiztaisam failu
}

```
