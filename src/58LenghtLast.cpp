#include <iostream>

using namespace std;


int lengthOfLastWord(string s) {
    int last = s.length() - 1;
    while(s[last] == ' ' && last >= 0)
        last--;
    int first = last;
    while(first != ' ' && first >= 0)
        first--;
    
    return last - first;
}

int main(){
    string s = "luffy is";
    cout << lengthOfLastWord(s);
    return 0;
}