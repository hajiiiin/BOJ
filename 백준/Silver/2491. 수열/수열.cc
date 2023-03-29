#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> num;
	int k; //입력받을 수 
	for (int i = 0; i < N; i++) { //수열 벡터에 넣기
		cin >> k;
		num.push_back(k);
	}

	int plus_length = 1; //수 커질 때
	int minus_length = 1; //수 작아질 때
	int maxium; //plus, minus 중 큰 값 저장
	int result = 1; //maxium들 중 큰 값 - N이 1일때는 for문을 돌지 않으므로
                    //N이 1일 경우의 result는 1이다.

	for (int i = 0; i < N-1; i++) {
		if (num.at(i) <= num.at(i + 1)) {
			plus_length++;
		}
		else { plus_length = 1; }

		if(num.at(i) >= num.at(i + 1)) {
			minus_length++;
		}
		else { minus_length = 1; }

		maxium = max(plus_length, minus_length);
		result = max(maxium, result);
	}

	cout << result;

	return 0;
}