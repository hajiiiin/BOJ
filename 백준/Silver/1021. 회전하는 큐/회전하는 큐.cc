#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    deque<int> q; //연산을 진행할 큐
    int N; //큐의 크기
    int index; //2,3번 연산을 선택하기 위한 인덱스 정보
    int cnt = 0; //2,3번 연산 횟수

    cin >> N;
    for (int i=0; i < N;i++) { //1~N을 큐에 추가
        q.push_back(i+1);
    }
    int M;
    cin >> M;
    
    int input_n; //입력받는 수
    for (int i = 0; i < M; i++) {
        cin >> input_n;
        for (int idx = 0; idx < q.size(); idx++) { 
            //0부터 시작하니까 전위 연산자로 +1된 값을 저장함
            if(q[idx] == input_n) {
                index = idx;
                break;
            }
        }
        while(true) { //큐 연산
            
            if (q.front() == input_n) { //큐의 첫번째 원소가 n이라면 pop
                q.pop_front();
                break;
            }
            else {
                if (index < (q.size()- index)) { 
                    //해당 원소보다 뒤의 요소가 더 많다는 뜻 => 2번 연산이 효율적
                    cnt++;
                    q.push_back(q.front()); //첫번째 값을 마지막에 추가하고
                    q.pop_front(); //첫번째 값 삭제
                }
                else {
                    cnt++;
                    q.push_front(q.back()); //마지막 값을 맨 앞에 추가
                    q.pop_back(); //마지막 값 삭제
                }
            }
            if (q.size() == 0) {
                break;
            }
        }
    }

    cout << cnt << " ";
    
	return 0;
}