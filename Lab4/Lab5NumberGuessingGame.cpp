#include <iostream> 

int Guess;
int Answer;
int Attempts;
int Display_L;
int Display_W;
bool Input;

int main()
{
    Display_W = 1;
    Display_L = 1;
    Attempts = 20;

    std::cout<<"Would you like to play a number guessing game? [Y/N]"<<std::endl;

    std::cin>>Input;

    if (Input == true)
    {
        std::cout<<"Input a number between 0 and 100:"<<std::endl;
        std::cin>>Guess;
    

        while (Attempts > 0)
        {
            if (Guess == Answer)
            {
                if (Display_W == 1)
                {
                    std::cout<<"You're guess was correct!"<<std::endl;
                    std::cout<<"You had "<<Attempts<<" attempts left"<<std::endl;
                }
                if (Display_W == 2)
                {
                    std::cout<<"You got it right!"<<std::endl;
                    std::cout<<"You had "<<Attempts<<" attempts left"<<std::endl;
                }
            }
                if (Display_W == 3)
                {
                    std::cout<<"You're guess was correct!"<<std::endl;
                    std::cout<<"You had "<<Attempts<<" attempts left"<<std::endl;
                }
                if (Display_W == 4)
                {
                    std::cout<<"You got it right"<<std::endl;
                    std::cout<<"You had "<<Attempts<<" attempts left"<<std::endl;
                }
        }
    }
        if (Guess != Answer)
        {
            if (Display_L == 1)
            {
                std::cout<<"Your guess was incorrect"<<std::endl;
                std::cout<<"You have "<<Attempts<<" left"<<std::endl;
            }
            if (Display_L == 2)
            {
                std::cout<<"That was not the right number"<<std::endl;
                std::cout<<"You have "<<Attempts<<" left"<<std::endl;
            }
            if (Display_L == 3)
            {
                std::cout<<"Try again"<<std::endl;
                std::cout<<"You have "<<Attempts<<" left"<<std::endl;
            }
            if (Display_L == 4)
            {
                std::cout<<"That wasn't quite right"<<std::endl;
                std::cout<<"You have "<<Attempts<<" left"<<std::endl;
            }
        }
    if (Attempts <= 0)
    {
        std::cout<<"You lose, you are out of guesses, would you like to try again? [Y/N]" <<std::endl;
        std::cin>>Input;

        if (Input == false)
        {
            std::cout<<"Thanks for playing!"<<std::endl;
        }
        
    }
    return 0;
}