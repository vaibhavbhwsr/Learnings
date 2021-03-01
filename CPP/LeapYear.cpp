#include <iostream>

using namespace std;

int main(){
    system("cls");
    int y;
    cout << "Enter Year : ";
    cin >> y;
    if(y % 400 == 0)
        cout << "Leap Year";
    else if(y % 100 != 0 && y % 4 == 0)
        cout << "Leap Year";
    else 
        cout << "Not Leap Year";
    return 0;
}