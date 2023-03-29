#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<long long int> pibo(N+1);
	
	for (int i = 0; i < N+1; i ++) {
		if (i == 0) { 
			pibo.at(i) = 0; 
		}
		else if (i == 1) {
			pibo.at(i) = 1;
		}
		else {
			pibo.at(i) = pibo.at(i - 1) + pibo.at(i - 2);
		}
	}

	cout << pibo.at(N);

	return 0;
}