#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MinMax(int *arr,int size){
    int Max = arr[0];
    int Min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > Max)
            Max = arr[i];
        if(arr[i] < Min)
            Min = arr[i];
    }
    cout<<Max<<endl;
    cout<<Min<<endl;
    
}

int main(){
    int arr[] = {42,54,1,66,45,56,78,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    MinMax(arr,size);
    return 0;
}