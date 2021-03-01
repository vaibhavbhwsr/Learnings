// need to understand more clearly about enum and how to use it
/* Input C++ class template specializatin hackerrank
2
1 0
3 3
*/

#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

// Define specializations for the Traits class template here.
template <>
struct Traits<Fruit>{
    Fruit f;
    static string name(int index){
        switch(index){  //we have used switch case here need to get more about enum
            case 0: return "apple";
            case 1: return "orange";
            case 2: return "pear";
            default: return "unknown";
        }
    }
};

template <>
struct Traits<Color>{
    Color f;
    static string name(int index){
        switch(index){
            case 0: return "red";
            case 1: return "green";
            case 2: return "orange";
            default: return "unknown";
        }
    }
};


int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}