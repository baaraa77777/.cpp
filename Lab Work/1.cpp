//1) Write a program that prompts the user for their name and age, and then outputs
//a message that says "Hello, [name]! You are [age] years old."

#include<iostream>
using namespace std;

int main(){
    char name[15];
    int age;
    cout<<"Enter your name and age: "<<endl;
    cin>>name>>age;
    cout<<"Hello, "<<name<<"! You are "<<age<<" years old.";
    return 0;
}
