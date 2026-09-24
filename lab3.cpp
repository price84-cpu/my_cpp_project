#include <iostream> //includes input output stream to terminal//

int main()
{

    float vari_1 = 3;
    float vari_2 = 4;
    float vari_3 = 1;
    float vari_4 = 4;  

    float total_ = vari_1 + vari_2 + vari_3 + vari_4;

    std::cout <<"The sum of the variables is " << total_ << std::endl;


    float mean_ = total_/4; //finding the mean//

    std::cout <<"The mean of the variables is "<< mean_ << std::endl;


    float a = (vari_1 - mean_)*(vari_1 - mean_);
    float b = (vari_2 - mean_)*(vari_2 - mean_);
    float c = (vari_3 - mean_)*(vari_3 - mean_);
    float d = (vari_4 - mean_)*(vari_4 - mean_);  //subtracting mean from original variables, and squaring them

    std::cout << "The numbers after subtracting the mean and squaring them are " << a <<" "<< b <<" "<< c <<" "<< d << std::endl;
    

    float sqrd_vals = a + b + c + d;

    std::cout << "The sum of the squared numbers is " << sqrd_vals << std::endl;


    float variance = sqrd_vals/4;

    std::cout << "The squared values divided by N is " << variance << std::endl;
    

    return 0;
    
}