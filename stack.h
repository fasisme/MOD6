#ifndef SQ_H_INCLUDED
#define SQ_H_INCLUDED
#include <iostream>
#define top(S)  S.top
#define next(p)  p->next
#define info(p)  p->info
using namespace std;

typedef int infotype;

typedef struct elmStack *address;
struct elmStack {
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    infotype info;
    address next;
};
struct Stack {
    address top;
};

bool isEmpty(Stack S);
void create_stack(Stack &S);
void createNewElmt(infotype x, address &P);
void push(Stack &S, address P);
void pop(Stack &S, address &P);
void printInfo(Stack S);



#endif // SQ_H_INCLUDED
