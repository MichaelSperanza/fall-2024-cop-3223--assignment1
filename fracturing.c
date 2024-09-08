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

// Distance Function
double calculateDistance()
{
    // Asking for user input
    double x1;
    double x2;
    
    printf("Enter x1 and x2: \n");
    scanf("%lf %lf", &x1, &x2);
    
    double y1;
    double y2;
    
    printf("Enter y1 and y2: \n");
    scanf("%lf %lf", &y1, &y2);

    // Math
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

    // Print and return distance
    printf("The distance between the two points is %.3lf \n", Distance);

    return Distance;

}

// Perimeter function
double calculatePerimeter()
{
    // Calling the Distance function
    double distance;
    distance = calculateDistance();
    double Perimeter;

    // Math
    Perimeter = distance * pi;

    // Print perimeter and return difficulty
    double PDifficulty;
    PDifficulty = 4;
    printf("The perimeter of the city encompassed by your request is %.3lf \n", Perimeter);
    
    return PDifficulty;
   
}

// Area Function
double calculateArea()
{
    // Calling the Distance Function
    double distance;
    distance = calculateDistance();

    // Math
    double radius;
    radius = distance / 2;

    double Area;
    Area = pi * pow(radius, 2);

    // Print the area and return Difficulty
    double ADifficulty;
    ADifficulty = 3;
    printf("The area of the city encompassed by your request is %.3lf \n", Area);

    return ADifficulty;

}

// Width Function
double calculateWidth()
{
    // Asking for user input
    double x1;
    double x2;
    
    printf("Enter x1 and x2: \n");
    scanf("%lf %lf", &x1, &x2);
    
    double y1;
    double y2;
    
    printf("Enter y1 and y2: \n");
    scanf("%lf %lf", &y1, &y2);

    // Math
    double change_x;
    change_x = x2 - x1;
    
    double change_y;
    change_y = y2 - y1;

    double Xsqrd;
    Xsqrd = change_x * change_x;
    
    double Ysqrd;
    Ysqrd = change_y * change_y;

    double Wsqrd;
    Wsqrd = Xsqrd + Ysqrd;
    
    double Width;
    Width = sqrt(Wsqrd);

    // Print and return statements
    double WDifficulty;
    WDifficulty = 1;
    printf("The width of the city encompassed by your request is %.3lf \n", Width);

    return WDifficulty;

}

// Height function
double calculateHeight()
{
    // Asking for user input
    double x1;
    double x2;
    
    printf("Enter x1 and x2: \n");
    scanf("%lf %lf", &x1, &x2);
    
    double y1;
    double y2;
    
    printf("Enter y1 and y2: \n");
    scanf("%lf %lf", &y1, &y2);

    // Math
    double change_x;
    change_x = x2 - x1;
    
    double change_y;
    change_y = y2 - y1;

    double Xsqrd;
    Xsqrd = change_x * change_x;
    
    double Ysqrd;
    Ysqrd = change_y * change_y;

    double Hsqrd;
    Hsqrd = Xsqrd + Ysqrd;
    
    double Height;
    Height = sqrt(Hsqrd);

    // Print and difficulty statements
    double HDifficulty;
    HDifficulty = 1;
    printf("The height of the city encompassed by your request is %.3lf \n", Height);

    return HDifficulty;

}

// UserInput function
double askForUserInput()
{
    double input;
    scanf("%lf", &input);

    // Return the input value
    return input;
}

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    askForUserInput();


    return 0;
}