#include<stdio.h>
#include<conio.h>
int main()
{
    int R;
    float A;
    printf("Enter the radius");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("Area of circle is %f having the radius %d",A,R);
}
