#include <iostream>

using namespace std;

struct Node {
    int info;
    node* next;
} *start, *newptr, *save, *ptr;

Node make_node ( int );
void save_node ( node* );
void display_node ( node* );

int main() {
    start = NULL;
    int abc;
    char ch='Y';
    start ();
    return 0;
}

void start () {
    while ( ( ch=='Y' || ch=='y' ) ) {
        cout<<"Enter any number: ";
        cin>>abc;
        newptr = make_node ( abc );
        save_node ( newptr );
        cout<<"Want to enter more records (Y/N): ";
        cin>>ch;
    }
}

Node * make_node ( int x ) {
    ptr = new node;
    ptr -> info = x;
    ptr -> next = NULL;
    return ptr;
}

void save_node ( int y ) {
    if ( start = NULL ) {
        start = y;
    }
    else {
        save = start;
        start = y;
        y -> next = NULL;
    }
}

void display_node ( node* z ) {
    while ( z != NULL ) {
        cout<<z->info<<endl;
        z = z -> next;
    }
}
