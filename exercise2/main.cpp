#include <iostream>
#include "functions.h"

using namespace std;


int main()
{   
    for(int number = 1; number <= 20; number++)
    {
        if(number % 2)
        {
            printEven();
        }
        else
        {
            printOdd();
        }
    }

    return 0;
}