#include<stdio.h>
struct employee{
    int employe_id;
    char Name[50];
    char Degination[50];
    float basicSalary;
    float hra_percent,da_percent;
    float gross_salary;

};
int main(){
    int n;
    printf("enter the number of data to save.");
    scanf("%d",&n);
    struct employee Eid[n];
    // taking data from  user.
    for(int i=0;i<n;i++){
        printf("enter the above detail for employee %d in order compulsary\n",i+1);
        scanf("%d%s%s%f%f%f", &Eid[i].employe_id,&Eid[i].Name,&Eid[i].Degination,&Eid[i].basicSalary,&Eid[i].hra_percent,&Eid[i].da_percent);
        Eid[i].gross_salary=Eid[i].basicSalary+(Eid[i].basicSalary*Eid[i].hra_percent/100)+(Eid[i].basicSalary*Eid[i].da_percent/100);
        
    }

    //showing data in console
    printf("Eid \t Nam \t Deg \t BaS \t\t HR% \t DA% \t Gross Salary\n");
     for(int i=0;i<n;i++){
        
        printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", Eid[i].employe_id,Eid[i].Name,Eid[i].Degination,Eid[i].basicSalary,Eid[i].hra_percent,Eid[i].da_percent,Eid[i].gross_salary);
        
    }
    // another format of print
// for(int i=0;i<n;i++){
//             printf(" Employee Id:\t  %d \n", Eid[i].employe_id);
//         printf("Name :\t %s\n",Eid[i].Name);
//         printf("Degination:\t %s\n",Eid[i].Degination);
//         printf("Basic Salary:\t %.2f\n",Eid[i].basicSalary);
//         printf("Gross Salary:\t%.2f\n",Eid[i].gross_salary);
// }
    

}