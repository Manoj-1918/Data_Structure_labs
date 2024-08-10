#include<stdio.h>
 
 struct students{
    char name[20];
    int id;
 };

 struct students get_data(struct students s1){
   struct students s; 
    printf("enter the name and id \n");
    scanf("%s%d",&s.name,&s.id);
    return (s);
 }

int main(){
    struct students e2,e;
    e2=get_data(e);
    printf(" printing the values \n");
    printf("Name : %s\n",e2.name);
    printf("Student Id: %d",e2.id);
    return 0;
}
