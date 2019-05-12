#include "stack.h"

bool isEmpty(Stack S){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    if (top(S) == NULL){
        return true;
    } else {
        return false;
    }
}
void createStack(Stack &S){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    top(S) = NULL;
}
void createNewElmt(infotype x, address &P){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    P = new elmStack;
    info(P) = x;
    next(P) = NULL;
}
void push(Stack &S, address P){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    if(isEmpty(S)){
        top(S) = P;
    } else {
        next(P) = top(S);
        top(S) = P;
    }
}
void pop(Stack &S, address &P){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    if (isEmpty(S)){
        cout<< "stack kosong" <<endl;
    } else {
        P = top(S);
        top(S) = next(P);
        next(P) = NULL;
    }
}
void printInfo(Stack S){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    if (isEmpty(S) != true){
        address P = top(S);
        while(P != NULL){
            cout << info(P) << " ";
            P = next(P);
        }
    } else {
        cout << "stack kosong"<<endl;
    }
    cout<<endl;

}
