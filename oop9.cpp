/*#include<iostream>
using namespace std;

class Base{
    int data1; // private by default and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base ::setData(void){
    data1 = 10;
    data2 = 20;
}
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}
class Derived : public Base{ // Class is being derived publically
    int data3;
    public:
        void process();
        void display();
};
void Derived ::process(){
    data3 = data2 * getData1();
}
void Derived ::display(){
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}*/






/*#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};
class Derived: protected Base{
   
};
int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}*/





#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void Student::set_roll_number(int r){
    roll_number = r;
}
void Student::get_roll_number(){
    cout << "the roll number is "<< roll_number << endl;
}
class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam::set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam::get_marks(void){
    cout<<"the marks obtained in maths are :"<< maths <<endl;
    cout<<"the marks obtained in physics are :"<< physics <<endl;
}
class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"percentage is "<< (maths + physics)/2<<endl;
        }
};
int main(){
    /*Notes:
        If we are inheriting B from A and C from B : [a--->b--->c]
            1.a is the base class for b and b is the base class for c
            2.a--->b--->c is called inheritance path
        */
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display();
    return 0;
}
