#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    string location;

    cin >> TC;
    
    for(int i=0; i<TC; i++){
        
        bool hasE = false;
        bool hasW = false;
        bool hasS = false;
        bool hasN = false;
        
        cin >> location;
        for(char c : location){
            if(c == 'E') hasE = true;
            if(c == 'W') hasW = true;
            if(c == 'S') hasS = true;
            if(c == 'N') hasN = true;
        }
        if ((hasE && hasW) && (hasS && hasN)) cout << "Yes" << endl;
        else if ((hasE && hasW) && (!hasS && !hasN)) cout << "Yes" << endl;
        else if ((!hasE && !hasW) && (hasS && hasN)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
