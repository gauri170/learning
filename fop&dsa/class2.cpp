#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Student{
    int roll;
    string name;

    public:
    void input();
    void output();
};
int main(){
    // Student obj;
    // obj.input();
    // obj.output();


    Student s1;
    Student s2;
    Student *s3 = new Student();   //if star is there the size is fixed

    cout<<"\n\nFill the data of s1";
    s1.input();

    cout<<"\n\nFill the data of s2";
    s2.input();                               //stack

    cout<<"\n\nFill the data of s3";
    s3->input();                              //heap

    cout<<"\nAll data saved.";
    s1.output();
    s2.output();
    s3->output();


    return 0;
}
    void Student::input(){
        cout<<"\n enter roll no: ";
        cin>>roll;
        cout<<"\n Enter name: ";
        cin>>name;
    }
    inline void Student::output(){
        cout<<"\nROLL: "<<roll;
        cout<<"\nNAME: "<<name;
    }