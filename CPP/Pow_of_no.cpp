#include <iostream>

using namespace std;

int main(){
    system("cls");
    int n, p, ans = 1;
    cout << "Enter a no. and it power: ";
    cin >> n >> p;
    for(int i = 0; i < p; i++){
        ans = ans * n;
    }
    cout << ans;
    return 0;
}