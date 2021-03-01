#include <iostream>

using namespace std;

int main(){
    int n1, n2, n, LCM;
    cout << "Enter two no.";
    cin >> n1 >> n2;
    n = (n1 > n2) ? n1 : n2;
    for(int i = n; i <= (n1 * n2); i++){
        if(i % n1 == 0 && i % n2 == 0){
            LCM = i;
            break;
        }
    }
    cout << "LCM of given no. is: " << LCM;
    return 0;
}