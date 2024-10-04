#include <iostream>
#include <string>
using namespace std;

/*class Employee
{
private:
    int a, b, c;
public:
    int d, e;

    void setdata(int a1,int b1,int c1);//declaration
    void getdata(){
        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;
        cout<<"The value of c "<<c<<endl;
        cout<<"The value of d "<<d<<endl;
    }
};
void Employee::setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee Tani ;
    Tani.d=19;
    Tani.setdata(1,2,4);
    Tani.getdata();
    return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*class binary{
    string s;
public:
    void read(void);
    void cheak_binary(void);
    void ones_compliment(void);
    void display(void);
};
    void binary::read(void)
{
    cout<<"Enter the binary number:"<<endl;
    cin>>s;
}

void binary::cheak_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }

    }

}
void binary::ones_compliment(void)
{
    // cheak_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{   cout<<"displaying ur binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b ;
    b.read();
    b.cheak_binary();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}*/
// CLASS-NO MEMORY, OBJECT- MEMORY//
class shop
{
    int items_id[100];
    int items_price[100];
    int counter;

public:
    void in_it_counter(void) { counter = 0; }
    void set_price(void);
    void display_price(void);
};

void shop::set_price(void)
{
    cout << "enter item id with number " << counter + 1 << endl;
    cin >> items_id[counter];
    cout << "enter item price" << endl;
    cin >> items_price[counter];
    counter++;
}

void shop::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item with id" << items_id[i] << " is " << items_price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.in_it_counter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display_price();
    return 0;
}
