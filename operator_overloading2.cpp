/*#include<iostream>
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
            cout<<"ur mark "<<mark<<endl;
        }
        marks operator++(){
            mark +=1;
            return *this;
        }
        friend marks operator --(marks&);
};
marks operator--(marks &m){
    m.mark-=1;
    return m;
}
int main(){
    marks raj_mark(68);
    raj_mark.ur_mark();

    (++raj_mark).ur_mark();

    (--raj_mark).ur_mark();
    return 0;
}*/




/*#include<iostream>
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
            cout<<"ur mark "<<mark<<endl;
        }
        marks operator++(int){
            marks duplicate(*this);
            mark+=1;
            return duplicate;
        }
        friend marks operator --(marks&, int);
};
marks operator--(marks &m, int){
marks duplicate(m);
m.mark -=1;
return duplicate;
}
int main(){
    marks raj_mark(68);
    raj_mark.ur_mark();
    (raj_mark++).ur_mark();
    raj_mark.ur_mark();
    return 0;
}*/
//[],(),->.................friend can not be used bacause it is non- static




/*#include<iostream>
using namespace std;

class marks{
    int subjects[3];
    public:
        marks(int sub1 ,int sub2 ,int sub3){
            subjects[0]=sub1;
            subjects[1]=sub2;
            subjects[2]=sub3;
        }
        int operator[](int position){
            return subjects[position];
        }
};
int main(){
    marks raj(22,44,66);
    cout<<raj[0]<<endl;
    cout<<raj[1]<<endl;
    cout<<raj[2]<<endl;
    return 0;
}*/





/*#include<iostream>
using namespace std;

class marks{
    int mark;
    public:
        marks(int m){
            cout<<"constructor is called "<<endl;
            mark = m;
        }
        void ur_mark(){
            cout<<"i got marks "<< mark<<endl;
        }
        marks operator()(int mk){
            mark=mk;
            cout<<"operator function is called "<<endl;
            return *this;
        }
};
int main(){
    marks raj(22);//constractor call
    raj.ur_mark();

    raj(44);//operator function call
    raj.ur_mark();
    return 0;
}*/





#include<iostream>
using namespace std;

class marks{
    int mark;
    public:
        marks(int m){
            mark = m;
        }
        void ur_mark(){
            cout<<"i got marks "<< mark<<endl;
        }
        marks *operator->(){
            return this;
        }
};//->...........urinary operator
int main(){
    marks raj(22);
    raj.ur_mark();
    raj->ur_mark();
    return 0;
}