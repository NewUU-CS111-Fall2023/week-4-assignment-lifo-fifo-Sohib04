#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluateExpression(string expression) {
    stack<int> st;

    for (char ch : expression) {
        if (ch >= '0' && ch <= '9') {
            st.push(ch - '0');
        } else {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            
            switch(ch) {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
            }
        }
    }
    return st.top();
}

int main() {
    string expression;
    getline(cin, expression);

    int result = evaluateExpression(expression);
    cout << result << endl;

    return 0;
}
