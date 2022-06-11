#include<iostream>
using namespace std;

class Abs{
    private:
    int a,b;

    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void getData(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }



};


int main(){
    Abs a1;
    a1.setData(20,30);
    a1.getData();
    return 0;
}