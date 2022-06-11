#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    string name;
    int age;
    
    //  private:
    // int health;
   
    void setHealth(int d){
         health=d;
    }
    
     int getHealth(){
         return health;
     }
};

int main(){
Hero h1;
h1.name = "Ram";
h1.age= 19;
h1.setHealth(20);
cout<<h1.name<<endl;
cout<<h1.age<<endl;
cout<<h1.getHealth()<<endl;

Hero *h2 = new Hero;
(*h2).name="imran";
cout<<(*h2).name<<endl;
delete h2;

return 0;
}