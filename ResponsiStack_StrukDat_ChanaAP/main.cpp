/*
Nama : Chana Amelinda Putri
NIM : A11.2021.13296
Kel : 4317
*/

#include <iostream>
#define MAX_STACK 30

using namespace std;

char oldstack[MAX_STACK]{'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','*','A','*','B','*','A','R'};
char newstack[MAX_STACK]{};
char pesan;
int top = -1;

bool isFull(){
    if(top >= MAX_STACK){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

void push(){
    if(!isFull()){
        top++;
        newstack[top] = pesan;
    }
}

void proses(){
    for(int i=0; i<MAX_STACK; i++){
        if(oldstack[i] == '*'){
        }else{
            pesan = oldstack[i];
            push();
        }
    }
}

int main()
{
    for(int j=0; j<MAX_STACK; j++){
        cout << oldstack[j];
    }
    cout << endl;

    proses();
    for(int k=0; k<MAX_STACK; k++){
        cout << newstack[k];
    }
    cout << endl;

    return 0;
}
