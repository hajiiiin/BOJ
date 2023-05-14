#include <iostream>
#include <deque>
using namespace std;

class dq {
	deque<int> Deque;

public:
	void pushFront(int x) {
		Deque.push_front(x);
	}
	void pushBack(int x) {
		Deque.push_back(x);
	}
	void popFront() {
		if (Deque.size() == 0) {
			cout << "-1\n";
		}
		else {
			cout << Deque.front() <<"\n";
			Deque.pop_front();
		}
	}
	void popBack() {
		if (Deque.size() == 0) {
			cout << "-1\n";
		}
		else {
			cout << Deque.back() << "\n";
			Deque.pop_back();
		}
	}
	void Size() {
		cout << Deque.size() <<"\n";
	}
	void Empty() {
		if (Deque.empty()) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
	void Front() {
		if (Deque.size() == 0) {
			cout << "-1\n";
		}
		else {
			cout << Deque.front() << "\n";
		}
	}
	void Back() {
		if (Deque.size() == 0) {
			cout << "-1\n";
		}
		else {
			cout << Deque.back() << "\n";
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	dq que;

	int N;
	cin >> N;

	string str;
	int x;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push_front") {
			cin >> x;
			que.pushFront(x);
		}
		else if (str == "push_back") {
			cin >> x;
			que.pushBack(x);
		}
		else if (str == "pop_front") {
			que.popFront();
		}
		else if (str == "pop_back") {
			que.popBack();
		}
		else if (str == "size") {
			que.Size();
		}
		else if (str == "empty") {
			que.Empty();
		}
		else if (str == "front") {
			que.Front();
		}
		else if (str == "back") {
			que.Back();
		}
	}

	

    return 0;
}