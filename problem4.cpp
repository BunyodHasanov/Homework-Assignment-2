#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    int count=0;
    if (n1==n2 || n1==n3 || n1==n4)
        count++;
    if (n2==n3 || n2==n4)
        count++;
    if (n3==n4)
        count++;
    cout<<count<<endl;

    return 0;
}
