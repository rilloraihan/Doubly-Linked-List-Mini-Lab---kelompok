#include <iostream>
#include <string>
using namespace std;

typedef string infotype;
typedef struct elmList *address;

struct elmList
{
    infotype data;
    address prev;
    address next;
};

struct List
{
    address first;
    address last;
};

// ===== Task 1 dan 2 : Rillo =====
void createList(List &L)
{
    L.first = nullptr;
    L.last = nullptr;
}
address createElm(infotype x)
{
    address p = new elmList;
    p->data = x;
    p->prev = nullptr;
    p->next = nullptr;
    return p;
}
void insertLast(List &L, address P)
{
    if (L.first == nullptr)
    {
        L.first = P;
        L.last = P;
    }
    else
    {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}
void displayList(List L)
{
    address P = L.first;
    while (P != nullptr)
    {
        cout << P->data;
        if (P->next != nullptr)
            cout << " <-> ";
        P = P->next;
    }
    cout << endl;
}

// ===== Task 3 dan 4 : Al Fathir  =====
void traverseForward(List L)
{
    address P = L.first;
    if (P == nullptr)
    {
        cout << "List kosong" << endl;
        return;
    }

    cout << "Forward:" << endl;
    while (P != nullptr)
    {
        cout << P->data << endl;
        P = P->next;
    }
}

void traverseBackward(List L)
{
    address P = L.last;
    if (P == nullptr)
    {
        cout << "List kosong" << endl;
        return;
    }

    cout << "Backward:" << endl;
    while (P != nullptr)
    {
        cout << P->data << endl;
        P = P->prev;
    }
}

// ===== Task 5 : Iman Abdi Ilahi =====
bool insertAfter(List &L, infotype prec, address P) {
    address Q = L.first;
    while (Q != nullptr && Q->data != prec) {
        Q = Q->next;
    }
    
    if (Q == nullptr) {
        return false; 
    }
    
    if (Q == L.last) {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    } 

    else {
        P->next = Q->next;
        P->prev = Q;
        Q->next->prev = P;
        Q->next = P;
    }
    return true;
}   
bool deleteElm(List &L, infotype x) {
    address P = L.first;
    while (P != nullptr && P->data != x) {
        P = P->next;
    }
    
    if (P == nullptr) {
        return false;
    }
    
    if (P == L.first && P == L.last) {
        L.first = nullptr;
        L.last = nullptr;
    }

    else if (P == L.first) {
        L.first = P->next;
        L.first->prev = nullptr;
    }

    else if (P == L.last) {
        L.last = P->prev;
        L.last->next = nullptr;
    }

    else {
        P->prev->next = P->next;
        P->next->prev = P->prev;
    }
    
    delete P;
    return true;
}

int main()
{   
    List L;
    createList(L);
    insertLast(L, createElm("Song A"));
    insertLast(L, createElm("Song B"));
    insertLast(L, createElm("Song C"));
    insertLast(L, createElm("Song D"));
    insertLast(L, createElm("Song E"));

    displayList(L);
    traverseForward(L);
    traverseBackward(L);

    insertAfter(L, "Song B", createElm("Song X"));
    displayList(L);
    traverseBackward(L);

    deleteElm(L, "Song C");
    displayList(L);
    traverseBackward(L);


    deleteElm(L, "Song A");   
    deleteElm(L, "Song E");   
    deleteElm(L, "Song Z");   
    displayList(L);
    traverseBackward(L);
    return 0;
}