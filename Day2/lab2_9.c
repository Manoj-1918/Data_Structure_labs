#include<stdio.h>
 
 struct students{
    char name[20];
    int age;
    int marks;
 };

 void get_data(struct students s1[],int n){
   for(int i=0;i<n;i++){
    printf("enter the name age and mark \n");
    scanf("%s%d%d",&s1[i].name,&s1[i].age,&s1[i].marks);
   }
 }

int main(){
    int n;
    printf("enter no of data to be stored");
    scanf("%d",&n);
    struct students e2[n];
    get_data(e2,n);
 printf(" printing the values \n");
    for(int i=0;i<n;i++){
   
    printf("Name : %s\n",e2[i].name);
    printf("Age: %d\n",e2[i].age);
    printf("Marks: %d\n",e2[i].marks);

    }
    return 0;
}