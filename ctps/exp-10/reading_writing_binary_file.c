#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Structure declaration
struct Employee {
  int emp_id;
  char name[50];
  float salary;
};


int main(){

// creating structures
struct Employee e1 = {1, "Subhash", 100000};
struct Employee e2 = {2, "Shreyas", 1000000};

FILE *fp;

//Writing to file

fp=fopen("employee.dat", "wb");
if(fp==NULL){
  printf("Unable to open file for writing");
  return 1;
}

fwrite(&e1, sizeof(struct Employee), 1, fp);
fwrite(&e2, sizeof(struct Employee), 1, fp);
fclose(fp);

// Reading from file

fp=fopen("employee.dat", "rb");
if(fp==NULL){
  printf("Unable to open file for reading");
  return 1;
} 

fread(&e1, sizeof(struct Employee), 1, fp);
fread(&e2, sizeof(struct Employee), 1, fp);
fclose(fp);


//e1.emp_id = 1;
//strcpy(e1.name, "Subhash");
//e1.salary = 32000;

printf("Printing emp1 data....\n");
printf("EmpID: %d, Emp Name: %s, Salary: %.2f", e1.emp_id, e1.name, e1.salary);

printf("\nPrinting emp2 data....\n");
printf("EmpID: %d, Emp Name: %s, Salary: %.2f", e2.emp_id, e2.name, e2.salary);


return 0;
}
