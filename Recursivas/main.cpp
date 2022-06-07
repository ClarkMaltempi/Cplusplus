#include <iostream>
#include "Rec.h"
#include <vector>
#include <math.h>

using namespace std;


int main()
{

    vector<int> digito = {1,10,100,1000,10000,100000,1000000};
    int opc, valor=0, Segvalor=0, i=0, fatorial, var, tamanho;
    float val;



    cout<<endl;
    cout << "Funções Recursivas" << endl;
    cout<<endl;
    cout<<endl;

    Recursiva rec;

    do{
        system("cls");
        cout << "[1] Fatorial" << endl;
        cout << "[2] Fibonacci" << endl;
        cout << "[3] MDC" << endl;
        cout << "[4] Somatorio" << endl;
        cout << "[5] Somatorio II" << endl;
        cout << "[6] Potencia" << endl;
        cout << "[7] Absoluto" << endl;
        cout << "[8] Sobre" <<endl;
        cout << "[0] Sair" << endl;
        cout<<endl;
        cin>>opc;

        switch(opc){

        case 1:
            valor=5;
            i=valor;
            cout<<"Valor Fatorial: "<<rec.fr(valor)<<endl;
            cout<<endl;


            while(i != 0){

                cout<<"fatorial:"<<"("<<i<<") = "<<i<<"*Fatorial"<<"("<<i-1<<") "<<"Resultado: "<<rec.fr(i)<<endl;
                fatorial *=i;

                if(i==1){
                    cout<<"fatorial:"<<"(0)  "<<"               Resultado: "<<1<<endl;
                }

                i--;
            }

            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 2:
            valor=6;
            i=valor;
            cout<<rec.fb(valor);
            cout<<endl;

            while(i != 0){

                cout<<"fib:"<<"("<<i<<") = fib("<<i-1<<")"<<"+("<<i-2<<") "<<"Resultado: "<<rec.fb(i)<<endl;

                if(i==3){
                    cout<<"fib"<<"(2)  "<<"               Resultado: "<<1<<endl;
                    cout<<"fib"<<"(1)  "<<"               Resultado: "<<1<<endl;
                    break;
                }

                i--;
            }

            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 3:
            valor=76;
            Segvalor=12;
            i=valor;
            cout<<rec.mdc(valor, Segvalor);
            cout<<endl;

            do{

            if(valor > Segvalor){
                cout<<"mdc:"<<"("<<valor<<","<<Segvalor<<") ="<<"mdc ("<<valor<<"-"<<Segvalor<<","<<Segvalor<<") "<<"Resultado: "<<rec.mdc(valor, Segvalor)<<endl;
                valor =valor-Segvalor;
                var = rec.mdc(valor, Segvalor);

            }

            if(valor < Segvalor){

                    cout<<"mdc:"<<"("<<Segvalor<<","<<valor<<") ="<<"mdc ("<<Segvalor<<","<<valor<<") "<<"Resultado: "<<rec.mdc(valor, Segvalor)<<endl;
                    Segvalor = Segvalor-valor;
                }
            if(valor == Segvalor){
                    cout<<"mdc:"<<"("<<Segvalor<<","<<valor<<") ="<<"X = "<<rec.mdc(valor, Segvalor)<<" Resultado: "<<rec.mdc(valor, Segvalor)<<endl;
            }

            }while(Segvalor!=valor);


            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 4:
            val=10;
            Segvalor=15;
            i=Segvalor;
            var= Segvalor;
            cout<<rec.somatoria(val,Segvalor);
            cout<<endl;
            cout<<"soma:"<<"("<<val<<","<<i<<") ="<<"Soma ("<<val<<","<<i-1<<") + "<<i<<" Resultado: "<<i<<endl;

            i--;
            while(i != val){

                var+=i;
                cout<<"soma:"<<"("<<val<<","<<i<<") ="<<"Soma ("<<val<<","<<i-1<<") + "<<i<<" Resultado: "<<var<<endl;

                if(i==val+1){
                    cout<<"soma ("<<val<<","<<val<<") = m ="<<val<<"            Resultado: "<<rec.somatoria(val,Segvalor)<<endl;

                    break;
                }

                i--;
            }


            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 5:
            val=10;
            Segvalor=15;
            i=val;
            var= val;
            cout<<rec.somatoriaD(val,Segvalor);
            cout<<endl;
            cout<<"soma:"<<"("<<i<<","<<Segvalor<<") ="<<"Soma ("<<i<<","<<Segvalor<<") + "<<i<<" Resultado: "<<i<<endl;

            i++;
            while(i != Segvalor){

                var+=i;
                cout<<"soma:"<<"("<<i<<","<<Segvalor<<") ="<<"Soma ("<<i+1<<","<<Segvalor<<") + "<<i<<" Resultado: "<<var<<endl;

                if(i==Segvalor-1){
                    cout<<"soma ("<<i<<","<<Segvalor<<") = m ="<<Segvalor<<"            Resultado: "<<rec.somatoriaD(val,Segvalor)<<endl;

                    break;
                }

                i++;
            }


            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 6:
            val=3;
            Segvalor=4;
            i=0;
            var=Segvalor+2;
            cout<<"Valor: "<<rec.pot(val, Segvalor)<<endl;
            cout<<endl;


             while(var != 0){

                cout<<"pot:"<<"("<<val<<","<<Segvalor-i<<") = "<<val<<"*pot ("<<val<<","<<Segvalor-i+1<<") + "<<i<<" Resultado: "<<pow(val,Segvalor-i)<<endl;

                var--;
                i++;
            }


            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 7:
            //valor = 53223;
            valor = 100011;
            cout<<"Valor: "<<rec.Dig(valor)<<endl;
            tamanho = rec.Dig(valor);
            var=valor;

            do{

                cout<<"Dig:"<<"("<<var/(1*digito[i])<<") ="<<"1 + Dig ("<<var/(1*digito[i+1])<<")"<<"           Resultado: "<<i+1<<endl;

                if(var/(1*digito[i+1]) == 1){
                        i++;
                    cout<<"Dig:"<<"("<<var/(1*digito[i])<<") = "<<1<<"                      Resultado: "<<i+1<<endl;
                    break;
                }

                i++;
            }while(i != tamanho);


            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 8:
            cout<<"Autor: Clark Maltempi"<<endl;
            cout<<"Materia: Estrutura de Dados"<<endl;

            cout<<"Esse programa visa demonstrar o funcionamento das funcoes Recursivas"<<endl;

        break;

        default:
            cout<<"Opcao Invalida"<<endl;
        break;

        case 0:
            cout<<"Voce optou por Sair!!"<<endl;
        break;


        }



    }while(opc != 0);












    return 0;
}
