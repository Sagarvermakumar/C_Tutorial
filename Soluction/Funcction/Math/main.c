#include <stdio.h>
#include <math.h>
int main()
{
    float number = 100;
    // sqrt(n) : squre root of n
    printf("%f\n", sqrt(number));

    // pow(x,y):  x to the power of y
    printf("%f\n", pow(number, 2));

    // ceil(n) : round n upwards to its nearest integer
    printf("%f\n", ceil(number + 1.4));

    // floor(n) : round n downwords to its nearest integer
    printf("%f\n", floor(number + 1.4));

    // acos() : computes arc cosine
    printf("%f\n", acos(number));

    // abs(x) Returns the absolute value of x;
    // acos(x) Returns the arccosine of x;
    // asin(x) Returns the arcsine of x;
    // atan(x) Returns the arctangent of x;
    // cbrt(x) Returns the cube root of x;
    // cos(x) Returns the cosine of x;
    // exp(x) Returns the value of Ex;
    // sin(x) Returns the sine of x(x is in radians);
    // tan(x) Returns the tangent of an angle;
    return 0;
}