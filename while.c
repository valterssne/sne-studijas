//cikls while(izteiksme){darbības bloks};
//while(izteiksme) viena darbība;
//		izteiksmes rezultāts - ir 0 vai nav 0


#include <stdio.h>
#include<math.h>
int main()
{
	while(0)
	{
		printf("Sis teksts netiks attēlots");
	}
	while(1) //lai ciklu apturētu terminālī ir jāspiež Ctrl + c
	{
		printf("So tekstu attelos visu laiku -noverosim bezgalīgu ciklu \n");
		break;
	}


	double a =3.5e-1; //matemātika šis skaitlis ir 0.35, 3.5*10^(-1)=3.1*0.1=0.35, 0,35e0, 35e-2
	//double s = 0.5e-2; solis sanāk 0.005
	double s = 0.5e-1;
	printf("Pirms cikla:\n" );
	printf("a = %20f (vai ar peldoso punktu %e)\n",a,a);

	double precision = s/2; // 0.025
	while(  fabs(a -1.0) > precision  )//a!=1.0 - neapstāsies 
	{
		printf("a = %.2f (vai ar peldošo punktu %g)\n" ,a,a);
		printf("a-1.0 = %.20f (vai ar peldoso punktu %e)\n" ,a-1.0, a-1.0);
		a+= s;  // divas operācijas + un = (saskaitisana un pieskirsana), oper (darb) 
		//katrai ir sava prioritāte
		// + oper ir prioritate salidzinajuma ar = oper => tā tiks izpildita pirmā
		//laika momentā t1 no atmiņas uz procesoru aizbrauksa mani (0.35), s main vert (0.5)
		//šīs vērtības tiks saskaitītas, 0.40 (ar double datu tipu)
		//laika momenta t2 iepriekšējās oper rezultāta vertība tiks piešķirta a mainigajam

		//a+=s;kompakts pieraksts tam pašam a = a + s
	}
	printf("Pēc cikla:\n");
	printf("a = %.20f (vai ar peldoso punktu %e)\n" ,a,a);
	printf("a-1.0 = %.20f (vai ar peldoso punktu %e)\n" ,a-1.0, a-1.0);

return 0;
}
