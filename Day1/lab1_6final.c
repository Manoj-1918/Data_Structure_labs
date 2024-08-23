#include<stdio.h>
struct complex{
    float real;
    float imaginary;
};
struct complex add(struct complex c1,struct complex c2){
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.real+c2.imaginary;
    return (c3);
}
struct complex product(struct complex c1, struct complex c2){
    struct complex c3;
    c3.real=c1.real*c2.real - c1.imaginary*c2.imaginary;
    c3.imaginary=c1.real*c2.imaginary +c1.imaginary*c2.real;
    return (c3);
}

// passing structure pointer to the function 
struct complex multiply(struct complex *one,struct complex *two){
    struct complex c3;
    c3.real=one->real*two->real - one->imaginary*two->imaginary;
    c3.imaginary=one->real*two->imaginary +one->imaginary*two->real;
    return (c3);
}

int main(){
    struct complex c1,c2,c3,*one,*two;
    one=&c1;
    two=&c2;

// asking for operations

    int operation;
    printf(" \t\t The program is for\n (1)addition \n (2) multipication ..\n");
    printf("Enter 1/2 for the operation : ");
    scanf("%d",&operation);

//asking input from user ..
    printf("enter the real part and the imaginary part sequentially:  \n");
    scanf("%f%f",&c1.real,&c1.imaginary);
    printf("\n enter the real part and the imaginary part sequentially:  \n");
    scanf("%f%f",&c2.real,&c2.imaginary);



if(operation==1){
//calling by value passing complete structure.

    c3=add(c1,c2);
    printf("sum of both the given complex numbers:\n");
    printf("%.1f + %.1f i ",c3.real,c3.imaginary);
}
else if(operation==2){

    // call by reference
    c3=multiply(&c1,&c2);
    printf("\nproduct of the given complex number:\n");
    printf("%.1f + %.1f i",c3.real,c3.imaginary);



}
else
printf("This option is not available");


    // c3=product(c1,c2);
    // printf("\nproduct of the given complex number:\t");
    // printf("%.1f + %.1f i",c3.real,c3.imaginary);

    
    return 0;
}