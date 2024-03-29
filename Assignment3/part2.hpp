#include <string>

using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(string value) { // Constructor
        data = value;
        next = nullptr;
    }

    ~Node() { // Destructor
        delete next;
    }
};

class queueImp {
public:
    void insertRear(string value);
    string popFront();
    string removeFront();
    bool queueEmpty();
    int queueSize();
    queueImp(); // after an hour of debugging i realized i forgot my constructor

private:
    int queuesize;
    Node* head;
    Node* tail;
};
