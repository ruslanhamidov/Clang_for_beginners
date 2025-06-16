#include <stdio.h>
#include <string.h>


int calculate_average(int sum, int div)
{
	return sum / div;
}


int main()
{
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

}