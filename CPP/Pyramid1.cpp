#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a;
    char k = 'A';
    cout << "Enter a no. ";
    cin >> a;
    for(int i = 0; i < a ; i++){
        //k = 1;
        for(int j = 0; j <= i ; j++){
            cout << k <<" ";
        }
        k++;
        cout << "\n";
    }
    return 0;
}