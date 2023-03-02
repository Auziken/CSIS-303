#include <string>
#include <list>
#include "assignment2.hpp"
using namespace std;

Single_Linked_List::Single_Linked_List(){

}

void Single_Linked_List::push_front(){
// Push item to front of list.
}

void Single_Linked_List::push_back(){
// Push item to back of list.
}

void Single_Linked_List::pop_front(){
// Remove front item.
    Node* oldTop = head;
    head = head->next;
    delete oldTop;
    listCount--;
}

void Single_Linked_List::pop_back(){
// Remove back item.
    Node* oldBack = tail;
    tail - tail->next;
    delete oldBack;
    listCount--;
}

void Single_Linked_List::front(){
// Return front item(?)
}

void Single_Linked_List::back(){
// Return back item(?)
}

void Single_Linked_List::empty(){
// Empty list.
}
void Single_Linked_List::insert(size_t index, const Item_Type& item){

}

bool Single_Linked_List::remove(size_t index){

}

size_t Single_Linked_List::find(const Item_Type& item){

}