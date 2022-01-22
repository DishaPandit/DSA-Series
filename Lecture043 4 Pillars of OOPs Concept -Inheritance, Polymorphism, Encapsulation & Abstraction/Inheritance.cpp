#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight=w;
    }
};

class Male : public Human{

    public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping"<<endl;
    }

};

int main()
{
    Male m;
    cout << m.age <<endl;
    cout << m.height <<endl;
    cout << m.weight <<endl;

    cout << m.color <<endl;
    m.sleep();
    m.setWeight(56);
    cout << m.weight <<endl;

}