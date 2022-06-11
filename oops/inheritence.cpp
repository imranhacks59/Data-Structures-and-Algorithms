#include<iostream>
using namespace std;

class Human{
    private:
    int age;
    public:
    string name;
    
    void setAge(int d){
        this->age = d;
    }
    int getAge(){
        return this->age;
        }
};
class Male: public Human{
   public:
   int height;
};

int main(){
   Male m1;
   m1.setAge(20);
   m1.name="imran";
   m1.height=20;
   cout<<m1.getAge()<<endl;
   cout<<m1.name<<endl;
   cout<<m1.height<<endl;
    return 0;
}