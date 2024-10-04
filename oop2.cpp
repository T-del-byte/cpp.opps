/*#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "id of the employee is" << id << "and this is employee number " << count << endl;
    }
    static void getCount(void){
        cout<<"value of count is "<<count<<endl;
    }
};
int Employee ::count; // DEFAULT VALUE 0
int main()
{
    Employee harry, rohan, lovish;
    // COUNT IS THE STATIC DATA MEMBER OF CLASS EMPLOYEE
    //  harry.id=1;
    //  harry.count=1;-------cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee::getCount();
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}*/




#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 122;
        cout<<"id of employee";
        cin>>id;
    }
    void getId(void){
        cout<<"id of this employee "<<id<<endl;
    }
};
int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}

