#include<stdio.h>
struct distance{
    float feet;
    float inch;

};

struct distance add(struct distance d1,struct distance d2){
    struct distance d3;
    (d3.feet)=(d1.feet)+(d2.feet);
    d3.inch=d1.inch+d2.inch;
    d3.feet=d3.feet+(int)(d3.inch)%12;
    d3.inch=d3.inch/12.0;


    return d3;
}
struct distance * refAdd(struct distance *d1,struct distance *d2){
    struct distance Dr,*d3;
    d3=&Dr;

    (d3->feet)=(d1->feet)+ (d2->feet);
    (d3->inch)=(d1->inch)+ (d2->inch);
    d3->feet=d3->feet +((int)(d3->inch)%12);
    d3->inch=d3->inch/12.0;
    

    return (d3);
    
}

int main(){
    struct distance d1,d2,r,*p;
    printf("enter the 2 distances with feet and inch ");
    scanf("%f%f%f%f",&d1.feet,&d1.inch,&d2.feet,&d2.inch);
    printf("output by calling by value");
    r=add(d1,d2);
    printf("\nfeet%.1f \t,  inch%.1f",r.feet,r.inch);
    printf("output by calling by referene");
    p=refAdd(&d1,&d2);
    printf("\n\nfeet%.1f \t,  inch%.1f",p->feet,p->inch);
    return 0;

}
