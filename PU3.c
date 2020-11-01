#include <stdio.h>

int main()
{
int a,b,c;
int d;
printf("Ievadiet 1. no 3 skaitļiem: \n");
scanf("%d" ,&a);

printf("Ievadiet 2. no 3 skaitļiem: \n");
scanf("%d" ,&b);

printf("Ievadiet 3. no 3 skaitļiem: \n");
scanf("%d" ,&c);

printf("Kā kārtot skaitļus? 123 - augošā vai 321 - dilstošā secībā\n");
scanf("%d" ,&d);

if(d == 123)
{
    if(a<b && a<c)
            {
    	if(b<c){
    	   printf("%d, %d, %d\n" , a,b,c);
    	        }
    	        
    		else{
    	   printf("%d, %d, %d\n" , a,c,b);
    	        }
    	    }
    	    
    	else if(b<a && b<c)
    		    {
    			if(a<c){
    			printf("%d, %d, %d\n" , b,a,c);
    			}
    			else
    			{
    			printf("%d, %d, %d\n" , b,c,a);
    		  	}
    	    }
    	    
    	else if(c<a && c<b){
    		if(b<a){
    		printf("%d, %d, %d\n" , c,b,a);
    			}
    		else{
    		printf("%d, %d, %d\n" , c,a,b);
    		    }
    		}

}
else if(d == 321)
{
    if(a>b && a>c)
            {
    	if(b>c){
    	   printf("%d, %d, %d\n" , a,b,c);
    	        }
    	        
    		else{
    	   printf("%d, %d, %d\n" , a,c,b);
    	        }
    	    }
    	    
    	else if(b>a && b>c)
    		    {
    			if(a>c){
    			printf("%d, %d, %d\n" , b,a,c);
    			}
    			else
    			{
    			printf("%d, %d, %d\n" , b,c,a);
    		  	}
    	    }
    	    
    	else if(c>a && c>b){
    		if(b>a){
    		printf("%d, %d, %d\n" , c,b,a);
    			}
    		else{
    		printf("%d, %d, %d\n" , c,a,b);
    		    }
    		}
}
else{
    printf("Ievades kļūda!\n");
}

return 0;
}
