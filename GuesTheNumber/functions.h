#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <random>
#include <iostream>

int Rand(int Value , int LastValue)
{ std::random_device random_device;
    std::mt19937 generator(random_device());


    std::uniform_int_distribution<> distribution(Value , LastValue);

    int x = distribution(generator);
    return x;

}
void ChoiceP(int FirstRange , int TwoRange)
{
    for (int i = 0 ; i < 10 ; i ++ )
    {
        std::cout<<"Input a number"<<std::endl;
        int number;
        std::cin>> number;
        if(number == Rand(FirstRange , TwoRange ) )
        {
       std ::cout<<"U win! "<< std::endl;
       return;
        }
        if(number < Rand(FirstRange , TwoRange ) )
        {
            std::cout<<"Less"<<std::endl;
        }

        if(number >   Rand(FirstRange , TwoRange ) )
        {
           std ::cout<<"Greater!"<< std::endl;
      }
    }
}
void SelectLevel()
{
    int level;
    std::cout<<"Select Level 1 - 3  "<<std::endl;
    std::cin>>level;
    if(level ==  1 )
    {ChoiceP( 1 , 10 ); }
    if(level == 2 )
    { ChoiceP(1 , 100 );}
    if( level == 3 )
    {ChoiceP(1 , 1000 );}
}
#endif // FUNCTIONS_H


























