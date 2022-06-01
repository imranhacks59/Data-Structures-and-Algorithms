#include<iostream>
using namespace std;

bool checkPalindrone(string str,int i,int j){
    
    if(i>=j)
    return true;
    if(str[i]!=str[j]){
        return false;
    }   else{
   return checkPalindrone(str,i+1,j-1);
    }

}

int main(){
    string name = "imi";
     int n =name.size()-1;
    bool ans= checkPalindrone(name,0,n);
    if(ans)
    cout<<"palindrone";
    else cout<<"not palindrone";

    return 0;
}