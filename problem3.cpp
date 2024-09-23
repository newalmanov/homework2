#include <iostream>
using namespace std;
int main(){
    char s;
    float h;
    cin>>s>>h;
    if(s=='M') {
        if(h<1.70) {
            cout<<"Short"<<endl;
        }else if (h>=1.70 && h<1.85) {
            cout<<"Normal"<<endl;
        }else {
            cout<<"Tall"<<endl;
        }
    }  else if (s=='F') {
        if (h<1.60) {
            cout<<"Short"<<endl;
        }else if (h>=1.60 && h<1.75) {
            cout<<"Normal"<<endl;
        }else {
            cout<<"Tall"<<endl;
        }
    }
    return 0;
}