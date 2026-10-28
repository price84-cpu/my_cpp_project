#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    int six;
    int seven;
    int eight;
    int nine;
    int ten;
    int eleven;
    int twelve;
    int Counter;
    char STAR;

    STAR = 42;

    std::ifstream infile;
    infile.open("C:/Users/jaxon/Documents/School/Computer_Science/Lab4/WeatherTemps.txt");

    infile >> six;
    infile >> seven;
    infile >> eight;
    infile >> nine;
    infile >> ten;
    infile >> eleven;
    infile >> twelve;

    six = six + 30;
    seven = seven + 30;
    eight = eight + 30;
    nine = nine + 30;
    ten = ten + 30;
    eleven = eleven + 30;
    twelve = twelve + 30;
   
    std::cout<<"The hourly temps are:"<<std::endl;

 std::cout<<"6am "<<std::endl;
    if (six >= 3)
    {

        while (six >= 3)
        {
            std::cout<<STAR;
            six = six - 3;
        }
    }

        std::cout<<" "<<std::endl;

    std::cout<<"7am "<<std::endl;
    if (seven >= 3)
    {

        while (seven >= 3)
        {
            std::cout<<STAR;
            seven = seven - 3;
        }
    }

        std::cout<<" "<<std::endl;


    std::cout<<"8am "<<std::endl;
    if (eight >= 3)
    {

        while (eight >= 3)
        {
            std::cout<<STAR;
            eight = eight - 3;
        }
    }

        std::cout<<" "<<std::endl;


    std::cout<<"9am "<<std::endl;
    if (nine >= 3)
    {

        while (nine >= 3)
        {
            std::cout<<STAR;
            nine = nine - 3;
        }
    }

        std::cout<<" "<<std::endl;


    std::cout<<"10am "<<std::endl;
    if (ten >= 3)
    {

        while (ten >= 3)
        {
            std::cout<<STAR;
            ten = ten - 3;
        }
    }

        std::cout<<" "<<std::endl;


    std::cout<<"11am "<<std::endl;
    if (eleven >= 3)
    {

        while (eleven >= 3)
        {
            std::cout<<STAR;
            eleven = eleven - 3;
        }
    }

        std::cout<<" "<<std::endl;


    std::cout<<"12am "<<std::endl;
    if (twelve >= 3)
    {

        while (twelve >= 3)
        {
            std::cout<<STAR;
            twelve = twelve - 3;
        }
    }

        std::cout<<" "<<std::endl;
        std::cout<<" "<<std::endl;

    Counter = 12;
    std::cout<<"-30"<<std::setw(Counter)<<"37.5"<<std::setw(Counter)<<"45"<<std::setw(Counter)<<"92.5"<<std::setw(Counter)<<"120"<<std::endl;
    std::cout<<"Degrees in Farenheit"<<std::endl;
    std::cout<<"(Each "<<STAR<<" is equal to 3 degrees)"<<std::endl;


    return 0;
}