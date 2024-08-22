#include<iostream>
using namespace std;

class address{
    public:
    string address_line;
    string city;
    string state;
    address (string address_line , string city, string state){
        this->address_line=address_line;
        this->city=city;
        this->state=state;
        }

};

class employee{
    public:
    int id;
    string name;
    address* add;
    employee(int id, string name, address* add){
        this->id=id;
        this->name=name;
        this->add=add;
    }
    void display(){
        cout<<"("<<id<<", "<<name<<", "<<add->address_line<<", "<<add->city<<", "<<add->state<<")"<<endl;
    }
};

int main(){
    address a("r-34", "c-8", "UP");
    employee e(101, "Rinky", &a);
    e.display();
    return 0;
}
