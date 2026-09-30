#include <isotream>
using namespace std;

struct node {
    int val;
    node *next;
};
struct SinglyLinkedList {
    node *head, *tail;

    SinglyLinkList() {
        head = NULL;
        tail = NULL;
        cout << "Singly Linked List initialized!\n";
    }
};

int main () {
    SinglyLinkedList s1;

    return 0;
}
