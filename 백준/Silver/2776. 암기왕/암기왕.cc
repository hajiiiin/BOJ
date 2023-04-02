#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        set<int> note1; //note1에 적힌 숫자들
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            note1.insert(num);
        }


        int m;
        cin >> m; 
        
        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            if (note1.find(num) == note1.end()) {
                //해당 원소가 없는 경우
                cout << "0";
            }
            else { //원소가 있는 경우
                cout << "1";
            }
            cout << "\n";
        }
    }

	return 0;
}