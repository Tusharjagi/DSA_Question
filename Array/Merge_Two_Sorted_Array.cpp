#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergeArray(int *arr1, int *arr2, int size1, int size2, int *arr3)
{
    int i =0;
    int j = 0;
    int k =0;
    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // Copy first Elements
    while (i< size1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // copy second ELements

    while(j < size2){
        arr2[k] = arr2[j];
        k++;
        j++; 
    }
    

}

int main(){
    int arr1[] = {1,3,5,7,9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2,4,6};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[size1+ size2];
    mergeArray(arr1,arr2,size1,size2,arr3);
    for(int i =0; i< size1+size2; i++)
    {
        cout<<arr3[i] <<" ";
    }
    cout<<endl;


    return 0;
}