/*#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};
class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }
            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};
class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};
class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};
int main(){
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}*/





#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};
Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};
Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called "<< endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};
class Derived: public Base2, public Base1{/////////////
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a){
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};
int main(){
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}
