#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a;
    char k = '*';
    cout << "Enter a no. ";
    cin >> a;
    for(int i = 1 ;i <= a; i++){
        for(int k = i; k < a; k++)
            cout << " ";
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}