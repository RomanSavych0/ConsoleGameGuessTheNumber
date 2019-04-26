//#include <QCoreApplication>
#include <iostream>
#include "functions.h"
int main()
{
char choice;
std::cout<<" Woul'd like to play? [p] - play, [l]- select level, [q] - quit."<<std::endl;
std::cin>>choice;

if(choice == 'p')
{
   ChoiceP( 1 , 10 );
}
if(choice == 'l')
{
    SelectLevel();
}



    return 0;
}
