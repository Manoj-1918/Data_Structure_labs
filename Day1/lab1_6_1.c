#include<stdio.h>
struct complexnumbers{
    float real;
    float imaginary;
    float sum_real;
    float multipy_real;
    float sum_imaginary;
    float multiply_imaginary;
};

//void addition(complexnumbers i,complexnumbers j);
void multipication(float *complex1real,float *complex2real,float *complex1imaginary,float *complex2imaginary);
int main(){
    int operation;
    printf(" \t\t The program is for (1)addition and (2) multipication ..\n");
    printf("Enter 1/2 for the operation : ");
    scanf("%d",&operation);

    struct complexnumbers complex1;
    struct complexnumbers complex2;

    
        printf("enter the real then imaginary part of first  number :\t");
        scanf("%f%f",&complex1.real,&complex1.imaginary);

        printf("enter the real then imaginary part of second number :\t");
        scanf("%f%f",&complex2.real,&complex2.imaginary);
    

    if(operation==1){
       //addition(complex[0],complex[1]);
       float real1=complex1.real + complex2.real ;
       float imaginary1=complex2.imaginary + complex1.imaginary;
       printf("%.2f (+)  %.2fi ",real1,imaginary1);

    }
    else if(operation==2){
       multiplication(&complex1.real,&complex2.real,&complex1.imaginary,&complex2.imaginary);
    //    float real=complex1.real * complex2.real - complex1.imaginary * complex2.imaginary ;
    //    float imaginary=complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;
    //    printf("%.2f (+)  %.2fi ",real,imaginary);

    }
    else
    printf("The inputed operation number is invalid//");


    return 0;
}
void multiplication(float *complex1real,float *complex2real,float *complex1imaginary,float *complex2imaginary){
       float real=(*complex1real) * (*complex2real) - (*complex1imaginary) * (*complex2imaginary) ;
       float imaginary=(*complex1real) * (*complex2imaginary) + (*complex1imaginary) * (*complex2real);
       printf("%.2f (+)  %.2fi ",real,imaginary);
}