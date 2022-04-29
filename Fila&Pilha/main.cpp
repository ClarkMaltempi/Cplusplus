#include <iostream>
#include "Pilha.h"
#include "Fila.h"
#include "Order.h"


using namespace std;

int main()
{
     int opc, tam=0,valor;

    cout<<endl;
    cout<<endl;
    cout<<"Digite o tamanho"<<endl;
    cout<<"Digite :";
    cin>>tam;
    cout<<endl;
    Pilha<int> p(tam);
    Fila<int> f(tam);
    Order od(tam);

    //int number[tam];
    //int numberFila[tam];

    do{
        system("cls");
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"                        PROGRAMA PILHA\FILA                    "<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Pilha..."<<endl;
        cout<<endl;
        cout<<"[1] empilha"<<endl;
        cout<<"[2] desempilha"<<endl;
        cout<<"[3] exibe a pilha"<<endl;
        cout<<"[4] elemento do topo"<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Fila..."<<endl;
        cout<<endl;
        cout<<"[5] insere na Fila"<<endl;
        cout<<"[6] remove na fila"<<endl;
        cout<<"[7] primeiro na Fila"<<endl;
        cout<<"[8] exibir a fila"<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"Outros Programas..."<<endl;
        cout<<endl;
        cout<<"[9] Transforma Decimal em Binario"<<endl;
        cout<<"[10] Troca de Valores - Pilha e Fila"<<endl;
        cout<<"[11] Transferir Elementos De Fila pra Pilha"<<endl;
        cout<<"[12] Remove todos os elementos"<<endl;
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"[20] Sobre(integrantes do Grupo)"<<endl;
        cout<<"[0] Sair"<<endl;
        cout<<endl;
        cout<<"Digite :";
        cin>>opc;

    switch(opc)
    {

    case 1:

         if(p.pilhacheia()){
                cout<<"pilha cheia!!!"<<endl<<endl;
            }
            else{
                cout<<"Digite o valor para Empilhar:";
                cin>>valor;
                p.empilha(valor);
                cout<<"Sucesso!!"<<endl<<endl;
            }
            cout<<endl;
            cout<<endl;
            system("pause");
    break;

    case 2:
        if(p.pilhavazia()){
            cout<<"Pilha vazia...!!"<<endl<<endl;
        }
        else{
            cout<<"Desempilhado: "<<p.desempilha()<<endl<<endl;
        }

        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 3:
        if(p.pilhavazia()){
            cout<<"Pilha vazia...!!"<<endl<<endl;
        }
        else{
        cout<<"Elementos da pilha:  ";
        for(int i=0; i<=p.topo; i++){
            cout<<p.v[i]<<" ";
                }
                cout<<endl;
            }
        cout<<endl;
        cout<<endl;
        system("pause");
        break;

    case 4:
         if(p.pilhavazia()){
            cout<<"Pilha vazia...!!"<<endl<<endl;
        }
        else{
            cout<<"Elemento do topo: "<<p.elementodotopo()<<endl<<endl;
        }
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 5:

     if(f.filacheia()){
            cout<<"fila cheia!!!"<<endl<<endl;
        }
        else{
            cout<<"Digite o valor:";
            cin>>valor;
            f.insere(valor);
            cout<<"Sucesso!"<<endl<<endl;
        }
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 6:
     if(f.filavazia()){
            cout<<"Fila vazia...."<<endl<<endl;
        }
        else{
            cout<<"Removido:"<<f.remover()<<endl<<endl;
        }
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 7:
        if(f.filavazia()){
            cout<<"Fila vazia...."<<endl<<endl;
        }
        else{
            cout<<"Primeiro:"<<f.primeiro()<<endl<<endl;
        }
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 8:
    if(f.filavazia()){
        cout<<"Fila vazia...."<<endl<<endl;
    }
    else{
        cout<<"Elementos da Fila:  ";
        if(f.inic <= f.fim){
            for(int i=f.inic;i<=f.fim;i++){
                cout<<f.v[i]<<" ";
            }
        }
        else{
            for(int i=f.inic;i<f.tamanho;i++){
                cout<<f.v[i]<<" ";
            }
            for(int i=0;i<=f.fim;i++){
                cout<<f.v[i]<<" ";
            }
        }
        cout<<endl;
    }
        cout<<endl;
        cout<<endl;
        system("pause");
    break;

    case 9:
    system("cls");
    cout<<"Desempilhando para executar o programa!"<<endl;
    if(p.pilhavazia()){
        cout<<"Pilha vazia...!!"<<endl<<endl;
    }
    else{
        while(!p.pilhavazia()){
        cout<<"Desempilhado: "<<p.desempilha()<<endl<<endl;
        }
    }
    //system("cls");
    cout<<"Digite um numero decimal que deseja converter"<<endl;
    cout<<"Digite: ";
    cin>>valor;

    int resto, resto1;

    while(valor!=1){

        resto = valor%2;
        valor = valor/2;

        if(p.pilhacheia()){
            cout<<"Pilha cheia...!!"<<endl<<endl;
        }
       else{
            p.empilha(resto);
            cout<<"Sucesso!!"<<endl<<endl;
        }

        if(valor == 1){
            resto1 = valor%2;
            p.empilha(resto1);
        }
    }
    cout<<"Valor Convertido"<<endl;
    for(int i=p.topo; i>=0; i--){
            cout<<p.v[i]<<" ";
                }
              cout<<endl;


     cout<<endl;
     cout<<endl;
    system("pause");

    if(p.pilhavazia()){
        cout<<"Pilha vazia...!!"<<endl<<endl;
    }
    else{
        while(!p.pilhavazia()){
        p.desempilha();
        }
    }
    cout<<"Valores Desempilhados: "<<endl<<endl;
    break;
//******************************************************************
    case 10:

    system("cls");
    if(p.pilhavazia() || f.filavazia()){
        cout<<endl;
        cout<<endl;
        cout<<"Fila ou Pilha devem ter valores para trocar e Ordenar!!! "<<endl;
        system("pause");
    }else if(!p.pilhacheia() || !f.filacheia()){
        cout<<endl;
        cout<<endl;
        cout<<"Fila ou Pilha devem estar cheia, com todos os valores do tamanho escolhido!!! "<<endl;
        system("pause");
    }else{

     for (int i = 0; i < tam; ++i){
        od.number[i] = f.remover();
        od.numberFila[i] = p.desempilha();
        }
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<"Como deseja Ordenar? "<<endl<<endl;
    cout<<"[1]Crescente"<<endl;
    cout<<"[2]Decrescente"<<endl;
    cout<<endl;
    cout<<"Digite: ";
    cin>>valor;

    if(valor == 1){
        od.OrderValoresC();
        //Ordem crescente
        for (int i = 0; i < tam; ++i){
             int a = od.number[i];
              p.empilha(a);
        }

        for (int i = 0; i < tam; ++i){
             int a = od.numberFila[i];
              f.insere(a);
        }

    }else if(valor==2){

        od.OrderValoresD();
         //Ordem Decrescente
        for (int i = 0; i < tam; ++i){
             int a = od.number[i];
              p.empilha(a);

        }

        for (int i = 0; i < tam; ++i){
             int a = od.numberFila[i];
              f.insere(a);
        }
    }

     cout<<endl;
     cout<<endl;
     cout<<"Sucesso!!! Valores Ordenados! Veja o Item Exibir"<<endl;
     cout<<endl;
     system("pause");

    }

    break;

    case 11:
    system("cls");
    cout<<"Desempilhando para executar o programa..."<<endl;
    if(p.pilhavazia()){
        cout<<"Pilha vazia...!!"<<endl<<endl;
        system("pause");
    }
    else{
        while(!p.pilhavazia()){
        cout<<"Desempilhado: "<<p.desempilha()<<endl<<endl;
        }
        cout<<"Concluido"<<endl;
        system("pause");
    }

    for (int i = 0; i < tam; ++i){
        od.number[i] = f.remover();
        }

    for (int i = 0; i < tam; ++i){

            if(od.number[i] != 0){
                int a = od.number[i];
                p.empilha(a);
            }

        }

     cout<<endl;
     cout<<endl;
     cout<<"Sucesso!!! Valores Transferidos!!!"<<endl;
     cout<<"Consulte a opcao [3] exibe a pilha "<<endl;
     cout<<endl;
     system("pause");
    break;

    case 12:

    for (int i = 0; i < tam; ++i){
        od.number[i] = f.remover();
        }

    for (int i = 0; i < tam; ++i){
             int a = od.number[i];
             int par = od.number[i]%2;

             if(par == 0){
              p.empilha(a);
             }
        }

    cout<<"Sucesso!!! Valores Transferidos!!!"<<endl;
    cout<<"Consulte a opcao [3] exibe a pilha "<<endl;
    cout<<endl;
    system("pause");
    break;

    case 20:
        system("cls");
        cout<<endl;
        cout<<"Estrutura de Dados Ministrado por: Jorge Luiz Chiara"<<endl;
        cout<<endl;
        cout<<"Clark Maltempi"<<endl;
        cout<<"Aparecida Oliveira dos Santos"<<endl;
        cout<<"Lucas Farias Aguiar"<<endl;
        cout<<"Luis Felipe Ribeiro de Souza"<<endl;
        cout<<endl;
        cout<<endl;
        system("pause");
    break;


    case 0:
        cout<<"Voce optou por sair!!!"<<endl;
    break;

    default:
        cout<<"Valor Invalido"<<endl;
    break;

    }

    }while(opc != 0);


    return 0;
}
