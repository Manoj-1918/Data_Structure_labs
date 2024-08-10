#include<stdio.h>
    struct date{
        int month;
        int day;
        int year;
    };
struct Employee
{
    int id;
    char Name[20];
    struct date doj;

};

int main(){
    struct Employee E1;
    //struct Employee.date dob;
    printf("Enter the id,name\t");
    scanf("%d%s",&E1.id,&E1.Name);
    printf("enter the date of birth day,month,year format\t");
    scanf("%d%d%d",&E1.doj.day,&E1.doj.month,&E1.doj.year);

    //printing values 
    printf("Name :\t%s\n",E1.Name);
    printf("Employee Id :\t%d\n",E1.id);
    printf("Date of Birth :\t %d/%d/%d\n",E1.doj.day,E1.doj.month,E1.doj.year);
    return 0;

}