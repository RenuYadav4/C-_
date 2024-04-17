#include<iostream>
using namespace std;

class Hello{
    public:
    void func(){
        cout<<"I am object one";
    }
};
int main(){
    Hello obj1;
    obj1.func();
}