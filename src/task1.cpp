/*
 * Name:Abdimannabov Sohibjon
 * Date:6.11.23
 */

#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;
};

class Stack {
private:
  Node *head;

public:
  Stack() {
    head = nullptr;
    }

  void push(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
  }

  int pop() {
    if (head == nullptr) {
      cout << "Stack is empty." << endl;
      return -1;
    }

    Node *temp = head;
    int data = temp->data;
    head = head->next;
    delete temp;

    return data;
  }

  int top() {
    if (head == nullptr) {
      cout << "Stack is empty." << endl;
      return -1;
    }

    return head->data;
  }

  bool isEmpty() {
     return head == nullptr;
    }
};

int main() {
  Stack s;

  s.push(1);
  s.push(2);
  s.push(3);

  cout << s.top() << endl;

  s.pop();

  cout << s.top() << endl;

  s.pop();

  cout << s.top() << endl;

  s.pop();

  cout<<boolalpha<< s.isEmpty() << endl;

  return 0;
}
