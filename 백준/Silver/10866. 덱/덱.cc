#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    list<int> L;
    string command;
    int input, num;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> command;
        if(command == "push_front"){
            cin >> input;
            L.push_front(input);
        } 
        else if(command == "push_back"){
            cin >> input;
            L.push_back(input);
        }
        else if(command == "pop_front"){
            if(L.empty()) cout << -1 << endl;
            else{
                cout << L.front() << endl;
                L.pop_front();
            }
        }
        else if(command == "pop_back"){
            if(L.empty()) cout << -1 << endl;
            else{
                cout << L.back() << endl;
                L.pop_back();
            }
        }
        else if(command == "size") cout << L.size() << endl;
        else if(command == "empty"){
            if(L.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(command == "front"){
            if(L.empty()) cout << -1 << endl;
            else cout << L.front() << endl;
        }
        else if(command == "back") {
            if(L.empty()) cout << -1 << endl;
            else cout << L.back() << endl;
        }
        else return -1;
    }
    return 0;
}