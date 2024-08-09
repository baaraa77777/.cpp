//Program to concanenate the two strings using operator overloading as a frienf function.
#include<iostream>
using namespace std;
#include <string.h>

class space{
    char str[20];
    public:
    void getdata(){
        cout<<"Enter the string: "<<endl;
        cin>>str;
    }
    friend space operator+(space, space);
    void display(){
        cout<<"String : "<<str<<endl;
    }
};

space operator+(space s1, space s2){
    space s3;
    strcpy(s3.str, s1.str);
    strcat(s3.str, " ");
    strcat(s3.str, s2.str);
    return s3;
}

int main(){
    space s1, s2,s3;
    s1.getdata();
    s2.getdata();
    cout<<"First string is ";
    s1.display();
    cout<<"Second string is ";
    s2.display();
    s3= s1 + s2;
    cout<<"String after concatenation is ";
    s3.display();
    return 0;
}
