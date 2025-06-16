#include <stdio.h>


int main()
{
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
}