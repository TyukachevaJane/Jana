#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    for(int i = 0; i < len; i++) {
        if(s[i] =>'A' && s[i]<='Z') {
            s[i] += 'z' - 'Z';
        }
    }
    cout << s;
}
