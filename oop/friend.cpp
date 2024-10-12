#include<iostream>
using namespace std;

// class test{
//     private:
//     int priv;
//     public:
//     test(){
//         priv =10;

//     }
//     friend void frnd(test& obj);

// };

// void frnd(test& obj){
//     cout<<"private member is: "<<obj.priv<<endl;
// }


// int main()
// {
//     test obj1;
//     frnd(obj1);
//     return 0;
// }



class Box{
    private:
    int length;
    public:
    Box(){
        length =0;
    }
    friend int printlength(Box);
};
int printlength(Box b){
    b.length += 10;
    return b.length;
}
int main(){
    Box b;
    cout<<"length of box: "<<printlength(b);
    return 0;
}