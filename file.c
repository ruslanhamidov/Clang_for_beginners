#include <stdio.h>
#include <string.h>

int calculate_average(int sum, int div)
{
	return sum / div;
}


struct my_struct {
	int num;
	char character;
};


typedef struct {
	int age;
	char * name;
	char * last_name;
	char * occupation;
} person;


int main()
{
	int my_var = 2;
	char new_variable = 'A';
	float floating_number = 34.533;

	printf("%d %c %f", my_var, new_variable, floating_number);
	printf("Hello my program\n");
	int a = 2, b = 3, c = 4;
	float g = a + b + c + 2.32;

	printf("My number is: %f\n", g);
	int my_numbers[3];
	my_numbers[0] = 3;
	my_numbers[1] = 10;
	my_numbers[2] = 5;

	printf("average of numbers array is: %d\n", (my_numbers[0] + my_numbers[1] + my_numbers[2]) / 3);

	int matrix[3][3] = {
	{2, 5, 4},
	{3, 9, 6},
	{8, 6, 5}
	};
	printf("Column 1 Row 3 value is:  %d\n", matrix[2][1]);
	
	if (my_numbers[1] > matrix[2][1])
	{
		printf("my numbers outscore matrix :)\n");
	}
	
	char my_str[] = "Hey";
	char new_str[] = "Dot";
	char ant_str[] = "com";

	int str_lengths[3];

	str_lengths[0] = strlen(my_str);
	str_lengths[1] = strlen(new_str);
	str_lengths[2] = strlen(ant_str);
	int sum = 0;
	for (int i = 0; i < 3; i++){
		sum+= str_lengths[0];
	}
	printf("sum of string lenths are %d\n", sum);


	printf("average of sum of string lengths are: %d\n", calculate_average(sum, 3));


	int val_var = 10;
	int * ptr_var = &val_var;

	printf("address of value: %p\ndereferencing the value with pointer: %d\nincreasing the value of var with pointer: %d\n", ptr_var, *ptr_var, *ptr_var+1);

	int arr[] = {123, 34, 53, 56};

	printf("what happens when we want to print array: %p\naccessing second value of arr with dereferemce: %d\n", arr, *(arr+1));	

	struct my_struct new_st;
	
	new_st.num = 10;
	new_st.character = 'A';

	int l = new_st.num;


	printf("num of my struct: %d\nchar of my struct: %c\n", l, new_st.character);

	person new_person;

	new_person.age = 24;
	new_person.name = "John";
	new_person.last_name = "Carmack";
	new_person.occupation = "Programmer";

	printf("My name is %s and my occupation is %s\n", new_person.last_name, new_person.occupation);


}
