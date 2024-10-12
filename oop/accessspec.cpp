/*
access specifiers: 
1.)public: members are accessible from outside the class
2.)private: members cannot be accessed (or viewed) from outside the class
3.)protected: members cannot be accessed from outside the class, however , they can bw accessed in inherited classes
*/

/*
class test{
    protected:
    int a;
};
class base : public test
{
}

STRUCT:

struct rectangle{
    int width,height;
};
int main(void){
    struct rectangle rec;
    rec.width = 8;
    rec.height = 10;
    cout<<"area of rectangle: "<<(rec.width*rec.height)<<endl;
    return 0;
}

*/