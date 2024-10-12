#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
    // Properties
public:
    string name;
    string pass;
    int roll;

    // void print()
    // {
    //     cout << level << endl;
    // }
    // getter
    string getname()
    {
        return name;
    }
    void setname(string n)
    {
        name = n;;
    }
    string getpass()
    {
        return pass;
    }
    void setpass(string x)
    {
        pass = x;
    }
    int  getroll(){
        return roll;
    }
    void setroll(int y){
        roll = y;
    }

};

int main()
{
    // creation of object
    Hero s;

    // GET RAMESH'S PROPERTIES
    cout << "Student name = " << s.getname() << endl;
    cout << "Student password = " << s.getpass()<<endl;
    cout << "Student roll number = " << s.getroll()<<endl;

    // SET RAMESH'S PROPERTIES

    s.name = "Gauri";
    s.pass = "gauri@uqii13883";
    s.roll = 12345;
    cout << "name is:" << s.name << endl;
    cout << "pass is: " << s.pass << endl;
    cout << "roll no is: " << s.roll << endl;
    cout << "student's name is " << s.getname() << endl;
    cout << "student's password is " << s.getpass() << endl;
    cout << "student's rollno is " << s.getroll() << endl;

    // SET HEALTH
    cout << "Student's name = "<< s.getname()<<endl;
    cout << "Student password = " << s.getpass()<<endl;
    cout << "Student roll number = " << s.getroll()<<endl;

    // cout << "size : " << sizeof(ramesh) << endl;
    return 0;
}