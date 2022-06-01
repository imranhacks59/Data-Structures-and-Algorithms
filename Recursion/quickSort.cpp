#include<iostream>
using namespace std;

int partition (int arr[], int s, int e){
       int pivot = arr[s];
       int count = 0;
       for(int i=s+1;i<=e;i++){
           if(arr[i]<=pivot)
           count++;
       }
       int pivotIndex = s+count;
       swap(arr[pivotIndex], arr[s]);

       int i=s, j=e;
       while(i<pivotIndex && j>pivotIndex){
           while(arr[i]<=pivot){
               i++;
           }
           while(arr[j]>pivot){
               j--;
           }
           if(i<pivotIndex && j>pivotIndex){
               swap(arr[i],arr[j]);
               i++;
               j--;
           }
       }
       return pivotIndex;
}


void quickSort(int arr[], int s, int e){
    // base class de bhai
    if(s>=e){
        return ; //bhai teri jrurat nhi hai tu chala ja
    }

    int p= partition(arr, s,e);

// left wala jo bacha hua hai
    quickSort(arr,s,p-1);
// ab right bhi to kr de
    quickSort(arr,p+1,e);
    
}


int main(){
      
      int arr[]= {3,2,5,8,1};
    //    int e = arr.size()-1;
    int n=5;
       int s=0;

       quickSort(arr,s,n-1);

       for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
       }

       return 0;
}