#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n=rand()%15,x;
    again:

    cout<<"Guess the number : ";
    cin>>x;
    if(x==n)
    {
        cout<<"You won.";
    }
    else
    {
    if(x>n)
    {
        cout<<"You are too high \n";
    }
    else if(x<n)
    {
        cout<<"You are too low \n";
    }
    goto again;
    }


    return 0;
}
