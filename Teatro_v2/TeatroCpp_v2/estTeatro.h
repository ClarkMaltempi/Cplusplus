#ifndef ESTTEATRO_H_INCLUDED
#define ESTTEATRO_H_INCLUDED
#include <vector>


using namespace std;
struct Teatro_{


    vector<string> teatro;
    vector<string>::iterator it;
    int tam =101;
    int ingVendidos=0;

    //Inicialização dos valores
    //**********************************************************************************
    void Inilist(){
        for(int i=0; i<tam; i++){
            teatro.push_back("<  >");
        }

        it = teatro.begin();
        teatro.insert(it,"< X >");
	}

    //Visualização do Teatro
    //**********************************************************************************
    void imprime()
    {
        int i=1;
        cout<<"\n";
        cout<<"\n";

        do
        {

          cout<<"  "<<teatro[i];
          cout<<" ";

          if(i<10){
            cout<<"0"<<i;
          }else{
            cout<<i;
          }

          if(i == 10 || i == 20 || i == 30 || i== 40 || i==50){
            cout<<"\n";
          }

          if(i == 60 || i == 70 || i == 80 || i== 90 || i==100){
            cout<<"\n";
          }
            i++;

        }while(i != tam);

    }


    //Cabeçalho
    //**********************************************************************************
    void cabecalho()
    {

        cout<<"\n";
        cout<<" ------------------------------------------------------------------------------------------ "<<endl;
        cout<<"                                           TEATRO                                         "<<endl;
        cout<<" ------------------------------------------------------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"STATUS INGRESSOS VENDIDOS: ["<<ingVendidos<<"]"<<endl;

    }

    //Menu de Opções
    //**********************************************************************************
    void menu()
    {
        cout<<"\n";
        cout<<" ------------------------------------------------------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"[1] BILHETERIA [INICIO]"<<endl;
        cout<<"[2] COMPRAR INGRESSO"<<endl;
        cout<<"[3] DEVOLVER INGRESSO"<<endl;
        cout<<"[4] TROCAR INGRESSO"<<endl;
        cout<<"[0] SAIR"<<endl;
        cout<<"\n";


    }

    //Comprar Ingressos
    //**********************************************************************************
    void comprar()
    {
        int op, cont=0;

        if(ingVendidos <tam-1)
       {

                inicio:
                cout<<"\n";
                cout<<"\n";
                cout<<"Digite a Poltrona"<<endl;
                cout<<"Digite: ";
                cin>>op;

                for(int i=0; i<tam; i++)
                {
                    if(teatro[op] == "< X >")
                    {
                        cout<<"\n";
                        cout<<"Não é possível comprar uma poltrona ocupada"<<endl;
                        cout<<"Escolha uma poltrona livre!!!"<<endl;
                        goto inicio;
                    }else{
                        break;
                    }
                }

                for(int i=0; i<tam; i++){
                    teatro[op] = "< X >";
                    contador();
                    break;
                }

       }else{

            cout<<"\n";
            cout<<"\n";
            cout<<" "<<"Lugares esgotados!!!"<<endl;
        }

    }

    //Devolver Ingressos
    //**********************************************************************************
    void devolver()
    {
        int op;

       if(ingVendidos > 0 && ingVendidos <tam)
       {
            inicio:
            cout<<"\n";
            cout<<"\n";
            cout<<"Digite a Poltrona Devolver"<<endl;
            cout<<"Digite: ";
            cin>>op;

            for(int i=0; i<tam; i++)
            {
                if(teatro[op] == "<  >")
                {
                    cout<<"\n";
                    cout<<"Não é possível devolver uma poltrona vazia"<<endl;
                    cout<<"Escolha uma poltrona ocupada!!!"<<endl;
                    goto inicio;
                }else{
                    break;
                }
            }

            for(int i=0; i<tam; i++){
                teatro[op] = "<  >";
                devolverIng();
                break;
            }

       }else{

            cout<<"\n";
            cout<<"Não é possível devolver, Nenhum Ingresso foi Vendido!"<<endl;
        }
    }

    //Trocar ingressos
    //**********************************************************************************
    void trocar()
    {
        int op;

        if(ingVendidos > 0 && ingVendidos <tam)
        {
            inicio :
            cout<<"\n";
            cout<<"\n";
            cout<<"Digite a Poltrona que deseja trocar"<<endl;
            cout<<"Digite: ";
            cin>>op;

            for(int i=0; i<tam; i++)
            {
                if(teatro[op] == "<  >")
                {
                    cout<<"\n";
                    cout<<"Não é possível trocar uma poltrona vazia"<<endl;
                    cout<<"Escolha uma poltrona ocupada!!!"<<endl;
                    goto inicio;
                }else{
                    break;
                }

            }


            for(int i=0; i<tam; i++){
                teatro[op] = "<  >";
                break;
            }

            system("cls");
            imprime();
            cout<<"\n";
            cout<<"\n";
            cout<<"Digite a nova Poltrona"<<endl;
            cout<<"Digite: ";
            cin>>op;

            for(int i=0; i<tam; i++){
                teatro[op] = "< X >";
                break;
            }


        }else{

            cout<<"\n";
            cout<<"Não é possível trocar, Nenhum Ingresso foi Vendido!"<<endl;
        }
    }

    //Contabiliza os ingressos Vendidos
    //**********************************************************************************
    void contador ()
    {
        if(ingVendidos > 0 || ingVendidos <tam)
        {
            ingVendidos++;
        }else{
            cout<<"\n";
            cout<<"Poltrona Inexistente ou Ingressos escotados!"<<endl;
        }

    }

    //Contabiliza os ingressos Devolvidos
    //**********************************************************************************
    void devolverIng()
    {
        if(ingVendidos > 0)
        {
            ingVendidos--;
         }else{
             cout<<"\n";
             cout<<"Nenhum Ingresso foi vendido!"<<endl;
         }
    }



};


#endif // ESTTEATRO_H_INCLUDED
