#include <iostream>

using namespace std;

class OperatorOver{
        int i;
        public:
            OperatorOver(): i(0) {}
            void operator ++(){
                i = i + 2;
            }
            void operator --(){
                i = i - 3;
            }
            void display(){
                cout << i << endl;
            }
    };
int main(){
    system("cls");
    OperatorOver obj;
    ++obj;
    ++obj;
    ++obj;
    --obj; // currently it is working on preincreament only
    obj.display();
    return 0;
}