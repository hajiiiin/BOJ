#include <iostream>
using namespace std;

int main() {
ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M; // 수의 개수, 합의 개수
	cin >> N >> M;
	int num; //입력받을 값
	int* sum = new int[N+1]; //동적 배열 할당

	for (int i = 1; i < N+1; i++) { //N개의 수 배열에 넣기
		cin >> num;
		sum[i] = sum[i-1] + num;
	}

	int start, end; //더할 구간
	for (int i = 0; i < M; i++) { //M회 실행
		cin >> start >> end;

		cout << sum[end] - sum[start-1] << "\n";
	}

	delete[] sum;
	return 0;
}