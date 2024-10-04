/*#include<iostream>
using namespace std;

int main(){
    // Basic Example
    // int a = 4;
    // int* ptr = &a;
    // cout<<"The value of a is "<<*(ptr)<<endl;

    // New Example
    // float *p = new float(40.78);
    // cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;//deleted the value of array
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}*/








/*#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"real part "<<real<<endl;
            cout<<"imaginary part "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1,54);//same below
    ptr->setData(1,54);
    (*ptr).getData();

//array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,4);
    (*ptr1).getData();
    return 0;
}*/







#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++){
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; 
    }
    for (i = 0; i < size; i++){
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}
