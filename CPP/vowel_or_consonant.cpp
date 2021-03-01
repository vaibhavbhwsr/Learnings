#include <iostream>

using namespace std;

int main(){
    system("cls");
    char a;
    cout << "Enter a character ";
    cin >> a;
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' )
        cout << "Vowel" ;
    else
        cout << "Consonant";
    
    return 0;
}