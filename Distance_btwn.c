// Write a program to calculate the distance between two points.
#include<stdio.h>
#include<math.h>
void main()
{
    // printing the Name, Roll no. and Question.
    printf("Name: Hangsaraj rai\n");
    printf("Roll No: 8\n");
    printf("Q8:Program to calculate distance between two points.\n"); 

    
    int x,y;
    float result;
    printf("Enter the value of x co-ordinate: ");
    scanf("%d",&x);
    printf("Enter the value of y co-ordinate: \n");
    scanf("%d",&y);

    x=pow(x,2);
    y=pow(y,2);
    result=x+y;
    // result = (x^2 + y^2)^(1/2)
    result=sqrt(result);
    printf("The Distance Between %d and %d is:%.2f\n",x,y,result);
}