#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // Initialize a vector to count the occurrences of each character
    vector<int> count(26, 0);

    // Count the occurrences of each character in the string
    for (char c : s) {
        count[c - 'a']++;
    }

    // Count the number of characters with odd number of occurrences
    int odd_count = 0;
    for (int c : count) {
        if (c % 2 == 1) {
            odd_count++;
        }
    }

    // Check if the string can be rearranged into a palindrome
    if (odd_count <= 1) {
        cout << "DA" << endl;
    } else {
        cout << "NU" << endl;
    }

    return 0;
}