#include<stdio.h>

int main()
{
 /*
    char a = 'A';
    int b = 5;
    double c =3.6;
   
    printf("sizeof f-jas rezultāta izmērs %lu\n",sizeof(sizeof(a)));
    printf("sizeof f-jas rezultāta izmērs %lu\n",sizeof(sizeof(b)));
    printf("sizeof f-jas rezultāta izmērs %lu\n",sizeof(sizeof(c)));
 
   
    printf("a mainiga adrese - %p\n",&a);
    printf("a mainiga adreses izmers - %lu\n",sizeof(&a));
    printf("a mainiga adreses izmers - %d\n",sizeof*(&a));
    printf("vertiba pec siis adreses - %d\n",*(&a));
    printf("vertiba izmers baitos peec adreses -%lu\n\n",sizeof(*(&a)));


    printf("b mainiga adrese - %p\n",&b);
    printf("b mainiga adreses izmers - %lu\n",sizeof(&b));
    printf("b mainiga adreses izmers - %d\n",sizeof*(&b));
    printf("vertiba pec siis adreses - %d\n",*(&b));
    printf("vertiba izmers baitos peec adreses -%lu\n\n",sizeof(*(&b)));
 
    
    printf("c mainiga adrese - %p\n",&c);
    printf("c mainiga adreses izmers - %lu\n",sizeof(&c));
    printf("c mainiga adreses izmers - %d\n",sizeof*(&c));
    printf("vertiba pec siis adreses - %.1f\n",*(&c));
    printf("vertiba izmers baitos peec adreses -%lu\n\n",sizeof(*(&c)));
*/
    
/*
    char a = 5;
    int *pa = &a;
   
    printf("adrese vertiba pirms izmainjam - %p\n",pa);
    printf("mainiga vertiba pirms izmainjam - %d\n\n",a);
    
   *pa=*pa+1;
    
    printf("adrese vertiba pēc izmainjam - %p\n",pa);
    printf("mainiga vertiba pēc izmainjam - %d\n\n",a);
*/
  
  /*
    int a = 5;
    int *pa = &a; 
    int **ppa=&pa; 
   
    printf("mainiga vertiba - %d\n",a);
    printf("mainiga adrese - %p\n",pa);
    printf("adreses adrese - %p\n",ppa);
    printf("mainiga adrese - %p\n",*ppa);
    printf("mainiga vertiba - %d\n",**ppa);
*/    
    
/*


*/
    
    return 0;
}

/*
#include<stdio.h>

void test(int *paa)
{
     printf("mainiga vertiba no main - %p\n",paa);
    printf("mainiga adrese no main - %d\n\n",paa);
    *paa=*paa+10;
}

int main()
{
    int a = 5;
    int *pa = &a; 
   
    printf("mainiga vertiba no main pirms test - %d\n",a);
    printf("mainiga adrese no main pirms test - %p\n\n",pa);
    test(pa);
    printf("mainiga vertiba no main pec test - %d\n",a);
    printf("mainiga adrese no main pec test - %p\n",pa);
    
    return 0;
}
*/
