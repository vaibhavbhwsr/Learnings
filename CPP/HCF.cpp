#include <iostream>

using namespace std;

int main(){
    int n1, n2, n, HCF;
    cout << "Enter two no.";
    cin >> n1 >> n2;
    n = (n1 < n2) ? n1 : n2;
    for(int i = 1; i <= n; i++){
        if(n1 % i == 0 && n2 % i == 0){
            HCF = i;
        }
    }
    cout << "HCF of given no. is: " << HCF;
    return 0;
}