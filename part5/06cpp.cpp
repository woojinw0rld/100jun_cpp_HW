#include <iostream>
using namespace std;

int main(){
    int alphaArray[26];
    string str;
    cin >> str;
    for(int i = 0; i<26; i++){
        alphaArray[i] = -1;
    }
    for(int i = 0; i<str.size(); i++){
        if(alphaArray[str[i]-'a'] == -1)
            alphaArray[str[i]- 'a'] = i;
    }
    for(int i = 0; i<26; i++){
        cout << alphaArray[i] << " ";
    }

    return 0;

}