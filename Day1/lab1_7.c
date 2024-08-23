#include<stdio.h>
struct Students{
    char name[40];
    int age;
    float total_mark;

};
int main()
{
    struct Students s[2];
    // name= (*char)malloc(40*sizeof(char));
    int sum=0;
  
    for(int i=0;i<2;i++)
    {
        printf("enter the name of student %d",i+1);
        scanf("%s",s[i].name);
        printf("enter the age of student %d",i+1);
        scanf("%d",&s[i].age);
        printf("enter the total mark of student %d",i+1);
        scanf("%f",&s[i].total_mark);

    }

    for(int i=0;i<2;i++)
    {
    
        printf("\nName      :\t%s", s[i].name);
        printf("\nAge       :\t%d",s[i].age);
        printf("\nTotal Mark:\t%.1f",s[i].total_mark);
        sum=sum+s[i].total_mark;

    }
    printf( "\n\n Average   :\t %f",sum/2.0);
    return 0;
}