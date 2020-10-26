//faktoriāls:
//5! = 1*2*3*4*5 =  4!*5 =>  4! = 5!/5
// 0! = 1 (tukša kopa => viena iespejama kombinacija)

// palūgt lietotājam ievadīt vienu veselu skaitli
// palūgt izvēlēties datu tipu - char, int, long long
//vai nu apreķināt faktoriālu ievadītajam skaitlim vai paziņot, ka nav iespējams apr 
//faktiriāla vērtību
//nedrikst izmantot datu tipu robežu konstantes, nedrīkst izmantot lielāku datu tipu par 
//lietotāja norādīto
//tikko faktoriāla aprēķins kļūst nepareizs, uzreiz partrautk aprēķinus


//cikls for(sākuma vērtība; ){darbības bloks};
//while(izteiksme) viena darbība;
//		izteiksmes rezultāts - ir 0 vai nav 0

// vēl ir cikls do{} while ()

#include <stdio.h>
#include<math.h>
int main()
{
	for( ;0; )
	{
		printf("Sis teksts netiks attēlots");
	}
	for( ;1; ) //lai ciklu apturētu terminālī ir jāspiež Ctrl + c
	{
		printf("So tekstu attelos visu laiku -noverosim bezgalīgu ciklu \n");
		break;
	}


	double a, s, precison;

	//printf("Pirms cikla:\n" );
	//printf("a = %20f (vai ar peldoso punktu %e)\n",a,a);

	for(a=0.35, s=0.5, precison = s/2;  fabs(a -1.0) > precison; a+=s, s+=0.001 )//a!=1.0 - neapstāsies 
	{
		printf("a = %.2f (vai ar peldošo punktu %g)\n" ,a,a);
		//printf("a-1.0 = %.20f (vai ar peldoso punktu %e)\n" ,a-1.0, a-1.0);

	}
	printf("Pēc cikla:\n");
	printf("a = %.2f (vai ar peldoso punktu %e)\n" ,a,a);

return 0;
}
