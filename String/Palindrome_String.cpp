#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void palindrome(string str)
{
    string temp = str;
    reverse(str.begin(),str.end());

    if(temp == str)
    {
        cout<<"This is palindrome "<<endl;
    }
    else{
        cout<<"Not a palindrome "<<endl;
    }
}

int main(){
    string str = "noon";
    // cout<<str<<endl;
    palindrome(str);
    return 0;
}