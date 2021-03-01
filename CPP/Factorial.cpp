#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a, fact = 1;
    cout << "Enter a no. for it's factorial : ";
    cin >> a;
    for(int i = a; i > 0 ; i--){
        fact = fact * i;
    }
    cout << "Factorial is: " << fact;
    return 0;
}