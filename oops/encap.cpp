#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int weight;
    int marks;

    public:
    void setAge(int d){
        this->age=d;
    }
    int getAge(){
        return this->age;
    }
};


int main(){
   student s1;
   s1.setAge(30);
   cout<<s1.getAge()<<endl;
    return 0;
}