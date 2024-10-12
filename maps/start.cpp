#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    //creation
    unordered_map<string , int> m;

    //insertion:

    //1.):
    pair<string,int> p = make_pair("agr",3);
    m.insert(p);

    //2.):
    pair<string,int> pair2("gauri",2);
    m.insert(pair2);

    //3.):
    m["mera"] = 1;

    //if we write m["mera"] = 2; after the code at line 21 then it will simply update the point to 2
    //harr ek key ke corresponding ek hi entry hogi


    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("agr")<<endl;

    // cout<<m.at("unknown")<<endl; //this would throw an error ....but if we put this code after the code on line 32 then it would also print zero instead of error because tb tk memory create ho chuki hogi for unknown
    cout<<m["unknown"]<<endl; //this would create a space for the unknown corresponding to 0 so the output would come as zero
    cout<<m.at("unknown")<<endl;


    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("bro")<<endl; //since bro naam ki koi key nahi padi hai therefore it would cout 0
    cout<<m.count("gauri")<<endl; //since ye store hai toh one dediya as output

    //erase
    m.erase("agr");
    cout<<m.size()<<endl;

    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //ITERATOR:
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<" "<<endl;
        it++;
    }
    
    //uppar ko run karne pr ordered way mai sb print ho raha hai but if we use simply map instead of unordered_map tb jis element ko pehle dala hai uss way mai print karega ....like maine 'mera' se pehle 'gauri' dala tha toh gauri pehle print karega 

    return 0;
}