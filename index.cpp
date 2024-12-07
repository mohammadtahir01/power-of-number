#include <iostream>
using namespace std;
int main(){
    int base, power;
    int max=1;
    
    cout<<"Enter the base number:";
    cin>>base;
    cout<<"Enter the power number:";
    cin>>power;
    
    for(int i=1; i<=power; ++i){
        max*=base;
    }
     cout<<max;

    return 0;
}