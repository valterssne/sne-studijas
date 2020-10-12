//Operācijas
// Loģiskās operācijas: &&,  ||
//salidzinasanas operaciajs 
// loģ oper pa bitiem &, |  , ~


#include <stdio.h>

int main()
{
	char a = 0;
	char b = 5;

	char c = a && b;
//	printf("%d && %d = %d\n",a,b,c);
	c = a < b;
	printf("%d < %d = %d\n" ,a,b,c);
	c = a > b;
	printf("%d > %d = %d\n" ,a,b,c);
	c = a <= b;
	printf("%d <= %d = %d\n" ,a,b,c);
	c = a >= b;
	printf("%d =< %d = %d\n" ,a,b,c);
	c = a == b;
	printf("%d == %d = %d\n" ,a,b,c);
	c = a != b;
	printf("%d != %d = %d\n" ,a,b,c);
	printf(" Salidzinasanas operacijas datu tipa izmers (operandi ar chart datu tipu): %d\n",sizeof(a<b));
	printf(" Salidzinasanas operacijas datu tipa izmers (operandi ar int datu tipu): %d\n",sizeof(0<5));

	printf("5>6 && 5!=6 = %d\n", ((5>6)&&(5!=6)));
	printf("5<6 && 5!=6 = %d\n", ((5<6)&&(5!=6)));


	printf("5<6 || 5!=6 = %d\n", ((5<6)||(5!=6)));
	printf("5<6 || 5!=6 = %d\n", ((5<6)||(5!=6)));

	printf("5 & 6 =  %d\n",5&6); // 0000 0101 & 0000 0110 = 0000 0100
	printf("5 | 6 =  %d\n",5|6); // 0000 0101 | 0000 0110 = 0000 0111
	printf(" ~6 =  %d\n",~6); // 0000 0110  = (1)111 1001 -> -000 0110 + 1 -> -000 0111 -> -7

	return 0;
}
