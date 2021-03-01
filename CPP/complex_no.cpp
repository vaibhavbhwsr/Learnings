#include <iostream>

using namespace std;

class Complex{
    private:
        int real;
        int imagenary;
    public:
        Complex(): real(0), imagenary(0) {}
        void input(){
            cout << "Enter real part of a complex no.";
            cin >> real;
            cout << "Enter imagenary part of a complex no.";
            cin >> imagenary;
        }
        Complex operator-(Complex a){
            Complex ob;
            ob.real = real - a.real;
            ob.imagenary = imagenary - a.imagenary;
            return ob;
        }
        friend ostream &operator<<(ostream &output, Complex &obj){
            if(obj.imagenary < 0)
                output << obj.real << obj.imagenary << "i";
            else
                output << obj.real << "+" << obj.imagenary << "i";
            return output;
        }
};
int main(){
    system("cls");
    Complex obj, obj2, ob;
    obj.input();
    obj2.input();
    ob = obj - obj2;
    cout << ob;
    return 0;
}