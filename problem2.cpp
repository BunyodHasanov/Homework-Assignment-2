#include <iostream>
using namespace std;

int main(){
    int winter, rain;
    cin >> winter >> rain;
    if (winter == 1)
    {
        cout << "Bus" << endl;
    }else if (rain == 1)
    {
        cout << "Walk" << endl;
    }else
    {
        cout << "Bike" << endl;
    }
    return 0;
}
