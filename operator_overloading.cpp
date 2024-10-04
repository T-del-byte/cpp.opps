/*#include<iostream>
using namespace std;

class marks{
    int int_marks;//members
    int ext_marks;
    public:
        marks(){
            int_marks = 0;
            ext_marks = 0;
        }//constructor
        marks(int im, int em){
            int_marks = im;
            ext_marks = em;
        }//user defined contructor
        void display(){
            cout<<int_marks<<endl<<ext_marks<<endl;
        }
        marks operator+(marks m){//overloaded operator
            marks temp;
            temp.int_marks = int_marks + m.int_marks;
            temp.ext_marks = ext_marks + m.ext_marks;
            return temp;
        }
        marks operator- (marks m);
};
marks marks::operator-(marks m){
            marks temp;
            temp.int_marks = int_marks - m.int_marks;
            temp.ext_marks = ext_marks - m.ext_marks;
            return temp;
}
int main(){
    marks m1(1,2), m2(3,4);
    marks m3 = m1 +m2;
    marks m4 = m1 -m2;
    m3.display();
    m4.display();
    return 0;
}*/




#include<iostream>
using namespace std;

class marks{
    int mark;
    public:
        marks(){
            mark=0;
        }
        marks(int m){
            mark=m;
        }
        void ur_mark(){
            cout<<"ur mark "<< mark<<endl;
        }
        void operator+=(int bonus_marks){
            mark = mark + bonus_marks;
        }
        friend void operator-=(marks &current_object, int reduced_mark);
};
void operator-=(marks &current_object, int reduced_mark){
    current_object -= reduced_mark;
}

int main(){
    marks raj_mark(45);
    raj_mark.ur_mark();

    int x=20;
    x+=raj_mark;
//error
    raj_mark+= x;
    raj_mark.ur_mark();

    raj_mark-= x;
    raj_mark.ur_mark();
    return 0;
}
