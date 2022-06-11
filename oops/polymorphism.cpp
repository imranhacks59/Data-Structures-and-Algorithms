#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"barking "<<endl;
    }
};
class Dog:public Animal{

};
class germanSphered:public Animal {
   
};

int main(){
   Dog d1;
   d1.speak();

   germanSphered g1;
   g1.speak();
    return 0;
}