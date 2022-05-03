#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];

    for(int i =0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<"Enter the "<<i<<j<<"th element of matrix A"<<endl;
            cin>>a[i][j];
        }
    }
    for(int i =0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<"Enter the "<<i<<j<<"th element of matrix B"<<endl;
            cin>>a[i][j];
        }
    }
    for(int i =0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<"Enter the "<<i<<j<<"th element of matrix C"<<endl;
            cin>>a[i][j];
        }
    }

    cout<<"Result Matrix is "<<endl;
    for(int i =0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j]=0;
        }
    }
    for(int i =0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i =0; i< 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

    
    return 0;
}