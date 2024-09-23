#include <iostream>
using namespace std;
int main() {
    long long num=0;
    cin>>num;
    if(num>=-2147483647 && num<=2147483647) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}