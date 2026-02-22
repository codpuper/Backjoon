#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    map<int, string> mapI;
    map<string, int> mapP;
    int n, m;
    string pokemon, input; 
    cin >> n >> m;
    for(int i = 1; i<n+1; i++){
        cin >> pokemon;
        mapI[i] = pokemon;
        mapP[pokemon] = i;
    }
    for(int i = 0; i < m; i++){
        cin >> input;
        if (input[0] >= '0' && input[0] <= '9') {
            int index = stoi(input);
            if (mapI.find(index) != mapI.end()) {
            cout << mapI[index] << '\n';
            } else return -1;
        } else {
            if (mapP.find(input) != mapP.end()) {
                cout << mapP[input] << '\n';
            } else return -1;
        }
    }

    return 0;
}