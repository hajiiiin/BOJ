#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N; //카드 개수
	cin >> N;

	queue<int> card;

	
	for (int i = 1; i < N+1; i++) { // 큐에 값 넣기
		card.push(i);
	}
	
	while (card.size() > 1) { //사이즈가 1보다 클 때 반복
		card.pop(); //맨 위 카드 삭제
		int top = card.front(); //맨 앞 카드를 변수에 저장
		card.push(top);  //맨 위 카드 맨 뒤로 보내기
		card.pop(); //보낸 카드 삭제
	}

	cout << card.front(); //마지막 남은 카드

	return 0;
}