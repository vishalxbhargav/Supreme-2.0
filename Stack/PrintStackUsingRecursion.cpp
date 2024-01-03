#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }
    int topElement = st.top();
    st.pop();
    printStack(st);
    cout << topElement << " ";
    st.push(topElement);
}

int main() {
    stack<int> st;
    st.emplace(10);
    st.emplace(15);
    st.emplace(20);

    cout << "Stack elements: ";
    printStack(st);

    return 0;
}
