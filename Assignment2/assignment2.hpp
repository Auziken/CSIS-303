#include <string>
#include "node.hpp"
using namespace std;

class Single_Linked_List{
    public:
    void push_front(int value);
    void push_back(int value);
    void pop_front();
    void pop_back();
    void front();
    void back();
    void empty();

    void insert(size_t index, const int item);
    // Insert item at position index (starting at 0). Insert at the end if index is beyond the end of the list.
    
    bool remove(size_t index);
    // Remove the item at position index. Return true if successful; return false if index is beyond the end of the list.

    size_t find(const int item);
    // Return the position of the first occurrence of item if it is found. Return the size of the list if it is not found. 

    Single_Linked_List(); // Constructor

    private:
    int listSize = 0;
    Node* head = nullptr;
    Node* tail = nullptr;
};