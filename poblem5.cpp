#include <iostream>
using namespace std;
int main(){
    float n1,n2;
    char S;
    cin>>n1>>S>>n2;
    switch(S) {
        case '+':
            cout<<n1+n2<<endl;
        break;
        case '-':
            cout<<n1-n2<<endl;
        break;
        case '*':
            cout<<n1*n2<<endl;
        break;
        case '/':
                cout<<n1/n2<<endl;
        break;
        default:
            cout<<"Invalid operator"<<endl;
    }
    return 0;
}
