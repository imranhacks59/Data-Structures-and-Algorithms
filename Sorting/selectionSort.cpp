#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    int min;
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[min])
             min=j;
        }
        swap(arr[min],arr[i]);
    }
    // return min;
}

int main(){
    int arr[]= {2,1,5,7,3,9};
    int n =sizeof(arr)/sizeof(int);
    int *ptr = arr;
    cout<<*ptr;
    // cout<<selectionSort(arr,n);
    return 0;
}