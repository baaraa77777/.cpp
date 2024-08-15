//20.Write a program for illustrating default constructor, parameterized constructor
// and copy constructor.

#include <iostream>
using namespace std;

class Sample {
    int roll_no; 
    string name;
    public:
    Sample(){     //default constructor
        roll_no=48;
        name="Radhika"; 
    }
    Sample(int p, string q){    //parameterized constructor
        roll_no=p;
        name=q;
    }
    Sample(Sample &S){    //copy constructor
        roll_no=S.roll_no;
        name=S.name;
    }
    void display(){
        cout<<"Roll No: "<<roll_no<<endl<<"Name: "<<name<<endl;
    }
};

int main(){
    Sample S1;
    cout<<"Using default constructor: "<<endl;
    S1.display();
    Sample S2(73 , "Rikan");
    cout<<"Using paramaterized constructor: "<<endl;
    S2.display();
    Sample S3(S2);
    cout<<"Using copy constructor: "<<endl;
    S3.display();
    return 0;
}