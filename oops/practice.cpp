#include<iostream>
using namespace std;


class Human{
    private:
    int age;
    public:
    string name;
    int height;
    void speak(){
        cout<<"speaking "<<endl;
    }
    void setAge(int d){
        this->age=d;
    }
    int getAge(){
        return age;
    }
};
//class Male: { //public Human{ if this then ambigiouty error you have opened some namespaces (ie using namespace std;) and other namespaces and cout is defined in both namespaces.
            //  ambigiouty- when in multiple inheritence one class inherits from two claases and if one of thgem is derived also then ambigiouty occurs
   class Male: public Human { 
    public:
    int weight;
    void running(){
        cout<<"running "<<endl;
    }
};
class Teacher:  public Human{
    public:
    string profession;
};

int main(){
    // Human h1;a
    // Male m1;
    Teacher T1;
    T1.speak();
    T1.setAge(30);
    T1.height=20;
    // T1.weight=60;
    cout<<T1.height<<endl;
    cout<<T1.getAge()<<endl;
    // cout<<T1.weight<<endl;
    return 0;
}