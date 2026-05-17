#include <iostream>
using namespace std;

void func(int x, int y){
    cout << (x+y)/2 << " " << (x-y)/2 << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, x, y;

    cin >> TC;

    for(int i=0; i<TC; i++){
        cin >> x >> y;
        func(x, y);
    }

    return 0;
}
