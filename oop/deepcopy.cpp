#include<iostream>
using namespace std;

class box{
    int length;
    int* breadth;
    int height;
    public:
    box(){
        breadth = new int;
    }

    void set_dimension(int len, int brea, int heig){
        length = len;
        *breadth = brea;
        height = heig;

    }

    void show_data(){
        cout<<"Length = "<<length<<endl;
        cout<<"Breadth = "<<*breadth<<endl;
        cout<<"Height = "<<height<<endl;
    }
    box(box& sample){
        length = sample.length;
        breadth = new int;
        *breadth = *(sample.breadth);
        height = sample.height;
    }

    ~box(){
        delete breadth;
    }

};

int main()
{

    box first;
    first.set_dimension(12,15,16);
    
    return 0;
}