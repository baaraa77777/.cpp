//To concanenate the two strings.
#include<iostream>
using namespace std;
#include<string.h>

class space{ 
    char str[20];
    public:
    void getdata(){
        cout<<"Enter the string: "<<endl;
        cin>>str;
    }
    space operator+(space obj2){
        space obj3;
        strcpy(obj3.str,str);
        strcat(obj3.str," ");
        strcat(obj3.str, obj2.str);
        return obj3;
    }
    void display(){
        cout<<"string: "<<str<<endl;
    }
};
int main(){
    space obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    cout<<"Entered first string: ";
    obj1.display();
    cout<<"Entered second string: ";
    obj2.display();
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}
