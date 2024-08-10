// 3.3 WAP to represent the polynomial of single variable using 1-D array and perform the
// addition of two polynomial equations.


#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the degree of first polynomial:\t");
    scanf("%d",&m);
    printf("Enter the degree of second polynomial:\t ");
    scanf("%d",&n);
    m++,n++; 
    int pol1[m];
    int pol2[n];
    int a = (m>n)?m:n;
    int sumpol[a];

    //initialize each array as 0
    for (int i=0;i<m;i++)       pol1[i] = 0;
    for (int i=0;i<n;i++)       pol2[i] = 0;
    for(int i=0;i<a;i++)        sumpol[i]=0;

    //getting the polynomials
    printf("enter the co-efficient of first polynomial\n");
    for(int i=0;i<m;i++){
        printf("co-efficient of variable power to %d :  ",i);
        scanf("%d",&pol1[i]);
    }

        printf("enter the co-efficient of second polynomial\n");
    for(int i=0;i<n;i++){
        printf("co-efficient of variable power to %d :  ",i);
        scanf("%d",&pol2[i]);
    }



    // working for sum of polynomials
    
    for(int i=0;i<m;i++)        sumpol[i]=pol1[i];
    for(int i=0;i<a;i++)        sumpol[i]+=pol2[i];


     printf("\nSum of polynomials:\n");
    for (int i = 0; i < a; i++) {
        if (i == a - 1)
            printf("%dx^%d", sumpol[i], i);
        else
            printf("%dx^%d + ", sumpol[i], i);
    }




    //working for multiplication of polynomials
    int b=m+n-1;
    int product[b];
    for(int i=0;i<b;i++) product[i]=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            product[i+j]+=pol1[i]*pol2[j];
        }
    }


     printf("\n\nproduct  of polynomials:\n");
    for (int i = 0; i < a; i++) {
        if (i == a - 1)
            printf("%dx^%d", product[i], i);
        else
            printf("%dx^%d + ", product[i], i);
    }

    return 0;

}