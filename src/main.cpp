#include <iostream>
#include <string>
using namespace std;

typedef string infotype;
typedef struct elmList* address;

struct elmList {
    infotype data;
    address prev;
    address next;
};

struct List {
    address first;
    address last;
};

// ===== Task 1 dan 2 : Rillo =====
void createList(List &L) {
    L.first = nullptr;
    L.last = nullptr;
}
address createElm(infotype x){
    address p = new elmList;
    p->data = x;
    p->prev = nullptr;
    p->next = nullptr;
    return p; 
}
void insertLast(List &L, address P) {}
void displayList(List L) {}

// ===== Task 3 dan 4 : Al Fathir  =====
void traverseForward(List L) {}
void traverseBackward(List L) {}

// ===== Task 5 : Iman Abdi Ilahi =====
bool insertAfter(List &L, infotype prec, address P) { return false; }
bool deleteElm(List &L, infotype x) { return false; }

int main() {
    return 0;
}