#include <iostream>

float calculateVolume(float length_,float pi_v);


int main()

{
    float length_ = 3.5; //Stating what the lenght of the cube is//

    float pi_v = 3.1415; //putting an aproximation to pi//

    std::cout <<"The Volume of the cube" <<" is "<< calculateVolume(length_)<< std::endl; //What will display with the volume value//

    return 0;

}

float calculateVolume(float length_, float pi_v)
{
    return length_* length_* pi_v; //Multiplying the variable that was set earlier
}