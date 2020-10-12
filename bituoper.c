//Operācijas:
//bitu operacija : << un >>
// salīdzināšanas operācijas <, >, =<, =>, ==, != -> rezultats ir  0 vai 1
#include <stdio.h>
#include <time.h>
int main()
{
	char a = 5; // 0000 0101
	char b = 1;
	char c; // 0/000 0101 << 1 -> 0000 101/0 (0000 1010)

	clock_t begin = clock();
	c = a << b; // 0000 0/101 << 5 -> 1010 0000 101 11
//					  -101 1111
//				      +           1
//					   110 0000
// 1*2^5 + 1* 2^6 = 32 +64 = 


	 clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; // errors man
	printf("Reizināšana ar 2 ar << oper: %g\n ",time_spent);
	printf("%d << %d = %d\n ",a,b,c);

/*
	b = 2;
	c = a << b;  // 00/00 0101 << 2 -> 0001 01/00 (0001 0100)
	printf("%d << %d = %d\n ",a,b,c);
	b = 3;
	c = a << b; // 000/0 0101 << 3 -> 0010 1/000 (0010 1000)
	printf("%d << %d = %d\n ",a,b,c);
*/
	a = 100;
	


	return 0;


}

