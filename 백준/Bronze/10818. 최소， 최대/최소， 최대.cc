#include <iostream>
using namespace std;

int main() {
    int maxnum, num;
    int min = 1000001;
    int max = -1000001;

    cin >> maxnum;

    for (int i = 0; i < maxnum; i++){
        cin >> num;
        if(num < min) min = num;
        if(num > max) max = num;
    }

    cout << min << " " << max;

    return 0;
}