#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		
		long long sum = 0;
		int max = 0;
		int nc;
		
		cin >> nc;
		vector<int> num(nc);

		for (int j=0; j < nc; j++) {
			cin >> num[j];
		}

		for (int j = nc-1; j > -1; j--) {
			if (max < num[j]) max = num[j];
			else if (max > num[j]) sum += max - num[j];
		}

		cout << "#" << i + 1 << " " << sum << endl;
	}

	return 0;
}