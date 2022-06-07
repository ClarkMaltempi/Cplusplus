#include <iostream>
#include "pilha_ligada.h"

using namespace std;
int main()
{
    cout<<"ola mundo Pilha Ligada"<<endl;
    Pilha<int> p;
    int opc,x;
    do{
        cout<<"1-empilha"<<endl;
        cout<<"2-desempilha"<<endl;
        cout<<"3-elemento do topo"<<endl;
        cout<<"4-exibe a pilha"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            cout<<"Digite o valor:";
            cin>>x;
            if (p.empilha(x)){
                cout<<"Empilhado com sucesso!"<<endl<<endl;
            }
            else{
                cout<<"Pilha cheia!!!"<<endl;
            }
            break;
        case 2:
            if(p.pilhavazia()){
                cout<<"Pilha vazia...!!"<<endl<<endl;
            }
            else{
                cout<<"Desempilhado: "<<p.desempilha()<<endl<<endl;
            }
            break;
        case 3:
            if(p.pilhavazia()){
                cout<<"Pilha vazia...!!"<<endl<<endl;
            }
            else{
                cout<<"Elemento do topo: "<<p.elementodotopo()<<endl<<endl;
            }
            break;
        case 4:
            if(p.pilhavazia()){
                cout<<"Pilha vazia...!!"<<endl<<endl;
            }
            else{
                cout<<"Elementos da pilha: ";
                Node<int> *aux = p.topo;
                while (aux != NULL){
                    cout<<aux->info<<"  ";
                    aux = aux->prox;
                }
                cout<<endl<<endl;
            }
            break;
        case 9:
            cout<<"Fim..."<<endl<<endl;
            break;
        default:
            cout<<"Opcao invalida!!!"<<endl<<endl;
            break;
        }

    }while(opc != 9);

}
