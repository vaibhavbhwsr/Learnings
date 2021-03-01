#include <iostream>

using namespace std;

int main(){
    system("cls");
    long long int n, r = 0, temp;
    cout << "Enter a no.";
    cin >> n;
    while(n){
        temp = n % 10;
        n = n/10;
        r = r * 10 + temp;
    }
    cout << "Reverse of no. is: " << r;
    return 0;
}