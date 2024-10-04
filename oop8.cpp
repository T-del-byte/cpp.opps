/*#include<iostream>
using namespace std;

//destrutor never takes an argument nor does it return any value
int count = 0;

class num{
    public:
    num(){
        count++;
        cout<<"this is the time when contrctor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside our main function "<<endl;
    cout<<"creating first object n1 "<<endl;
    num n1;
    {
        cout<<"entering this block ";
        cout<<"creating two more objects "<<endl;
        num n2, n3;
        cout<<"exiting this block ";
    }
    cout<<"back to main"<<endl;
    return 0;
}*/




#include<iostream>
using namespace std;

//base class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id=inpId;
            salary=34.0;
        }
        Employee(){}
};

//derived class
/*class {{derived-class-name}} : {{visibility-modde}}{{base-class-name}}
{
    members/methods/etc.
}
Note :
1. Default visibility mode is private 
2. Private Visibility Mode : Public members of the base class become private members of the derived class 
3. Public Visibility Mode : Public members of the base class become public members of the derived class
4. Private members are never inherited
*/
class Programmer : public Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}