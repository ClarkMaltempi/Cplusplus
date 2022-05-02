#include <iostream>
#include "listalinear.h"
using namespace std;

int main()
{

    cout << "Lista Linear Aloc. Sequencial" << endl;
    int tamanho;
    cout<<"Digite o tamanho da lista:";
    cin>>tamanho;
    Lista<int> minhalista(tamanho);

    int opc;
    int x;
    do{
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-exibir"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            if(minhalista.listacheia())
                cout<<"Lista Cheia..."<<endl<<endl;
            else{
                cout<<"Digite o valor:";
                cin>>x;
                minhalista.insere(x);
                cout<<"Sucesso"<<endl;
            }
            break;
        case 2:
            if (minhalista.listavazia())
                cout<<"Lista Vazia"<<endl<<endl;
            else{
                minhalista.remover();
                cout<<"remocao realiazada com sucesso"<<endl;
            }
            break;
        case 3:
            if(minhalista.listavazia())
                cout<<"Lista vazia!!"<<endl;
            else{
                for(int i=0; i<=minhalista.posicao;i++){
                    cout<<minhalista.getValor(i)<<" ";
                    //cout<<minhalista.lista[i]<<"  ";
                }
                cout<<endl;
            }
            break;
        case 9:
            cout<<"fim...."<<endl;
            break;
        default:
            cout<<"opcao invalida"<<endl;
            break;
        }
    }while(opc != 9);



    return 0;
}
