#include <iostream>
using namespace std;

int main(){
    char sex;
    float height;
    cin >> sex >> height;
    if (sex == 'M')
        if (height < 1.70)
            cout << "Short" << endl;
        else if (height >= 1.70 && height < 1.85)
            cout << "Normal" << endl;
        else if (height >= 1.85)
            cout << "Tall" << endl;
    if (sex == 'F')
            if (height < 1.60)
                cout << "Short" << endl;
            else if (height >= 1.60 && height < 1.75)
                cout << "Normal" << endl;
            else if (height >= 1.75)
                cout << "Tall" << endl;
            else
                cout << "Error" << endl;
    return 0;
}
