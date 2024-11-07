#include<stdio.h>
#include<string.h>
struct structure{

// declaration of variables

char name[25];
int id;
char department [20];
float salary;
char email [50];
	
}employee;
int main (){
	
	//struct employee
	
	strcpy(employee.name,"John Doe");
	employee.id = 12345;
	strcpy(employee.department,"Human Resources");
	employee.salary = 55000.50;
	strcpy(employee.email,"johndoe@company.com");
	
	// printing the values
	printf("name %s  John Doe \n",employee.name);
	printf("id %d \n",employee.id);
	printf("department Human Resources \n",employee.department);
	printf("salary  %f \n ",employee.salary);
	printf("email %s johndoe@company.com \n",employee.email);
	
	return 0;
}
