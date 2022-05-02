#include <iostream>
#include "expres.h"
#include <locale.h>
#include <cstring>
#define pt_br setlocale(LC_ALL, "Portuguese");



using namespace std;

int main()
{
    inicializar:
    pt_br;

    int opc=0;

    string expres=" ";
    int item, tio=0, ast=0, traco=0, i=0,op=0;
    bool check;
    char exp=' ';
    int tamanho;

 //Verifica a expressão por caracter e posiciona *****************************
    int a;
    int b;
    int c;


     system("cls");
     cout<<"DIGITE UMA EXPRESSÃO MATEMÁTICA:"<<endl;
     cout<<"Digite: ";

    //Transforma String em Char
     //getline(cin, expres); //pega todos os caracteres digitados incluíndo espaço
     cin>>expres;
     string s=expres;

        tamanho = s.length();

        Ex p(tamanho);

        strcpy(p.char_array, s.c_str());
        //Chamar Pilha de Caracter para Empilhar Expressão*************************
        PilhaCar car(tamanho);

        cout<<endl;
        cout<<endl;
        cout<<"Desempilhando..."<<endl;
        while(!car.pilhavazia()){
            car.desempilha();
        }

     cout<<"Expressão Armazenada..."<<endl;
     cout<<endl;
     cout<<endl;
     system("pause");

    do{
        system("cls");
        cout<<endl;
        cout<<"Escolha uma opção"<<endl;
        cout<<"[1] Análise de Expressão"<<endl;
        cout<<"[2] Digitar Outra Expressão"<<endl;
        cout<<"[20] SAIR"<<endl;
        cout<<"Digite: ";
        cin>>opc;
        cout<<endl;
        cout<<endl;

        switch(opc){

        case 1:


        for (int i = 0; i <= tamanho; i++){
            char caracter  = p.char_array[i];
            p.Inilist(tamanho, caracter);
            p.char_array[i] = ' ';
        }

         //Verificar os valores digitados***************************
         check = p.Expressao(tamanho);
        if(check == true){
            //Verifica os operadores
            check = p.VerificaCar(tamanho);
        }

         //Contabiliza a quantidade de Parenteses, Colchetes e Chaves************
        while(i<=tamanho){

            if(p.vetSymb[i]=='#'){
                tio++;
            }

            if(p.vetSymb[i]=='$'){
                ast++;
            }

            if(p.vetSymb[i]=='&'){
               traco++;
            }

            i++;
        }

            a = tio/2;
            b = ast/2;
            c = traco/2;

        //Empilha caracter

            in:
            if(a > 0){
                car.empilha('[');
                a--;
                if(a >0){
                    goto in;
                }
                }

            ini:
            if(b > 0){
                car.empilha('{');
                b--;
                if(b >0){
                    goto ini;
                }
                }

            on:
            if(c > 0){
                car.empilha('(');
                c--;
                if(c >0){
                    goto on;
                }
            }

                    a = tio/2;
                    b = ast/2;
                    c = traco/2;

         for(int i=0;i<=tamanho;i++)
         {
            if(p.vetSymb[i] >= '0' || p.vetSymb[i] == '+' || p.vetSymb[i] == '-' || p.vetSymb[i] == '*' || p.vetSymb[i] == '/'){

                    exp = p.vetSymb[i];
                    car.empilha(exp);
            }
        }

        cl:
        if(c > 0){
            car.empilha(')');
            c--;
            if(c >0){
                goto cl;
            }
        }

        clos:
        if(b > 0){
            car.empilha('}');
            b--;
            if(b >0){
                goto clos;
            }
            }

        close:
        if(a > 0){
            car.empilha(']');
            a--;
            if(a >0){
                goto close;
            }
            }

        system("cls");
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
        cout<<"processando expressão..."<<endl;
        cout<<endl;
        cout<<endl;
        for(int i=0;i<=tamanho;i++){
            cout<<car.v[i];
        }

        cout<<endl;
        if(check == true)
        {
            cout<<"EXPRESSÃO ESTÁ CORRETA!"<<endl;
            cout<<"\n";
            cout<<"\n";
            system("pause");
        }else
         {
            cout<<"EXPRESSÃO ESTÁ INCORRETA!"<<endl;
            cout<<"\n";
            cout<<"\n";
            system("pause");
         }

        break;

        case 2:
        goto inicializar;
        break;

        case 20:

        cout<<"Você optou por Sair"<<endl;
        cout<<"\n";
        cout<<"\n";
        system("pause");
        break;

        default:

        cout<<"Opção Inválida!!!"<<endl;
        cout<<"\n";
        cout<<"\n";
        system("pause");
        break;

        }





    }while(opc != 20);








    return 0;
}
