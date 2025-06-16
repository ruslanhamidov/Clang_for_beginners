#include <stdio.h>
#include <stdlib.h>


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
	person * dynamic_person = NULL;

	dynamic_person = (person *) malloc(sizeof(person));

	dynamic_person->name = "Brian";
	dynamic_person->last_name = "Griffin";
	dynamic_person->age = 12;
	dynamic_person->occupation = "writer";

	is_age_valid(dynamic_person);
	printf("Hey I am dynamically allocated person: %s %s\n", dynamic_person->name, dynamic_person->last_name);
	free(dynamic_person);
}