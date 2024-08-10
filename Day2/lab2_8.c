#include<stdio.h>
 
 struct students{
    char name[20];
    int id;
 };

 struct students* get_data(struct students *s1){
   struct students s,*stud;
   stud=&s; 
    printf("enter the name and id \n");
    scanf("%s%d",stud->name,stud->id);
    return (stud);
 }

int main(){
    struct students e2,e,*data;
    data=&e2;
    data=get_data(&e);
    
    printf(" printing the values \n");
    printf("Name : %s\n",data->name);
    printf("Student Id: %d",data->id);
    return 0;
}