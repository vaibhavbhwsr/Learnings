#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a, b;
    cout << "Enter two no. ";
    cin >> a >> b;
    cout << "Question " << a / b << endl;
    cout << "Reminder " << a % b ;
    return 0;
}