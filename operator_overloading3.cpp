/*#include<iostream>
#include<cstdlib>
#include<stdexcept>
using namespace std;

class student{
    string name;
    int age;
    public:
        student(){
            name = "no_name";
            age = 0;
        }
        student(string name, int age){
            this->name = name;
            this->age = age;
        }
        void who_r_u(){
            cout<<"myself "<<name<<"my age "<<age<<endl;    
        }
        void *operator new(size_t size){
            void *pointer;
            cout<<"overloaded new size is "<<size<<endl;
            pointer = malloc(size);
            if(!pointer){
                bad_alloc ba;
                throw ba;
            }
            return pointer;
        }
        void operator delete(void *pointer){
            cout<<"overloaded delete"<<endl;
            free(pointer);
        }
};
int main(){
    student *raj_ptr;
    try{
        raj_ptr = new student("raj", 24);
        raj_ptr->who_r_u();
        delete raj_ptr;
    }catch(bad_alloc b){
        cout<<b.what()<<endl;
    }
    return 0;
}*/




#include<iostream>
#include<string>
using namespace std;

class person{
    string name;
    int age;
    public:
        person(){
            name = "noname";
            age = 0;
        }
        friend ostream &operator << (ostream &output, person &p);
        friend istream &operator >>(istream &input, person &p);
};
ostream &operator<<(ostream &output, person &p){
    output<<"what the hack "<<endl;
    output<<"my name is "<<p.name<<" and age "<<p.age<<endl;
    return output;
}
istream &operator>>(istream &input, person &p){
    input>>p.name>>p.age;
    return input;
}
int main(){
    cout<<"enter the name and age "<<endl;
    person raj;
    cin>>raj;
    cout<<raj;
    return 0;
}
