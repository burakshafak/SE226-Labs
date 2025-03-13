#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


class Stack {
private:
    Node* top;
    int capacity;
    int size;

public:
    
    Stack(int cap) {
        top = nullptr;
        capacity = cap;
        size = 0;
    }

    
    void push(int x) {
        if (size >= capacity) {
            increaseCapacity();
        }
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        size++;
    }

    
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow!\n";
            return -1;
        }
        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return poppedValue;
    }

    
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return top->data;
    }

    
    bool isEmpty() {
        return top == nullptr;
    }

    void increaseCapacity() {
        capacity *= 2;
        cout << "Stack capacity doubled to " << capacity << endl;
    }

    void deleteElement(int x) {
        if (isEmpty()) {
            cout << "Stack is empty, nothing to delete!\n";
            return;
        }

        Node* temp = top;
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != x) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Element not found in stack!\n";
            return;
        }

        if (prev == nullptr) {
            top = top->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
        size--;
        cout << "Deleted element " << x << " from the stack.\n";
    }

    void display() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    
};

int main() {
    Stack s(3); 

    s.push(25);
    s.push(45);
    s.display();
    s.deleteElement(45);
    s.push(88);
    s.display();
    s.push(8);
    s.push(9);
    s.deleteElement(66);
    s.display();


    cout << "Peek: " << s.peek() << endl;
    cout << "Popped: " << s.pop() << endl;
    s.display();

    cout<< "Popped: " << s.pop() << endl;
    


    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
