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
bool insertAfter(List &L, infotype prec, address P) { return false; }
bool deleteElm(List &L, infotype x) { return false; }

int main()
{
    return 0;
}