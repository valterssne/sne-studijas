#include<stdio.h>
#define X 21

void main()
{

printf("	Definējām  X kā %d \n " , X);
printf("	X kā oct vērtība ir %o \n " , X);
float h = X + 2.3526;
printf("	Noapaļots X, kas palielināts par 2.3526 ir %.2f \n " , h);

char f;
printf(" Izvēlies ciparu!\n ");
scanf("%d" , &f);

printf("	Izvēlētais skaitlis dec veidā ir  %d \n " , f);
printf("	Izvēlētais skaitlis hex  veidā ir  %0x%x \n " , f);

double g;
printf("Tagad izvēlies burtu! \n ");
scanf(" %f \n " , &g);
printf("	Esi izvēlējies burtu %c \n " , g);
printf("	Esi izvēlējies burtu ar oct vertību %o \n " , g);
printf("	Esi izvēlējies burtu ar hex vērtību  %0x%x \n " , g);


}
