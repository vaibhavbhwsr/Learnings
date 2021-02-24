#include <iostream>
#include <string>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements{
    private: 
        T element1;
    public:
        AddElements(T ele){
            element1 = ele;
        }
        T add(T ele){
            return element1 + ele;
        }
};

template <>
class AddElements <string> {
        string ele;
    public:
        AddElements(string elem){
            ele = elem;
        }
        string concatenate(string elen){
            return ele + elen;
        }        
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
