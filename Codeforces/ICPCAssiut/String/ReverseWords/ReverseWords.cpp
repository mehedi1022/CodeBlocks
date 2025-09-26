#include<bits/stdc++.h>
using namespace std;
int main()
{
string s, word = "";
getline(cin, s);
long long i, n = s.size();

for(i = 0; i < n; i++){
    if(s[i] == ' '){
        reverse(word.begin(), word.end());
        cout << word << " " ;
        word = "";
    }else{
        word += s[i];
    }
}
reverse(word.begin(), word.end());
cout << word;
    return 0;
}


// alternative 
/*
#include <iostream>
#include <string>
using namespace std;

// Function to reverse a word manually (without STL)
void reverseWord(char word[], int len) {
    int l = 0, r = len - 1;
    while (l < r) {
        char temp = word[l];
        word[l] = word[r];
        word[r] = temp;
        l++;
        r--;
    }
}

int main() {
    string s;
    getline(cin, s); // read full line with spaces

    int n = s.length();
    char word[1000005]; // buffer for single word
    int idx = 0;

    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') { 
            // end of word or end of string
            word[idx] = '\0'; // terminate the word

            // reverse manually
            reverseWord(word, idx);

            // print reversed word
            cout << word;

            if (i != n) cout << " "; // print space if not last word

            idx = 0; // reset for next word
        } else {
            word[idx++] = s[i]; // store characters of current word
        }
    }

    return 0;
}

*/