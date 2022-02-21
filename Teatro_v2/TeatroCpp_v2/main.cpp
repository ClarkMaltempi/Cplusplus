#include <iostream>
#include "estTeatro.h"
#include <locale.h>
#define Pt setlocale(LC_ALL, "Portuguese");


using namespace std;

int main()
{
    //funções de inicialização
    Pt;
    Teatro_ t;
    system("color F1");
    t.Inilist();
    t.cabecalho();
    t.imprime();

    int opc=-1;



    do
    {
        t.menu();
        cout<<"Digite: ";
        cin>>opc;
    if(opc != 0)
        {
           switch(opc)
           {

               case 1:
                    system("cls");
                    t.cabecalho();
                    t.imprime();
               break;

               case 2:
                    system("cls");
                    t.imprime();
                    t.comprar();
               break;

              case 3:
                    system("cls");
                    t.imprime();
                    t.devolver();
               break;

               case 4:
                    system("cls");
                    t.imprime();
                    t.trocar();
               break;

                default:
                    cout<<"Valor Inválido! Digite novamente";
                    cout<<"\n";
                break;

           }

        }else{
            cout<<"\n";
            cout<<"Você optou por Sair"<<endl;
            cout<<"BYE!!!";
            cout<<"\n";
        }
   }while(opc != 0);


    return 0;
}
