#include <stdio.h>

int main()
{
	int val_var = 10;
	int * ptr_var = &val_var;
	printf("address of value: %p\ndereferencing the value with pointer: %d\nincreasing the value of var with pointer: %d\n", ptr_var, *ptr_var, *ptr_var+1);
	int arr[] = {123, 34, 53, 56};
	printf("what happens when we want to print array: %p\naccessing second value of arr with dereferemce: %d\n", arr, *(arr+1));
}