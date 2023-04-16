#include <string>
#include <iostream>
#include "part2.hpp"

using namespace std;

void queueImp::insertRear(string value){
    Node* newNode = new Node(value);

    if (queueEmpty() == true){ // If the queue is empty, set our head and tail to our new node, as it's the first item.
        head = tail = newNode;
    }
    else{ // If not, move our tail to the newest addition.
        tail->next = newNode;
        tail = newNode;
    }
    queuesize++;
    cout << "Operation completed.\n";
}

string queueImp::popFront(){
    if (queueEmpty() == true){ // Can't return nothing.
        cout << "Queue is empty. Cannot return data.";
    }
    else { // Simply return the data.
        return head->data;
    }
}

string queueImp::removeFront(){
    string poppedData;
    if (queueEmpty() == true){ // Can't delete nothing.
        cout << "Queue is empty. Cannot pop front.";
    }
    else { // Store the data on a variable, create a temp node, move the head, and delete the temp node.
        poppedData = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        queuesize--;

        return poppedData;
    }
}

bool queueImp::queueEmpty(){
    return queuesize < 1; // we are so optimal
}

int queueImp::queueSize(){
    return queuesize;
}

queueImp::queueImp(){
    head = nullptr;
    tail = nullptr;
    queuesize = 0;
}