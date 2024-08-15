//26.Write a conversion routine in c++ that can convert user-defined datadistance to basic data float. Assume that the class distance 
//contains twodata members (feet (integer type) and inch (floating point type). NOTE 1- meter = 3.33 feet and 1 feet = 12 inches).

#include<iostream>
using namespace std;

class Distance {
    int feet;
    float inch;
    public:
    Distance(int f, float i){
        feet=f;
        inch=i;
    }
    operator float(){
        float ft=feet + inch/12;
        return (ft/3.28);
    }
};
int main(){
    Distance d1(20,5.9);
    float meter=d1;
    cout<<"The given distance in meters is: "<<meter<<endl;
    return 0;
}
