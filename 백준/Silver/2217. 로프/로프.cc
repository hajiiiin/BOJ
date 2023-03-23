#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N; //줄 개수
	cin >> N;

	int* w = new int[N]; //버틸 수 있는 중량 배열
	int* compare = new int[N+1]; //최대 중량 비교용

	for (int i = 0; i < N; i++) {
		cin >> w[i]; //중량 N개만큼 입력받기
	}
	sort(w, w + N, greater<int>()); //중량 내림차순 정렬
	int max = 0;

	for (int i = 1; i < N+1; i++) {
		compare[i] = w[i - 1] * i;;
		if(compare[i] > max) max = compare[i];
	}
	cout << max;

	delete[] w;
	delete[] compare;
	return 0;
}