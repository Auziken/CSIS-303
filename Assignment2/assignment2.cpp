#include <string>
#include <list>
#include <iostream>
#include "assignment2.hpp"
using namespace std;

Single_Linked_List::Single_Linked_List(){

}

void Single_Linked_List::push_front(int value){
// Push item to front of list.
    Node* newItem = new Node(value); // Create new node.
    if (head == nullptr){
        tail = newItem; // This should only execute if the item being pushed to front is the only item in the list.
    }
    newItem->next = head; // Set the new node's next pointer to the head (which is now position 2).
    head = newItem; // Update head to front of list.
    listSize++;
    cout << "Added " << value << " to front of list.";
}

void Single_Linked_List::push_back(int value){
// Push item to back of list.
    Node* newItem = new Node(value); // Create new node.

    if (head == nullptr) { // If the list is empty, set head and tail to newItem
        head = newItem;
        tail = newItem;
    } else {
        tail->next = newItem; // Set the next pointer of the current tail to the new node.
        tail = newItem; // Set tail to the new node.
    }

    listSize++; // Increment the list size.
    cout << "Added " << value << " to back of list.";
}

void Single_Linked_List::pop_front(){
// Remove front item.
    Node* curr = head;
    curr = curr->next;
    cout << "Deleted first item " << curr->data;
    delete curr;
    listSize--;
}

void Single_Linked_List::pop_back(){
// Remove back item.
    if (head == nullptr) {
        // Can't delete nothing.
        cout << "List is empty.";
    }

    if (head->next == nullptr) {
        // Delete the final element of the list.
        delete head;
        head = nullptr;
        tail = nullptr;
        listSize--;
        cout << "Done. List is now empty.";
    }

    Node* curr = head;
    while (curr->next != tail) {
        curr = curr->next;
    }

    // Curr now points to the second-to-last node in the list
    cout << "Deleting the last item, " << tail->data;
    delete tail;
    tail = curr;
    tail->next = nullptr;
    
}

void Single_Linked_List::front(){
// Return front item(?)
    cout << "The item at the front of the list is: " << head->data;
}

void Single_Linked_List::back(){
// Return back item(?)
    cout << "The item at the end of the list is: " << tail->data;
}

void Single_Linked_List::empty(){
// Empty list.
    Node* curr = head;
    Node* next;
    while (curr != nullptr){ // Go down the list and delete nodes until the end.
        next = curr->next;
        delete curr;
        curr = next; // why doesnt this work
    }
    head = nullptr;
    tail = nullptr;
    cout << "Done. List is now empty.";
}

void Single_Linked_List::insert(size_t index, const int item){
    if (index < 0 || index > listSize) {
        // index is out of bounds
        cout << "Index is out of bounds.";
    }

    Node* curr = head;
    Node* prev = nullptr; // This is to update the previous node's next pointer to the new one.

    for (int i = 0; i < index; i++) { // Iterate through the list, with both the current and previous nodes.
        prev = curr;
        curr = curr->next;
    }

    Node* newNode = new Node(item);

    if (prev == nullptr) {
        // inserting at the beginning of the list
        newNode->next = head;
        head = newNode;
    } else {
        // inserting in the middle or at the end of the list
        prev->next = newNode;
        newNode->next = curr;
    }

    listSize++;
    cout << "Inserted item at given index.";
}

bool Single_Linked_List::remove(size_t index){
    if (head == nullptr) {
        // Can't remove nothing.
        cout << "List is empty.";
        return false;
    }

    if (index == 0) {
        // Special case just for the first index.
        Node* nodeToRemove = head;
        head = head->next;
        cout << "Deleted item " << nodeToRemove->data;
        delete nodeToRemove;
        return true;
    }

    Node* curr = head;
    Node* prev = nullptr; // Just like the above function, we need to update the previous node's pointers.
    int i = 0;

    while (curr != nullptr && i < index) { // Keep moving down the list, as long as we don't hit the end AND we don't reach the given index.
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (curr == nullptr) { // We went too far.
        // index is out of bounds
        cout << "Given index out of bounds.";
    }

    prev->next = curr->next; // Fix pointers.
    cout << "Deleting item " << curr->data << " at given index.";
    delete curr;
}

size_t Single_Linked_List::find(const int item){
    bool foundit = false;
    if (head == nullptr) {
        // Can't find nothing.
        cout << "List is empty.";
    }
    Node* curr = head;
    int iterator = 0;

    while (curr != nullptr){ // We go down the list until the end, if possible.
        if (curr->data == item){
            cout << "Found " << item << " at index " << iterator;
            foundit = true;
        }
        curr = curr->next;
        iterator++;
    }
    if (foundit == false){
        cout << "Item not found. List size is " << iterator;
    }
}