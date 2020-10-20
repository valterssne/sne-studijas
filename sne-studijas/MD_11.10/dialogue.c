//kods dazadu datu tipu petisanai
//informācijas vienibas ar kuram opere cilveks - simboli un skaitļi
//simboli: burti, cipari, punktuaciajs zimes utt. - ASCII tabula -simbols vs binarais kods

// skaitļi: veseli skaitļi, reali skaitļi, kompleksie skaitļi (divas daļas realie un imaginārie)

//Informacijas vieniba ar kuru opere dators - bits (0/1)
//Informacijas vienibas ar adresi (datorā) - baits
//1 byte = 8 biti
// ASCII table - one symbol == 1 byte
// unique binary combinations inside 1 byte - 
// 1 biti: 0 , 1 - 2 kombinacijas
// 2 biti:  00, 01, 10, 11 - 4 kombinacijas
// 3 biti: 000, 001, 010, 011, 100, 101, 110, 111 - 8 kombinacijas
// x biti: .... - (stavokļu skaits)^biti - (2)^8=256
// ASCII tabulā - 256 unikali simboli (ASCII tabulas 1.daļā - 128 simboli)


#include<stdio.h>
#define A 11
void main()
 {
 char a = 10;
 // 1.darbiba - RAM atmina tiek atveleta viena char datu tipa mainiga glabasanai
 // šī vieta ir viennozīmīgi saķēdēta ar identifikatoru "a" (bet, vietai ir arī adrese)
 // saskaņa ar char datu  tipu, vietas izmērs  - 1 baits
 // Kā šajā izskatījāš tas atmiņas apgabals: 0000 0101 vai 1111 1110 vai 0000 1010
 // char a; //deklarēšana
 // 2.darbība - vērtības piešķiršana
 // a = 10  // vērtības piešķiršana
 // a  -> 0000 1010
  printf("Mainīgā a vērtība (laika vienība t1) ir: %d \n ",a);
  a = 125;
  printf("Mainīgā a vērtība (laika vienība t2) ir: %d \n ",a);
  printf("Konstantes A vērtība (laika vienība t3) ir: %d \n ",A);
 // konstanti mainit nevar
char mans_mainiiigais = 45;// centīsimies izmantot mneimoniskos nosaukumus - attelo mainiga jegu $vai noluku
 a = 0x10; // 
 printf("Mainiga a vērtība (laika vienība t4) ir: %d \n ",a);   // progn 10 ok
 printf("Mainiga a vērtība (laika vienība t5) ir: %d(oct) \n ",a);  // progn 20 ok 
 printf("Mainiga a vērtība (laika vienība t6) ir: %d \n ",a);
 printf("Mainiga a vērtība (laika vienība t7) ir: %d \n ",a);
 a = 65;
 printf("Mainiga a vērtība ir: %d \n " ,a);
 printf("Mainiga a vērtība ir: %o (oct) \n ",a);
 printf("Mainiga a vērtība ka simbols: %c \n ",a);
 
 a = 125;
 printf("Mainiga a vērtība ir: %d \n " ,a);
 a = 126;
 printf("Mainiga a vērtība ir: %d \n ",a);
 a = 127;
 printf("Mainiga a vērtība ir: %d \n " ,a);
// 1 byte -> 256 numbers
// => without sign 0 .. 255
// => with sign -128 ... 0 ... 127

 a = 128;
 printf("Mainiga a vērtība ir: %d \n ",a);
 a = 258; // 258 = 256 + 2 -> 0000 0001    0000 0010
 printf("Mainiga a vērtība ir: %d \n ",a);

unsigned char b = 128;
printf(" Mainiga b vērtība ir : %d \n " , b);

//int
int c;
printf("int datu tupa izmērs baitos: %ld \n ", sizeof(c));
// soreiz int atbilst 4 baiti (32 biti)
//=> without sign 0 ... (2^32-1)
// with sign -(2^31) ... 0 ... (2^31-1)


// --------------------------------------------------------------------
 float d = 6.5;  // double
 printf("float datu tipa skaitļi attēlošana: %f \n ", d) ;
 printf("float datu tipa skaitļi attēlošana ar 2 cipariem aiz komata: %.2f \n ", d); 
 printf("float datu tipa skaitļi attēlošana bez cipariem aiz komata: %.f \n ", d); 

}



#include<stdio.h>

void main()
{
char a;
printf("Cienijamais, lietotaj, ludzu ievadi vienu burtu:\n ");
scanf("%c",&a);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu: %c\n " ,a);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura dec dec kod ir: %d \n " ,a);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura hex kods ir: %0x%x \n " ,a);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura oct kods ir: %o \n " ,a);
printf(" P.s ka reals skaitlis %f\n " ,a);
int b;
printf("Cienijamais, lietotaj, ludzu ievadi vienu burtu:\n ");
scanf("%d \n ", &b);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu: %c \n " ,b);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura dec dec kod ir: %d \n " ,b);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura hex kods ir: %0x%x \n " ,b);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura oct kods ir: %o \n " ,b);
printf(" P.s ka reals skaitlis %f\n " ,a);

double c;
printf("Cienijamais, lietotaj, ludzu ievadi vienu burtu:\n ");
scanf("%f \n  " , &c);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu: %c \n " ,c);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura dec dec kod ir: %d \n " ,c);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura hex kods ir: %0x%x \n " ,c);
printf("Cienijamais, lietotaj, tu esi ievdijis simbolu, kura oct kods ir: %o \n " ,c);
printf(" P.s ka reals skaitlis %f\n " ,a);

}

  
