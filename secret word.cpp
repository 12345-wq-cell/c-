#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool isPalindrome = true;
    int n = word.length();

    // Check characters from both ends
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}