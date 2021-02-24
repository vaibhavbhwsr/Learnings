/*INPUT Hacker rank Operator overloading
1
2 2
2 2 2 2
1 2 3 4
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
    
    public: 
        vector<vector<int>> a;
        
};

Matrix operator+(Matrix &A, Matrix &B){
    Matrix rt;
    int s = 0;
        for(int i = 0; i < A.a.size(); i++){
            vector<int> v;
            for(int j = 0 ; j < A.a[i].size(); j++){
                int temp;
                temp = A.a[i][j] + B.a[i][j];
                v.push_back(temp);
            }
            rt.a.push_back(v);
        }
    return rt;
}


int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
