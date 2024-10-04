/*#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(){
        cout<<"complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printNumber();

    c2.setData(2,4);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();
    return 0;
}*/


#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);//FRIEND IS A FUNCTION
        void printNumber(){
            cout<<"number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1, c2,sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}