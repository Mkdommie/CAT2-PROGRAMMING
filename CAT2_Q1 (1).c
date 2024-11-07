#include <stdio.h>
#include<string.h>

struct employee{
char name[25];
char department[20];
char email[15];
float salary;
int id;
}employee;

int main (){
// struct employee;
  strcpy(employee.name,"John Doe");
 int id=12345;
  strcpy(employee.email,"john.doe@company.com");
  strcpy(employee.department,"Human Resources");
  float salary= 55000.50;
  
  printf("name:%s\n",employee.name);    
  printf("salary:%.2f\n",salary);
  
  printf("email :%s\n",employee.email);
  printf("department:%s\n",employee.department);
  printf("id:%d\n",id);
 
  return 0;
  
  }
    