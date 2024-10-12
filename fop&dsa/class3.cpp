#include<iostream>
using namespace std;
class Message{
    public:
    void hi();
    void bye();
};

int main(){
    cout<<"Welcome to Jaipur"<<endl;
    Message *obj = new Message();
    obj->hi();
    obj->bye();


    return 0;
}

void Message::hi(){
    cout<<"hi"<<endl;
}
void Message::bye(){
    cout<<"bye"<<endl;
}



// if we use static before defiining a variable then we need to initilaize and define the variable outside the class using a scope resolution operator...static variable are of global lifetime.....premanent variable....special variable....used to store common shareable data