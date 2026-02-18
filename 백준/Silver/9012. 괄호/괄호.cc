#include <iostream>
#include <string>
#include <stack>
using namespace std;


string isVPS(string str){
    stack<int> s;
    int c = 0;

    if(s.empty())
        for(int i = 0; i < str.length(); i++){
            s.push(str[i]);
        } 
    else return "NO";

    while(!s.empty()){
        if(s.top() == ')'){
            c++;
            s.pop();
        }
        else if(s.top() == '('){
            c--;
            s.pop();
        }
        else{
            return "NO";
            break;
        }
        if (c < 0) return "NO";
    }
    if(c == 0) return "YES";
    else return "NO";
}

int main(){
    int num;
    cin >> num;
    string* arr = new string[num];
    
    for (int i=0; i<num; i++){
        cin >> arr[i];
        if(arr[i].length() < 2 || arr[i].length() > 50){
            return -1;
        }
    }

    for (int i=0; i<num; i++){
        cout << isVPS(arr[i]) << endl;
    }
    
    delete[] arr;
    return 0;
}