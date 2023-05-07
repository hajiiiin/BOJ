#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N;
	cin >> M;
    //도감 map
	map<string, string> nameToNum; // 이름을 key로, 번호를 value로
    map<string, string> numToName; // 번호를 key로, 이름을 value로 갖는 맵
    string name;
    for (int i = 0; i < N; i++) {
        cin >> name;
        string num = to_string(i + 1);
        nameToNum[name] = num;
        numToName[num] = name;
    }

    for (int i = 0; i < M; i++) {
        cin >> name;
        if (nameToNum.find(name) != nameToNum.end()) { // 이름으로 번호를 찾는 경우
            cout << nameToNum[name] << "\n";
        }
        else { // 번호로 이름을 찾는 경우
            cout << numToName[name] << "\n";
        }
    }

    return 0;
}