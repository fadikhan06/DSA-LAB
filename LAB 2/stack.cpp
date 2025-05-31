#include "stack.h"
#include<string>

#include <stdlib.h>

Stack::Stack() {
    top = -1;
}

Stack::~Stack() {

}

bool Stack::isEmpty() const {
    return (top == -1);
}

bool Stack::isFull() const {
    return (top == MAX_ITEMS - 1);
}

void Stack::push(char newitem) {
    if (isFull()) {
        cout << "Stack overflow" << endl;
        exit(1);
    }
    top++;
    items[top] = newitem;
}

void Stack::pop(char& item) {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        exit(1);
    }
    item = items[top];
    top--;
}

int Stack::peek() const {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        exit(1);
    }
    return items[top];
}
void Stack::reverse(string input) {
    char c;
    string reversed = "";


    for (char c : input) {
        push(c);
    }
    while (!isEmpty())
    {
        pop(c);

        reversed += c;

    }
    cout << reversed;
}
void Stack::validity(string input) {
    char c;
    int left = 0;
    int right = 0;



    for (char c : input) {
        if (c == '(')
        {
            push(c);
            right++;
        }
        else if (c == ')')
        {
            push(c);
            left++;

        }

    }
    if (left == right)
    {
        cout << "expression is balanced";

 }
    else {
        cout << "parethesis are not balanced";
    }
}

