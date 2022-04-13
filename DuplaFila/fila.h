#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include <deque>

using namespace std;
struct fila{

deque<int>dq1;
deque<int>::iterator it;
deque<int>::iterator it2;

void Ini(int tam){

     it=dq1.begin();
    for(int i=0;i<=tam;i++){
        dq1.push_back(0);
    }
}

void InsereIni(int tam, int valor){
     it=dq1.begin()+tam/2;
     dq1.push_front(valor);
     dq1.erase(it);
}

void InsereFim(int tam, int valor){
     it=dq1.begin()+tam/2;
     dq1.push_back(valor);
     dq1.erase(it);
}

void RemoveIni(){
    it=dq1.begin();
    dq1.erase(it);
    dq1.push_front(0);
}

void RemoveFim(){
    it=dq1.end();
    dq1.erase(it);
    dq1.push_back(0);
}

int PriElement(){
    it=dq1.begin();
    return *it;
}

int UltElement(int tam){
    it=dq1.begin()+tam;
    return *it;
}


};



#endif // FILA_H_INCLUDED
