#include<iostream>
#include<string>
using namespace std;

void reverse_string(string &text, int start, int end){
    if(start>=end) return;

    swap(text[start], text[end]);

    reverse_string(text, start+1, end-1);
}

int main(){
    string text;
    cout<<"Input a string: ";
    cin>>text;
    //getline(cin, text);     this is because cin doesn't consider spaces so we use getline so that it considers the whole line and not just the first word

    reverse_string(text, 0, text.length() - 1);
    cout<<"Reversed string: "<<text;
    return 0;
}