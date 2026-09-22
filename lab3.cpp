#include <iostream>

int calculate(int w, int x, int y, int z);  //declaring what variables are gonna be calculated//

int Main()
{
    
    int w = 3;
    int x = 4;
    int y = 1;
    int z = 7;  //stating what each variable is equal to//


    float calculate(float t, float m, float a, float b, float c, float d);

    float t = w + x + y + z;  //adding all of the variables up for the sum//

    std::cout << calculate(t) << std::endl;

    return 0; 
/*
    float m = t/4; //finding the mean//

    float a = (w - t)*(w - t);
    float b = (x - t)*(x - t);
    float c = (y - t)*(y - t);
    float d = (z - t)*(z - t);  //subtracting mean from original variables, and squaring them
    */
}