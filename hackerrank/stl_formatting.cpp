/*
    An exercise to practice formatting with iomanip library. I can't say I enjoyed this exercise or that
    I am good at formatting but I learned a lot about formatting in C++ with this exercise.

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