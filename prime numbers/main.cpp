#include <iostream>
//prime numbers and prime numbers smaller than the entered
using namespace std;

int main()
{
    int x,i=2;
    bool isprime=true;
    cout<<endl<<" Enter a number = ";
    cin>>x;
    if(x<=1)
        isprime=false;
    do{
        if(x%i==0)
            isprime=false;
            i++;
        break;
    }while(i<x);
    if (isprime==true)
        cout<<x<<" is prime";
    else
        cout<<x<<" is not prime";
    return 0;
}
