#include<stdio.h>
struct Employee
{
    int id;
    char Name[20];
    struct date{
        int month;
        int day;
        int year;
    };
};

int main(){
    struct Employee E1;
    //struct Employee.date dob;
    printf("Enter the id,name\t");
    scanf("%d%s",&E1.id,&E1.Name);
    printf("enter the date of birth day,month,year format\t");
    scanf("%d%d%d",&E1.day,&E1.month,&E1.year);

    //printing values 
    printf("Name :\t%s",E1.Name);
    printf("Employee Id :\t%d",E1.id);
    printf("Date of Birth :\t %d/%d/%d",E1.day,E1.month,E1.year);
    return 0;

}
