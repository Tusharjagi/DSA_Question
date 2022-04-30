#include<iostream>
using namespace std;

void Reverse(int *arr, int size)
{
    int s = 0;
    int e = size -1;

    while(s < e)
    {
        swap(arr[s++],arr[e--]);

    }
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    Reverse(arr,size);
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}