#include <string>
using namespace std;

class Single_Linked_List{
    void push_front();
    void push_back();
    void pop_front();
    void pop_back();
    void front();
    void back();
    void empty();

    void insert(size_t index, const Item_Type& item);
    // Insert item at position index (starting at 0). Insert at the end if index is beyond the end of the list.
    
    bool remove(size_t index);
    // Remove the item at position index. Return true if successful; return false if index is beyond the end of the list.

    size_t find(const Item_Type& item);
    // Return the position of the first occurrence of item if it is found. Return the size of the list if it is not found. 

    Single_Linked_List(); // Constructor

    private:
    int listCount;
    Node* head = NULL;
    Node* tail = NULL;
};

class Node{
    public:
    int data, numitems;
    Node* next;
};