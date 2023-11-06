#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

bool checkExpression(string brackets) {
    stack<char> st;
    unordered_map<char, char> closingToOpening = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            st.push(bracket);
        } else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (st.empty() || st.top() != closingToOpening[bracket]) {
                return false;
            } else {
                st.pop();
            }
        }
    }

    return st.empty();
}

int main() {
    int n;
    string brackets;
    cin >> n;
    cin.ignore();
    getline(cin, brackets);

    if (checkExpression(brackets)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
