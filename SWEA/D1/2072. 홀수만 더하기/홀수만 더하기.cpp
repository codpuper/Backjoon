#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;
	vector<int> num(10);

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		
		int sum = 0;

		for (int j = 0; j < 10; j++) {
			cin >> num[j];
			if (num[j] % 2 == 1) {
				sum += num[j];
			}
		}

		cout << "#" << i+1 << " " << sum << endl;
	}
}