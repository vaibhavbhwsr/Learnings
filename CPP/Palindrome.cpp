#include <iostream>

using namespace std;

int main(){
    system("cls");
    long long int a, c, temp, r = 0;
    cout << "Enter a no. ";
    cin >> a;
    c = a;
    while(a){
        temp = a % 10;
        r = r*10 + temp;
        a = a / 10;
    }
    if(r == c){
        cout << "Yes it is Palindrome.";
    }
    else{
        cout << "No it is not a Palindrome.";
    }
    return 0;
}