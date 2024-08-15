//Program to demonstrate the user-defined to user-defined data conversion routine located in the destination class.

#include<iostream>
using namespace std;

class Time {
    int hour;
    int minute;
    public:
    Time(int h, int m){
        hour=h;
        minute=m;
    }
    int gethour(){
        return hour;
    }
    int getminute(){
        return minute;
    }
    void display(){
        cout<<"Hour: "<<hour<<endl;
        cout<<"Minute: "<<minute<<endl;
    }
};

class Minute{
    int minutes;
    public:
    Minute(){
        minutes=0;
    }
    Minute(Time T){
        minutes=T.gethour()*60+T.getminute();
    }
    void display(){
        cout<<"Total Minutes: "<<minutes<<endl;
    }
};

int main(){
    Time T1(5,50);
    Minute M1;
    M1=T1;
    T1.display();
    M1.display();
    return 0;
}
