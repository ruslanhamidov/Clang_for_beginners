#include <stdio.h>


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


void is_age_valid(person * p)
{
	printf("Your age is: %d\n", p->age);
        if (p->age > 18){
                printf("You are valid for job %s\n", p->name);
        }
        else if (p->age >= 60){
                printf("Ypu have to retire\n");

        }
        else
        {
                printf("Sorry you are not valid for job %s\n", p->name);
        }
}


int main()
{
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

	is_age_valid(&new_person);
}