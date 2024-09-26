#include <iostream>
using namespace std;
class Person{
    string Fname;
    string Lname;
    int age;
    public:
    string FL;
    Person(string f, string l, int a){
        Fname= f;
        Lnmae=l;
        age= a;
    }
    void getFullName(){
        FL=Fname+" "+Lname;
        cout<<FL<<endl;
    }
    void getDetails(){
        cout<<"First Name: "<<Fname<<endl;
        cout<<"Last Name: "<<Lname<<endl;
        
    }
