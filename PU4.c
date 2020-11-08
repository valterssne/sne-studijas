#include<stdio.h>

int n = 1;
long long fakt = 1;
int veids;
long long int sk;

int main()
{
    printf("Lūdzu, ievadiet decimālu skaitli, kam aprēķināt faktoriālu!\n");
    scanf("%lld" ,&sk);
    printf("Kādu datu tipi vēlaties izmantot? Ievadiet 1 - char, 2 - int, 3 - long long datu tipam!\n");
    scanf("%d" ,&veids);
    if(sk<0)
    {
        printf("Faktoriāls neeksistē šim skaitlim!\n");
    }
    else{
            if(veids == 1)
            {
                if(sk>5)
                {
                    printf("Nevar aprēķināt faktoriālu ar izvēleto datu tipu!!!\n");
                }
                
                else
                    {
                     while(n<sk+1)
                        {
                            fakt*=n;
                            n++;
                        }
                    printf("Faktoriālas no skaitļa %lld ir %lld.\n" , sk, fakt);
                    }
            }        
            
            else if(veids == 2)
            {
                if(sk>12)
                {
                    printf("Nevar aprēķināt faktoriālu ar izvēleto datu tipu!!!\n");
                }
                    
                else{
                    while(n < sk + 1)
                        {
                            fakt*=n;
                            n++;
                        }
                    printf("Faktoriālas no skaitļa %lld ir %lld.\n" , sk, fakt);
                    }
           } 
            
            else if(veids == 3)
           {
                if(sk>20)
                {
                    printf("Nevar aprēķināt faktoriālu ar izvēleto datu tipu!!!\n");
                }
                    
                else{
                    while(n < sk + 1)
                        {
                            fakt*=n;
                            n++;
                        }
                    printf("Faktoriālas no skaitļa %lld ir %lld.\n" , sk, fakt);
                    }
           }
        }
        
return 0;
}
