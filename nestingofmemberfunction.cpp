//Nesting of Member function.
#include <iostream>
using namespace std;

class total
{
    float principal, time, rate;
    float findinterest()
    {
        return principal * time * rate/100;
    }

public:
    void getdata(float p, float t, float r){
        principal=p;
        time=t;
        rate=r;
    }

    float findtotal(){
        return principal + findinterest(); 
    }
};

int main(){
    total t;
    t.getdata(78000,6,3.5);
    cout<<t.findtotal();
    return 0;
}
