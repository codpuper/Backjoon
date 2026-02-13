#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string word;
    string alphabet = "ABCDEFGHIJKLNMOPQRSTUVWXYZ";
    int bestAlph;
    int num = -1;
    int arr[26] = {0};

    cin >> word;

    for (char &c : word){
        c = toupper(c);
    }

    for (int i = 0; i < word.length(); i++){
        for (int j = 0; j < 26; j++){
            if(word[i] == alphabet[j]){
                arr[j]++;
            }
        }
    }
    
    for(int i = 0; i < 26; i++){
        if(num < arr[i]) {
            num = arr[i];
            bestAlph = i;
        }
        else if(num == arr[i]) bestAlph = 26;
    }
    
    if(bestAlph < 26) cout << alphabet[bestAlph];
    else cout << "?";
    return 0;
}