#include <iostream>

float calculateVolume(float length_);

int main()

{
    float length_ = 3.5; //Stating what the lenght of the cube is//

    std::cout <<"The Volume of the cube" <<" is "<< calculateVolume(length_)<< std::endl; //What will display with the volume value//

    return 0;

}

float calculateVolume(float length_)
{
    return length_* length_* length_; //Multiplying the variable that was set earlier
}