#include <iostream>

using namespace std;

int main(){
    system("cls");
    int a, b, c;
    cout << "Enter 3 no. ";
    cin >> a >> b >> c;
    if(a > b && a > c)
        cout << a;
    else if(b > c) // yaha && b > a jarurat nai h
        cout << b;
    else 
        cout << c;
    
    return 0;
}