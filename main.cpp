#include <iostream>
#include "stack.h"
#include "stack.cpp"

using namespace std;

void mainMenu(Stack S){
/*
Name : DAFFA SYIFA PRATAMA
NIM : 1301180235
*/
    address P;
    infotype x;
    int menu;
    do {
        cout << "1. INPUT DATA "<<endl;
        cout << "2. CEK STACK "<<endl;
        cout << "3. HAPUS DATA "<<endl;
        cout << "4. PRINT DATA "<<endl;
        cout << "0. exit"<<endl;
        cout << "pilih: ";
        cin >> menu;
        switch (menu){
        case 1:
            cout << "Masukkan data: ";
            cin >> x;
            createNewElmt(x,P);
            push(S,P);
            break;
        case 2:
            if (isEmpty(S)){
                cout << "stack kosong"<<endl;
            }else {
                cout << "stack tidak kosong"<<endl;
            }
            break;
        case 3:
            pop(S,P);
            break;
        case 4:
            printInfo(S);
            break;
        case 0:break;
        default:break;
        }
    } while (menu != 0);
}

int main()
{
    Stack S;
    createStack(S);
    mainMenu(S);

    return 0;
}
