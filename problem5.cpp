#include <iostream>
using namespace std;

int main()
{
    double n1, n2, result;
    char operation;
    cin>> n1 >> operation>> n2;
    if(operation == '+')
        cout <<"Result: "<<n1+n2<<endl;
    else if(operation == '-')
        cout <<"Result: "<<n1-n2<<endl;
    else if(operation == '*')
        cout <<"Result: "<<n1*n2<<endl;
    else if(operation == '/'){
        if(n2 != 0){
            cout <<"Result: "<<n1/n2<<endl;
        }else {
            cout << "Error"<<endl;
        }
    }
    return 0;
}
