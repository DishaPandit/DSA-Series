#include<iostream>
#include "Fruits.cpp"
using namespace std;

//class definition
class Hero{

    //properties/ data members
    //by default the access modifier is private in c++
    int health = 80;

    public :
    int level;

    //member functions - member function can use the private data members inside the class
    void print(){
        cout << "Health is : "<<health<<endl;
    }

    //getters
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }

    //setters
    void setHealth(int h){
        health = h;
    }

    void setLevel(int l){
        level = l;
    }
};

//empty class : it has no properties
class Car{

    //properties
};

int main()
{
    //static allocation
    Hero h1;
    cout << "Size of object of Hero class : "<<sizeof(h1)<<endl;    //size will be equal to total no. of size taken by properties
    Car c1;
    cout << "Size of object of Car class : "<<sizeof(c1)<<endl;     //size will be 1 byte given by compiler for identification purpose
    Fruits f1;
    cout << "Size of object of Fruits class : "<<sizeof(f1)<<endl;

    cout <<"--------------------------------------------------------------------------"<<endl;

    //below code will show error because properties are private by default
    //cout << "Health of h1 is : "<<h1.health <<endl;

    h1.level = 5;

    //But you can use level because it is defined as public
    cout << "Level of h1 is : "<<h1.level <<endl;   //it will give garbage value because we have not instantiated it yet

    //calling member function
    h1.print();

    //Accessing private members using getter
    cout<<"Health of h1 is : "<<h1.getHealth()<<endl;

    //using setter
    h1.setLevel(10);
    cout << "Level of h1 is : "<<h1.level <<endl;

    cout <<"--------------------------------------------------------------------------"<<endl;

    //dynamic allocation
    Hero *h2 = new Hero;    //allocated in heap
    (*h2).setLevel(3);
    cout<<"Health of h2 is : "<< (*h2).getHealth() <<endl;
    cout << "Level of h2 is : "<< (*h2).level <<endl;

    //alternatively , you can also write as below
    cout<<"Health of h2 is : "<< h2->getHealth() <<endl;
    cout << "Level of h2 is : "<< h2->level <<endl;
}