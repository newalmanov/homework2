#include <iostream>
using namespace std;
int main(){
    int w,r;
    cin>>w>>r;
    if (w==1) {
        cout<<"Bus"<<endl;
    }else if (r==1) {
        cout<<"Walk"<<endl;
    }else {
        cout<<"Bike"<<endl;
    }
    return 0;
}