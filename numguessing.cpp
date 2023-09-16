#include<iostream>

int main()
{
    int num;
    int guess;
    int no = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "****** NUMBER GUESSING GAME ****** \n";
    
    do{
        std::cout<< "Enter a Guess Between (1-100): ";
        std::cin>>guess;
        no++;

        if(guess > num){
            std::cout << " To High!!\n";
        }
        else if(guess < num){
            std::cout << " To low!!\n";
        }
        else{
            std::cout << "CORRECT!!! # of tries: "<< no <<"\n";
        }

    }while(guess != num);

    return 0;
}