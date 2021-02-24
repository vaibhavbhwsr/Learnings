#include<iostream>
#include<string>

using namespace std;

int main(){
    string a;
    getline(cin,a);
    
    for(int i = 0 ; i < a.size();i++){
        if(isspace(a[i])){ 
         cout<< " ";
        }
        else{
            cout<<char(a[i]+1);
        }
    }
    return 0;
}