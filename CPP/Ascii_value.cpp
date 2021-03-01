#include <iostream>

using namespace std;

int main(){
    system("cls");
    char c;
    cout << "Enter a character: ";
    cin >> c;
    int a = int(c); // it can also be written like this a = c; because it can convert automatically
    cout << "ASCII value of " << c << "is: " << a;
    return 0;
}