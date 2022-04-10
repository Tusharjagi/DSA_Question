#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SayDigit(int n,string arr[]){
    // Base Case
    if(n == 0 )
        return ;
    
    // Processing

    int digit = n% 10;
    n/=10;

    // Recursive Call
    SayDigit(n,arr);

    cout<< arr[digit]<<" ";
}

int main(){

    string arr[10] = {"zero" , "one", "two", " three",
                      "four", "five", "six","seven",
                      "eigth", "nine"};
    int n;
    cin>>n;
    cout<<endl<<endl;
    SayDigit(n,arr);
    cout<<endl<<endl;

    return 0;
}