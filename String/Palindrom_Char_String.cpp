#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char a[], int n)
{
    int s = 0 ;
    int e = n-1 ;

    while (s<= e)
    {
        if(a[s] != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return -1 ;
    
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

    cout<<"Palindrome or Not : "<<checkPalindrome(ch,len)<<endl;
    return 0;
}