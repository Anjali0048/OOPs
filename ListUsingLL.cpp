#include<iostream>
#include<new>
using namespace std;

struct nod {
    int info;
    struct nod* next;
};

typedef struct nod node;

class list {
    node* f;
public:
    list() {
        f = NULL; // Initialize the first node pointer to NULL
    }

    void ins(int num) {
        node* p = new node; // Create a new node
        p->info = num; // Set the info field of the node to the input number
        p->next = f; // Make the new node point to the previous first node
        f = p; // Update the first node pointer to the new node
    }

    void del() {
        node* temp = f; // Store the first node in a temporary pointer

        if (f == NULL) {
            cout << "\nNo elements to delete.\n";
        }
        else {
            cout << "\nThe deleted element is:\n" << f->info;
            f = f->next; // Move the first node pointer to the next node
            delete temp; // Delete the previous first node
            cout << "\nDeletion successful.\n";
        }
        return;
    }

    void disp() {
        node* temp = f; // Start traversing from the first node

        if (f == NULL) {
            cout << "\nList is empty.\n";
        }
        else {
            cout << "\nElements in the list are: ";
            while (temp != NULL) {
                cout << " " << temp->info; // Display the info field of the current node
                temp = temp->next; // Move to the next node
            }
        }
    }
};

int main() {
    int num, ch = 1;
    list ob;

    cout << "\n!!!!!!!!!!! LINEAR LINK LIST !!!!!!!!!!!!!!!!\n";
    cout << "\n1] Insert\n2] Delete\n3] Exit";

    while (ch) {
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "\nEnter the number to be inserted: ";
            cin >> num;
            ob.ins(num);
            ob.disp();
            break;
        case 2:
            ob.del();
            ob.disp();
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice.\n";
            break;
        }
    }
}
