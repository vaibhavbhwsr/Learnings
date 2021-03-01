#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a;
    cout << "Enter a no. ";
    cin >> a;
    for (int i = 1 ; i <= a ; i++){
        if(a % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}