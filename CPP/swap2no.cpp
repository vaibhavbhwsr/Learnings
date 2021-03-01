//Without using third variable
#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a , b;
    cout << "Enter two no. to swap ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
    return 0;

}