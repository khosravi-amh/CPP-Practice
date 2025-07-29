#include <iostream>
//main operations in the matrix : + - *
using namespace std;

int main()
{
    int rows, cols;
    char choice;
    while(1){
    cout<<"Enter the number of rows in the matrices = ";
    cin>>rows;
    cout<<"Enter the number of columns in the matrices = ";
    cin>>cols;
    int x[rows][cols], y[rows][cols], result[rows][cols];
//the values of the matrix 1
    cout<<"\n the values of the matrix 1 \n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
         cout<<"x["<<i+1<<"]"<<"["<<j+1<<"] = ";
         cin>>x[i][j];
        }
    }
//diplay matrix 1
    cout<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<" "<<x[i][j];
            cout<<endl;
    }
//the values of the matrix 2
     cout<<"\n the values of the matrix 2 \n";
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
         cout<<"y["<<i+1<<"]"<<"["<<j+1<<"] = ";
         cin>>y[i][j];
        }
    }
//diplay matrix 2
    cout<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<" "<<y[i][j];
            cout<<endl;
    }
//menu
    int c;
        cout<<"\nchoose one \n";
        cout<<" 1- (x + y) \n";
        cout<<" 2- (x - y) \n";
        cout<<" 3- (x * y) \n";
        cin>>c;
        switch(c)
        {
        case 1: //sum
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                result[i][j]= x[i][j]+y[i][j];
            }
            cout<<"\n***************************\n";
        break;
        case 2: //diff
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                result[i][j]= x[i][j]-y[i][j];
            }
            cout<<"\n***************************\n";
        break;
        case 3: //zarb
            if(cols!=rows)
            {
            cout<<"\n only supported for square matrices (rows=calumns)\n";
            continue;
            }
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                {
                result[i][j]= 0;
                for(int k=0;k<cols;k++)
                result[i][j]+= x[i][k]*y[k][i];
                }
            }
            cout<<"\n***************************\n";
        break;
        default : cout<<" **Error** only choose between 1 and 3";

        }
    if(c>=1 && c<=3)
        for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                cout<<" "<<result[i][j];
                cout<<endl;
            }
    cout<<"\n try again (y/n): ";
    cin>>choice;
    if (choice!='y')
        {
        cout<<" Finish ";
        break;
        }
    }
    return 0;
}
