#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(char ch[],int n)
{
    int s = 0 ;
    int e = n-1;

    while (s<e)
    {
        swap(ch[s++],ch[e--]);
    }
    
}

int getLenth(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main(){
    char ch[20];
    cout<<"Enter the String :: "<<endl;
    cin>>ch;
    int len = getLenth(ch);
    // cout<<len<<endl;
    Reverse(ch,len);
    cout<<"String :: ";
    cout<<ch;
    return 0;
}