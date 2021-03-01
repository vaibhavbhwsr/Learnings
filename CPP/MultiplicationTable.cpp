#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a;
    cout << "Enter a no. to see it's table : ";
    cin >> a;
    for(int i = 1; i < 11; i++){
        cout << a << " X " << i << " = " << a * i << endl;
    }
    return 0;
}