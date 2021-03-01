#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a;
    cout << "Enter a no. ";
    cin >> a;
    if(a % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}