#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a = 0, b= 1, c, l;
    cout << "Enter length : ";
    cin >> l;
    cout<< a << " " << b << " ";
    for(int i = 0; i < l-2; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}