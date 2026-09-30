#include <iostream> //includes input output stream to terminal//
#include <fstream> //allows the code to access files on the computer//
#include <cmath> //includes the math library for more complex math functions//

int main()
{
    std::ifstream infile;
    infile.open("C:/Users/jaxon/Documents/School/Computer_Science/Lab3/LabThreeVariables.txt");

    int vari_1;
    int vari_2;
    int vari_3;
    int vari_4;

    infile >> vari_1;
    infile >> vari_2;
    infile >> vari_3;
    infile >> vari_4;


    float total_ = vari_1 + vari_2 + vari_3 + vari_4;

    std::cout <<"The sum of the variables is " << total_ << std::endl;


    float mean_ = total_/4; //finding the mean//

    std::cout <<"The mean of the variables is "<< mean_ << std::endl;


    float a = (vari_1 - mean_)*(vari_1 - mean_);
    float b = (vari_2 - mean_)*(vari_2 - mean_);
    float c = (vari_3 - mean_)*(vari_3 - mean_);
    float d = (vari_4 - mean_)*(vari_4 - mean_);  //subtracting mean from original variables, and squaring them//

    std::cout << "The numbers after subtracting the mean and squaring them are " << a <<" "<< b <<" "<< c <<" "<< d << std::endl;
    

    float sqrd_vals = a + b + c + d; //finding the sum of the squared values//

    std::cout << "The sum of the squared numbers is " << sqrd_vals << std::endl;


    float variance = sqrd_vals/4; //Taking the new sum, and dividing by N, which is 4 in this case//

    std::cout << "The squared values divided by N is " << variance << std::endl;
    

    float final = std::sqrt(variance); /* using the cmath library, it calls
                                          the square root function in order 
                                          to find the sqaure root of the variance */

    std::cout << "The final is "<< final << std::endl;

    return 0;
}