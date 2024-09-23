#include <iostream>
using namespace std;

int main(){
    long long number;
    cin >> number;
    if (number >= -2147483647 && number <= 2147483647)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
