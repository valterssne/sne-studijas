//data_type_of_returned_value  user_function( place for arguments ){ place for actions; retunr returned_value;  }
//					function can  be with or without(argument(s))
//data_type_of_retuned_value -void     				f-ion can be without return 
//1. function without arguments, without returned value
//2. function without arguments, with returned value
//3. function with arguments, without returned value
//4. function with arguments, with returned value
//
// function can be defined before main
// function can be defined before main and after main defined


#include <stdio.h>
//int a_2 = 0;

void my_first_function();
int my_second_function();
void my_third_function(int in_a_3);


int main()
{
	int a_main;
	printf("Hello World! From main function.\n");
	my_first_function();
	printf("output of second function result %d from main function\n" ,(my_second_function()));
	my_second_function();
	a_main = my_second_function;
	printf("a_main = %d from main function\n" ,a_main);
	my_third_function(100);

return 0;
}

void my_first_function()
{
	printf("Hello World! From my first user function.\n");
}

int my_second_function()
{
	int a_2 = 100;
	printf("Hello World! From my second user function.\n");
	printf("a_2 = %d from second function\n" ,a_2);
	return a_2;

}
void my_third__function(int in_a_3)
{
	printf("Hello World! From my third user function.\n");
	printf("in_a_3 = %d from third function\n" ,in_a_3);
}
