#include<iostream>
using namespace std;

class A{
    int a;//class variable
    public:
        A & setData(int a){
            this->a=a;//this--->represents that object which invokes member functions(pointer){local priority}
            return *this;
        }//this--->returns...........
        void getData(){
            cout<<"value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4).getData();
    return 0;
}