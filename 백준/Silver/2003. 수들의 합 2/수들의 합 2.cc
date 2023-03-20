#include <iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M; //N, M 입력받기

	int *A = new int[N]; // 수열 A 동적할당 

	for (int i = 0; i < N; i++) {
		cin >> A[i]; //수열에 값 넣기
	}
	
	int cnt=0; //경우의 수 : cnt 
	int sum = 0; // 합 확인 : sum

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			sum += A[j];
			if (sum == M) { //합이 같을 때 cnt증가, sum은 0으로 해서 다음 계산
				cnt++;
				sum = 0;
				break;
			}
		}sum = 0; //N까지 계산했지만 sum != M이므로 sum초기화 후 다시 계산
	}
	
	cout << cnt;

	delete[] A;
	return 0;
}