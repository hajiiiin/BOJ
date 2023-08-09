#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string a;
	int count = 0;

	while(true) {
		getline(cin, a);

		if (a != "#") {
			for (int i = 0; i < a.length(); i++) {
				if (tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i]) == 'o' || tolower(a[i]) == 'u') {
					count++;
				}
			}

			cout << count <<endl;
			count = 0;
		}
		else {
			break;
		}
		
	}
	

	return 0;
}