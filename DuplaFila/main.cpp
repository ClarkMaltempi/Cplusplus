#include <iostream>
#include <deque>
#include "fila.h"

using namespace std;


int main()
{
    fila f;
    int opc, tam=0,valor;

    cout<<endl;
    cout<<endl;
    cout<<"Digite o tamanho da Fila Dupla"<<endl;
    cout<<"Digite :";
    cin>>tam;
    cout<<endl;

    f.Ini(tam);

    do{
        system("cls");
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"                         FILA DUPLA                             "<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"[1] Insere no Inicio"<<endl;
        cout<<"[2] Insere no Final"<<endl;
        cout<<"[3] Exibir Fila"<<endl;
        cout<<"[4] Remove Inicio da Fila"<<endl;
        cout<<"[5] Remove Final da Fila"<<endl;
        cout<<"[6] Primeiro Elemento"<<endl;
        cout<<"[7] Ultimo Elemento"<<endl;
        cout<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"[8] Sobre(integrantes do Grupo)"<<endl;
        cout<<"[9] Sair"<<endl;
        cout<<endl;
        cout<<"Digite :";
        cin>>opc;

    switch(opc)
    {


    case 1:

        cout<<"Digite um valor para Inserir no Inicio da Fila"<<endl;
        cout<<"Digite :";
        cin>>valor;
        f.InsereIni(tam,valor);
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 2:
        cout<<"Digite um valor para Inserir no Final da fila"<<endl;
        cout<<"Digite :";
        cin>>valor;
        f.InsereFim(tam,valor);
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 3:

        for(f.it2=f.dq1.begin();f.it2!=f.dq1.end();f.it2++){
            cout << *f.it2 << "   ";
        }
        cout<<endl;
        cout<<endl;
        system("pause");
        break;

    case 4:
        f.RemoveIni();
        cout<<"Valor removido no inicio!"<<endl;
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 5:
        f.RemoveFim();
        cout<<"Valor removido no final!"<<endl;
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 6:
        cout<<f.PriElement()<<endl;
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 7:
        cout<<f.UltElement(tam)<<endl;
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 8:
        system("cls");
        cout<<endl;
        cout<<"Estrutura de Dados Ministrado por: Jorge Luiz Chiara"<<endl;
        cout<<endl;
        cout<<"Clark Maltempi"<<endl;
        cout<<"Aparecida Oliveira dos Santos"<<endl;
        cout<<"Lucas Farias Aguiar"<<endl;
        cout<<"Luis Felipe Ribeiro de Souza"<<endl;
        cout<<"Ana Carolina da Silva Souza"<<endl;
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 9:
        cout<<"Voce optou por sair!!!"<<endl;
    break;

    default:
        cout<<"Valor Invalido"<<endl;
    break;

    }

    }while(opc != 9);





    return 0;
}



