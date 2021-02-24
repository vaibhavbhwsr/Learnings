/*INPUT Hacker Rank Exceptionl server
19
18271 8071
38985 9377
5874 615436
9503 279820
31745539325124 8793
5508 845288
3212 348085
53810 3471
-7655 1955
-9723 4588
95275032157449 3315
79206938429584 3356
3539 351444
73602 1207
1510 0
24151 6692
8495 0
50291 4556
83705 8081
*/
#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
		/* Enter your code here. */
        try{
            int pr = Server::compute(A,B);
            cout<< pr <<endl;
        }catch(const invalid_argument &ia){ //it will solve negative error
            cout << "Exception: " << ia.what() << endl;
        }catch(const bad_alloc &a){ // it will solve memory allocation error
            cout << "Not enough memory" << endl;
        }catch(exception &e){ // it will solve all other predefined exception in cpp
            cout << "Exception: " << e.what() <<endl;
        }catch(...){ // it will solve all other exception
            cout << "Other Exception" <<endl ;
        }
	}
	cout << Server::getLoad() << endl;
	return 0;
}