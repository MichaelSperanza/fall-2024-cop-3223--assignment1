//*******************************
// fracturing.c
// Author: Michael Speranza
// Class: COP 3223, Professor Parra
// Purpose: 
// Input: None
//
// Output: 
// //******************************

//Header file

#include <stdio.h>
#include <math.h>
#define pi 3.14159

double calculateDistance()
{
    double x1;
    double x2;
    
    printf("Enter x1 and x2: \n");
    scanf("%lf, %lf", &x1, &x2);
    
    double y1;
    double y2;
    
    printf("Enter y1 and y2: \n");
    scanf("%lf, %lf", &y1, &y2);

    double change_x;
    change_x = x2 - x1;
    
    double change_y;
    change_y = y2 - y1;

    double Xsqrd;
    Xsqrd = change_x * change_x;
    
    double Ysqrd;
    Ysqrd = change_y * change_y;

    double Dsqrd;
    Dsqrd = Xsqrd + Ysqrd;
    
    double Distance;
    Distance = sqrt(Dsqrd);

    printf("The distance between the two points is %.3lf \n", Distance);

    return Distance;

}

double calculatePerimeter(double Distance)
{
    
    double x1;
    double x2;
    
    printf("Enter x1 and x2: \n");
    scanf("%lf, %lf", &x1, &x2);
    
    double y1;
    double y2;
    
    printf("Enter y1 and y2: \n");
    scanf("%lf, %lf", &y1, &y2);

    double Perimeter;
    Perimeter = Distance * pi;

    



   







}

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculatePerimeter();

    return 0;
}