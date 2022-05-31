#include<iostream>
using namespace std;

// void power(int a, int b){
    //  int res=1;
    // while(b>0){
    //     if(b&1){
    //       res= res*a;
    //     }
    //     b= b>>1;
    //   a=a*a;
    // }
    // cout<< res;

    // using recursion
    int power(long int a, long int b){
   
    if(b==0)
    return 1;
    if(b==1)
    return a;
    // recursive call
    long int ans = power(a,b/2);
    // if b is even
    if(b%2 == 0){
        return ans*ans;
    }
    //  int res=1;
    //     res= res*a;
    // power(a,b--);
    else
    return a*ans*ans;    
    

}

int main(){
    long int a=24;
     long int b=82;
     
    long int ans = power(a,b);

    cout<<ans;

    // int ans1= ans/83;
    // cout<<ans1;
    // int res=1;
    // while(n>0){
    //     if(n&1){
    //       res= res*a;
    //     }
    //     n= n>>1;
    //   a=a*a;
    // }
    // cout<< res;

    return 0;
}