#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    //    for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1])
    //            swap(arr[j],arr[j+1]);
    //     }
    // }
    // using recursion
    if(n==1)
    return;
    
    for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1])
       swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,n-1)   ;
}

int main(){
    int arr[]= {2,3,1,6,9,3};

    bubbleSort(arr,6);
   
    
    for(int i=0;i<6;i++){
       cout<<arr[i];
    }
    return 0;
}