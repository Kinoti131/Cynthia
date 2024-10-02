#include<stdio.h>
int main() {
int age;
float salary;

printf("enter the age");
scanf("%d",&age);

printf("enter salary");
scanf("%f",&salary);

if(age>=21&&salary>=21000) {
printf("congratulations you qualify for the loan");
} else {
printf("unfortunately we are unable to offer you loan at this time");
}
return 0;
}