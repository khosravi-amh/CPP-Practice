#include <iostream>
//maximum minimum average of scores
using namespace std;

int main()
{
    double x[5],sum=0;
    int c;
    char s;
    cout<<"Enter your scores"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<endl<<" Socre"<<" "<<i+1<<" = ";
        cin>>x[i];
    }
    do{
    cout<<endl<<" Choose option"<<endl;
    cout<<" 1- Display scores"<<endl;
    cout<<" 2- Maximum"<<endl;
    cout<<" 3- Minimum"<<endl;
    cout<<" 4- Average"<<"  ";
    cin>>c;
    switch(c)
    {
        case 1:
        {
            cout<<endl<<" Scores = ";
            for(int i=0;i<5;i++)
            cout<<x[i]<<"  ";
            break;
        }
        case 2:
        {
            double maxi=x[0];
            for(int i=1;i<5;i++)
             if(x[i]>maxi)
             maxi=x[i];
             cout<<endl<<" Maximum = "<<maxi;
            break;
        }
        case 3:
        {
            double mini=x[0];
            for(int i=1;i<5;i++)
             if(x[i]<mini)
             mini=x[i];
             cout<<endl<<" Minimum = "<<mini;
            break;
        }
        case 4:
        {
            for(int i=0;i<5;i++)
            sum+=x[i];
            cout<<" Average = "<<sum/5;
            break;
        }
        default: cout<<" Error enter correctly";
    }
    cout<<"    "<<" Try again(y/n): ";
    cin>>s;
    }while(s=='y');
    cout<<" Finish";
    return 0;
}
