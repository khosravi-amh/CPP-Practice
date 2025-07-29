#include <iostream>
//Calculator
using namespace std;

int main()
{
    double x,y;
    char sym;
    cout<<"welcome to my Calculator"<<endl;
    cout<<endl<<" Enter number one = ";
    cin>>x;
    cout<<" Enter number two = ";
    cin>>y;
    cout<<" Enter one of the symbols + - * / : ";
    cin>>sym;
    switch(sym)
    {
        case '+':cout<<x<<" + "<<y<<" = "<<x+y;break;
        case '-':cout<<x<<" - "<<y<<" = "<<x-y;break;
        case '*':cout<<x<<" * "<<y<<" = "<<x*y;break;
        case '/':
            if (y==0)
                cout<<"Error  Division by zero is not allowed";
            else
                cout<<x<<" / "<<y<<" = "<<x/y;break;
        default: cout<<"\n Enter correctly";
    }
    return 0;
}
