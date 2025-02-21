#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b;
    try{
        if(b==0) {
            throw('e');    /////strings pettalem anukunta
        }
        else{
            c=a/b;
            cout<<c<<endl;
        }
    }
    catch(char s){
        cout<<s<<endl;
    }
}
