//Use of virtual.

#include<iostream>
using namespace std;

class Animal{
    public: 
    virtual void speak(){
        cout<<"Animal speaks. "<<endl;
    }
};

class dog:public Animal{
    public:
    void speak(){
        cout<<"Dog barks. "<<endl;
    }
};

class cat:public Animal{
    public:
    void speak(){
        cout<<"Cat meows. "<<endl;
    }
};

int main(){
    Animal *animalptr;
    dog d;
    cat c;

    animalptr=&d;
    animalptr->speak();

    animalptr=&c;
    animalptr->speak();
    return 0;
}


//output:

//Dog barks. 
//Cat meows. 
