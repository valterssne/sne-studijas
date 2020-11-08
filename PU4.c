#include<stdio.h>

int n = 1;
long long fakt = 1;
int veids;
long long int sk;


int main()
{
    printf("Ievadiet skaitli, kam aprēķināt faktoriālu!\n");
    scanf("%lld" ,&sk);
    printf("Kādu datu tipi vēlaties izmantot? Ievadiet 1 - char, 2 - int, 3 - long long tipam\n");
    scanf("%d" ,&veids);
    printf("skaitlis ir %lld un datu tips ir %d\n" ,sk, veids);
    if(sk<0)
    {
        printf("Faktoriāls neeksistē šim skaitlim!\n");
    }
    else{
            if(veids == 1)
            {
                         do
                        {
                            fakt*=n;
                            n++;
                           
                        }
                        while(n<sk+1, fakt<=127);
                    printf("Faktoriālas no skaitļa %lld ir %lld" , sk, fakt);
            }        
            
            else if(veids == 2)
            {
                        while(n < sk + 1)
                        {
                            fakt*=n;
                            n++;
                        }
                    printf("Faktoriālas no skaitļa %lld ir %lld" , sk, fakt);
            } 
            
            else if(veids == 3)
            {
                       while(n < sk + 1)
                        {
                            fakt*=n;
                            n++;
                        }
                    printf("Faktoriālas no skaitļa %lld ir %lld" , sk, fakt);
                    }
            
            else{
                printf("Datu formāta ievades kļūda!\n");
                }
        }
        
return 0;
}
