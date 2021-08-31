#include <iostream>
#include "Est_Teatro.h"

using namespace std;

void adicionarDados();
int mostrarDados();

int main()
{
    int tamanho;
    int linha;
    int coluna;
    std::string *ptr;
    std::string posicao;
    int opc;
    int BilhetesVendidos;

    //int cadeiras;

    cout << "TEATRO" << "\n\n" << endl;
    Teatro t;


    cout << "Digite o tamanho do Teatro: ";
    cin>>tamanho;
    t.tamanho = tamanho;
    std::string mat[tamanho][tamanho];

    for(int l=1;l<tamanho;l++)
        {
            for (int c=1;c<tamanho;c++)
            {
                mat [l][c] = '0';
            }
        }

    for(int l=1;l<tamanho;l++)
    {
        std::cout << "   ";
        std::cout <<"{"<<l<<"} ";
        for (int c=1;c<tamanho;c++)
        {
            std::cout << mat [l] [c];
            std::cout << ' ';
        }
            std::cout << "\n";
    }



    cout<< "\n\n";

    do
    {

        cout<<" [1] Bilheteria.....: "<<endl;
        cout<<" [2] Reservar.......: "<<endl;
        cout<<" [3] Devolver.......: "<<endl;
        cout<<" [4] Trocar.........: "<<endl;
        cout<<" [5] Qtd Vendido....: "<<endl;
        cout<<" [9] Fim............: "<<"\n"<<endl;
        cout<<".Selecione>>>  ";
        cin >> opc ;
        cout<< "\n\n";

        switch(opc)
        {
            case 1:

            for(int i=1;i<tamanho;i++)
            {
                std::cout << "   ";
                for (int x=1;x<tamanho;x++)
                {
                    std::cout << mat [i][x];
                    std::cout << ' ';

                }
                std::cout << "\n";
            }


            cout<< "\n\n";
            break;


            case 2: //Reservar
                cout<< "\n\n";
                cout <<" Digite a linha: ";
                cin>>linha;
                cout <<" Digite a coluna: ";
                cin>>coluna;

            ptr = &mat[linha][coluna];
            posicao = *ptr;
            if(posicao == "0" || posicao == "D" || posicao == "T")
            {

                t.NovaReserva(&mat[linha][coluna]);
                t.adicionarDados();

                for(int i=1;i<tamanho;i++)
                {
                    std::cout << "   ";
                    for (int x=1;x<tamanho;x++)
                    {
                        std::cout << mat [i][x];
                        std::cout << ' ';

                    }
                    std::cout << "\n";
                }

                cout<< "\n\n";
            }else{cout<<"\n"<<" Lugar Ocupado!<<"<<"\n";}
            break;

           case 3: //Devolver

                cout<< "\n\n";
                cout<<" Digite linha e coluna a Devolver"<<"\n\n";
                cout <<" Digite a linha: ";
                cin>>linha;
                cout <<" Digite a coluna: ";
                cin>>coluna;


            ptr = &mat[linha][coluna];
            posicao = *ptr;
            if(posicao == "X")
            {

                t.Devolver(&mat[linha][coluna]);


                for(int i=1;i<tamanho;i++)
                {
                    std::cout << "   ";
                    for (int x=1;x<tamanho;x++)
                    {
                        std::cout << mat [i][x];
                        std::cout << ' ';

                    }
                    std::cout << "\n";
                }

            }else{cout<<"\n"<<" O Lugar Digitado está vago!<<"<<"\n";}

           break;

           case 4: //Trocar
            ptr = &mat[linha][coluna];
            posicao = *ptr;

            if(posicao != "0")
            {
                cout<< "\n\n";
                cout<<" Digite linha e coluna a Trocar"<<"\n";
                cout <<" Digite a linha: ";
                cin>>linha;
                cout <<" Digite a coluna: ";
                cin>>coluna;
            }else{cout<<"\n"<<" O Lugar Digitado está vago!<<"<<"\n";}

            ptr = &mat[linha][coluna];
            posicao = *ptr;
            if(posicao == "0" || posicao == "D" || posicao == "T")
            {
                t.Trocar(&mat[linha][coluna]);

                cout<< "\n\n";
                cout<<" Digite Nova linha e coluna para Substituir"<<"\n";
                cout <<" Digite a linha: ";
                cin>>linha;
                cout << "Digite a coluna: ";
                cin>>coluna;
                t.NovaReserva(&mat[linha][coluna]);

            }
                break;

            case 5:
                cout<< "Quantidade de Bilhetes Vendidos: ";
                cout<<t.mostrarDados();
                cout<< "\n\n";
            break;
            case 9:
                cout<<"Ate Breve!"<<"\n";
                system("exit");
            break;

            default:
                cout<<"Opcao invalida. Selecione outra opcao"<<endl;
            break;
        }
    }while(opc!=9 || opc !=9);

    return 0;
}


