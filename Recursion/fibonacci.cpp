#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return n;
    }
    else if(n==1){
        return 1;
    }
    cout<<n;
    //  int ans = fib(n-1)+fib(n-2);
    // return ans;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n=3;
    // cin>>n;
    fib(n);

//    int anss= fib(n);
//    cout<<anss;
    return 0;
}