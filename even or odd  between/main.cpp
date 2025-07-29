#include <iostream>
//even or odd numbers between two numbers by user selection
using namespace std;

int main()
{
    int x,y,m;
    cout<<" Enter number one = ";
    cin>>x;
    cout<<" Enter number two = ";
    cin>>y;
    cout<<" Choose one of the options below"<<endl;
    cout<<"1. even numbers between"<<endl;
    cout<<"2. odd numbers between"<<endl;
    cin>>m;
    cout<<endl;
    switch(m)
    {
        case 1:
        {
            if (x%2==0)
            {
                for(int i=x+2;i<y;i+=2)
                cout<<i<<" ";

            }
            else
            {
                for(int i=x+1;i<y;i+=2)
                cout<<i<<" ";

            }
        break;
        }
        case 2:
         {
            if (x%2==0)
            {
                for(int i=x+1;i<y;i+=2)
                cout<<i<<" ";

            }
            else
            {
                for(int i=x+2;i<y;i+=2)
                cout<<i<<" ";

            }
        break;
        }
        default: cout<<" You entered incorrectly";
    }
    return 0;
}
