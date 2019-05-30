#include <stdio.h>
#include <string.h>
#include "student.h"
int main()
{
	char input[15];
  char firstname[15];
  char lastname[15];
	int numberstudents, age, studentid;
	printf("How many students in the struct?\n");
	fgets(input, 15, stdin);
	sscanf(input, "%d", &numberstudents);
	struct Student student[10];
	for (int i = 0; i < numberstudents; i++)
	{
    printf("\n\nStudent %d\n", i + 1);
		printf("first name:\n");
		fgets(input, 30, stdin);
		sscanf(input, "%s",firstname);
		printf("last name:?\n");
		fgets(input, 30, stdin);
		sscanf(input, "%s", lastname);
		printf("age:\n");
		fgets(input, 30, stdin);
		sscanf(input, "%d", &age);
		printf("student ID:\n");
		fgets(input, 30, stdin);
		sscanf(input, "%d", &studentid);
		strcpy(student[i].firstname, firstname);
		strcpy(student[i].lastname, lastname);
		student[i].age = age; 
		student[i].studentid = studentid;
	}
	for (int i = 0; i < numberstudents; i++)
	{
		printStudent(&student[i]);
	}

}
