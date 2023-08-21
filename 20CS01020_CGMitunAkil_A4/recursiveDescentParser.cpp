#include <bits/stdc++.h>
using namespace std;

// Function to parse non-terminal S
bool parse_S(string input, int& pos);

// Function to parse non-terminal B
bool parse_B(string input, int& pos);

// Function to parse non-terminal A
bool parse_A(string input, int& pos);

int main() {
    string input_string;
    cout << "Enter the input string: ";
    cin >> input_string;

    int position = 0;
    if (parse_S(input_string, position) && position == input_string.length()) {
        cout << "Accepted" << endl;
    } else {
        cout << "Not accepted" << endl;
    }

    return 0;
}

bool parse_S(string input, int& pos) {
    if (pos < input.length() && input[pos] == 'n') {
        pos++;
        return parse_B(input, pos);
    }
    return false;
}

bool parse_B(string input, int& pos) {
    if (pos < input.length() && input[pos] == 'n') {
        int vpos = pos;
        pos++;
        if (parse_B(input, pos) && parse_A(input, pos) && parse_B(input, pos)) {
            return true;
        }
        pos = vpos;// revert changes
        return false;
    }
    return true;  // ε production
}

bool parse_A(string input, int& pos) {
    if (pos < input.length() && (input[pos] == '+' || input[pos] == 'x' )) {
        pos++;
        return true;
    }
    return false;
}
