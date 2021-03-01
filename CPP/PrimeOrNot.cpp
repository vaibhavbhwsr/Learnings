#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    system("cls");
    int a, check = 0;
    cout << "Enter a no. ";
    cin >> a;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            check++;
            break;
        }
    }
    if(check){
        cout << "Not Prime";
    }
    else{
        cout << "Prime";
    }

    return 0;
}