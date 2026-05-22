#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);



	for (int tc = 1; tc <= 10; tc++) {

		int T;
		cin >> T;

		string findingWord;
		string word;

		cin >> findingWord;
		cin >> word;

		int count = 0;
		size_t pos = word.find(findingWord);

		while (pos != string::npos) {
			count++;
			pos = word.find(findingWord, pos + findingWord.length());
		}

		cout << "#" << tc << " " << count << "\n";
	}
}