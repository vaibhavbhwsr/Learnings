#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sum = 0;
    system("cls");
    cout << "Enter no. upto where you want sum ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
     sum += i;
    cout << "Sum of the numbers are: " << sum;
    
    return 0;
}