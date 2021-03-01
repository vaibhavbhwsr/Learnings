//Error h isme
#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

int main(){
    system("cls");
    float a, b, c, d, r1, r2;
    cout << "Enter 3 coefficient of quadratic equation ";
    cin >> a >> b >> c;
    d = (pow(b,2) - 4 * a * c);
    r1 = (-b + sqrt(d) ) / (2 * a) ;
    r2 = (-b - sqrt(d) ) / (2 * a) ;
    if(d > 0){
        cout << "Real Roots and Roots are: " << r1 << " and " << r2 << endl;
    }
    else if(d == 0){
        cout << "Equal Roots and Roots are: " << r1 << " and " << r2 << endl;
    }
    else if(d < 0){
        cout << "Imaginery Roots and Roots are: \n" << -b/2*a << "+" << sqrt(-d)/2*a << "i" << endl
        << -b/2*a << "-" << sqrt(-d)/2*a << "i" << endl; 
    }
    return 0;
}