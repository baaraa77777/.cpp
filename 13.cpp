//13) Define a class Interest with following specifications:

//a. Data Members
//i. principal
//ii. time
//iii. rate
//b. Member Functions
//i. getdata() to assign initial values
//ii. display () to display values
//iii. Findinterest() to find and display the interest

#include <iostream>
using namespace std;

class Interest{
    int principal;
    int time;
    int rate;
    public:
    void getdata(){
        cout<<"Enter the principal, time and rate: "<<endl;
        cin>>principal>>time>>rate;
    }
    void findinterest(){
        int I=principal*time*rate/100;
        cout<<"Simple Interest is: "<<I<<endl;
    }
    void display(){
        cout<<"Principal: "<<principal<<endl;
        cout<<"Time: "<<time<<endl;
        cout<<"Rate: "<<rate<<endl;
    }
};
int main(){
    Interest I;
    I.getdata();
    cout<<"Details: "<<endl;
    I.display();
    I.findinterest();
    return 0;
}