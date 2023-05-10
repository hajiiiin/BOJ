#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Queue {

	queue<int> q;

public:
	void push_q(int x) {
		q.push(x);
	}

	void pop_q() {
		if (q.size() == 0) {
			cout << "-1" << "\n";
		}
		else {
			int first = q.front();
			q.pop();
			cout << first << "\n";
		}
	}

	void size_q() {
		cout << q.size() << "\n";
	}

	void empty_q() {
		if (q.size() == 0) {
			cout << "1" << "\n";
		}
		else {
			cout << "0" << "\n";
		}
	}

	void front_q() {
		if (q.size() == 0) {
			cout << "-1" << "\n";
		}
		else {
			cout << q.front() << "\n";
		}
	}

	void back_q() {
		if (q.size() == 0) {
			cout << "-1" <<"\n";
		}
		else {
			cout << q.back() << "\n";
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	Queue que;
	
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		try {
			if (s == "push") {
				int x;
				cin >> x;
				que.push_q(x);
			}
			else if (s == "pop") {
				que.pop_q();
			}
			else if (s == "size") {
				que.size_q();
			}
			else if (s == "empty") {
				que.empty_q();
			}
			else if (s == "front") {
				que.front_q();
			}
			else if (s == "back") {
				que.back_q();
			}
			else {
				throw invalid_argument("Invalid command");
			}
		}
		catch (exception& e) {
			cout << e.what() << "\n";
		}
	}

    return 0;
}