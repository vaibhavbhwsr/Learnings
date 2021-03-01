#include <iostream>
#include <cmath>

using namespace std;

int main(){
    system("cls");
    int a, b, c, check, count = 0;
    cout << "Enter two no. as a interval: ";
    cin >> a >> b;
    if(a == 1)
        a++;
    for(int j = a ; j <= b; j++){
        check = 0;
        for(int i = 2; i <= sqrt(j); i++){
            if(j % i == 0){
                check++;
                break;
            }
        }
        if(check == 0){
            count++;
            cout << j << " ";
        }
    }
    cout<< "\nTotal Prime numbers are: " << count << endl <<endl;
    return 0;
}