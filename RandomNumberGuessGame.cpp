#include <iostream>

int main()
{
    std::cout<<"Type a number between 0-100 to guess the number, you have 3 guesses"<<std::endl;

    int Variable;
    int guess;
    int Answer;

    guess = 3;
    Answer = 5; //figure out proper random number generator//
    
    std::cin >> Variable;

    //start loop here//

    if (guess == 0)
    {
        std::cout<<"You're out of guesses"<<std::endl;
    }
    else
    {
        if (Variable == Answer)
        {
            std::cout <<"You guessed the correct number"<<std::endl;
            guess - 1;

        }
        else if (Variable < Answer)
        {
            std::cout<<"Your guess is less than the number"<<std::endl;
            guess = guess - 1;

            std::cout<<"You have "<< guess << " guesses left" <<std::endl;
        }
        else if (Variable > Answer)
        {
            std::cout<<"Your guess is more than the number"<<std::endl;
            guess = guess - 1;

            std::cout<<"You have "<< guess << " guesses left" <<std::endl;
        }

        //end loop here//
    }
    return 0;
}