#include <iostream>

float calculate(float x);
float calculate(float y);
float calculate(float z);
float calculate(float t);

int main()
{
    float x = 10;
    float y = x*x;
    float z = x/4;
    float t = y/z;

    std::cout<< "The function will output "<< t << " when x is equal to "<< x<< std::endl;

    return 0;
}

float calculate(float t)
{
    return t;
}

