/*
    An exercise to practice formatting with iomanip library.

    https://www.hackerrank.com/challenges/prettyprint/problem
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << hex << left << showbase << nouppercase; 
        cout << (long long) A << '\n';

        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); 
        cout << B << '\n';

        cout << scientific << uppercase << noshowpos << setprecision(9); 
        cout << C << '\n'; 
	}
	return 0;

}
