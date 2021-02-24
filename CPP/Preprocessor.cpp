/* Sample INPUT from Hackerrank Preprocessor solution

5
32 332 -23 -154 65

*/

/* defining macros here */

#define INF 0 //because assigned to mx mn
#define toStr(str) #str // it changes Result = to string
#define io(v) cin >> v // defining io as used for cin
#define FUNCTION(a, b) // this actually has no use so simply just defined 
#define foreach(v, i) for(int i = 0 ; i < v.size(); i++)//defined foreach(v, i) used in program
#define maximum(a, b) a = a>b ? a : b  //assign and return a on condition
#define minimum(a, b) a = a<b ? a : b  //assign and return a on condition

#include <iostream>
#include <vector>
using namespace std;

//this is use to throw error if we dont defines macros demanded
#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)    //this are for confusion there are no FUNCTION in cpp
FUNCTION(maximum, >)    //this also for confusion there are no FUNCTION in cpp

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {     //there is no keyword or funciton like foreach in cpp we have to define this too
		io(v)[i];       // there is nothing like io in cpp we also defined this
	}
	int mn = INF;       //INF defined above using macros
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]); //created macros for this too above
		maximum(mx, v[i]); //created macros for this too above
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans; //there is nothing like toStr(Result = ) in cpp so  
	return 0;                            // we defined macro for this too above

}