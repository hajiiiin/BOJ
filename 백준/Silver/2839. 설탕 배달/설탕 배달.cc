#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int result = 0;
	if (N % 5 == 0) {
		result = N / 5;
		cout << result;
	}
	else {
		while (true) {
			N -= 3;
			result++;
			if (N % 5 == 0) {
				result += N / 5;
				cout << result;
				break;
			}
			else if (N == 1 || N == 2) {
				result = -1;
				cout << result;
				break;
			}
			else if (N == 0) {
				cout << result;
				break;
			}
		}
	}

	return 0;
}