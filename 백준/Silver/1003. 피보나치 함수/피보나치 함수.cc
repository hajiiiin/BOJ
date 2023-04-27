#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> fibo; //fibo 값을 저장해둘 저장소

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        if (fibo.count(n) > 0) { //fibo n값이 있다면 그 값 가져오기
            return fibo[n];
        }
        else { //값이 없다면 계산
            int result = fibonacci(n - 1) + fibonacci(n - 2);
            return fibo[n] = result; //계산한 값을 배열에 저장
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;

    int input_n;
    for (int i = 0; i < testCase; i++) {
        cin >> input_n;
        if (input_n == 0) {
            printf("%d %d\n", 1, 0);
        }
        else if (input_n == 1) {
            printf("%d %d\n", 0, 1);
        }
        else {
            fibonacci(input_n);
            printf("%d %d\n", fibonacci(input_n - 1), fibonacci(input_n));
        }
    }

	return 0;
}