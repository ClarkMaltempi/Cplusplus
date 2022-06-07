#include <iostream>
#include <locale.h>
#define pt_br setlocale(LC_ALL, "Portuguese");
#include <math.h>

using namespace std;


double Fatorial(int n){

        double ret;
     //Calculo Fatorial
        int fat = n;

        ret = 1;
        while (fat > 1){
        ret *= fat--;
        }
        return ret;

}

int main()
{
    pt_br;
    int opc;
    double mediaHipotetica, mediaAmostral, TamanhoAmostra, desvioPadrao, nivelSignificancia, z, AreaTeste=100.00,tabela; //VARIAVEIS TESTE DE HIPÓTESES
    double mediaIC, TamanhoAmostraIC, desvioPadraoIC, nivelConf, IC,ICneg, Populacao, raizPop;//INTERVALO DE CONFIANÇA (POPULAÇÃO CONHECIDA)
    double n, p, q, fatN,fatK, k, X, P;//DISTRIBUIÇÃO NORMAL

    do{
        system("cls");
        cout << "[1] TESTE DE HIPOTESES" << endl;
        cout << "[2] INTERVALO DE CONFIANÇA" << endl;
        cout << "[3] INTERVALO DE CONFIANÇA (POPULAÇÃO CONHECIDA)" << endl;
        cout << "[4] DISTRIBUIÇÃO NORMAL" << endl;
        cout << "[5] Somatorio II" << endl;
        cout << "[6] Potencia" << endl;
        cout << "[7] Absoluto" << endl;
        cout << "[0] Sair" << endl;
        cout<<endl;
        cin>>opc;

        switch(opc){

        case 1:
           pt_br;
           cout << "Digite a média hipotetica [Alegacao]" << endl;
           cin>>mediaHipotetica;

           cout << "Digite a média Amostral" << endl;
           cin>>mediaAmostral;

           cout << "Digite o TamanhoAmostra" << endl;
           cin>>TamanhoAmostra;

           cout << "Digite o desvioPadrao" << endl;
           cin>>desvioPadrao;

           cout << "Digite o nivelSignificancia (inteiro)" << endl;
           cin>>nivelSignificancia;
           AreaTeste = (AreaTeste -  nivelSignificancia);
           AreaTeste = AreaTeste/2;
           nivelSignificancia = nivelSignificancia/100;
           cout<<endl;
           cout<<endl;
           printf("Verificar o valor na tabela: %.4f ", AreaTeste/100);
           cout<<endl;
           cout << "Inserir valor da Tabela" << endl;
           cin>>tabela;

           printf("Valor a ser comparado: %.4f ",tabela);
           cout<<endl;
           cout<<"Dados"<<endl;
           cout<<endl;
           cout<<endl;
           cout<<"Média Hipotética = "<<mediaHipotetica<<endl;
           cout<<"Média Amostral = "<<mediaAmostral<<endl;
           cout<<"TamanhoAmostra = "<<TamanhoAmostra<<endl;
           cout <<"Digite o desvioPadrao = "<<desvioPadrao<<endl;
           //cout <<"nivelSignificancia = "<<nivelSignificancia<<endl;

           cout<<endl;
           cout<<endl;
           cout<<"Média Amostral -  Média Hipotética"<<endl;
           cout<<"----------------------------------"<<endl;
           cout<<"         desvioPadrao         "<<endl;
           cout<<"    ------------------------      "<<endl;
           cout<<"     raiz(TamanhoAmostra)         "<<endl;
           cout<<endl;
           cout<<endl;


            z = sqrt(TamanhoAmostra)/desvioPadrao;

            z = (mediaAmostral-mediaHipotetica)*z;
            cout<<endl;
            cout<<endl;

            cout<<"Z = "<<z<<endl;

            if(z > tabela){

                cout<<"Amostra Rejeitada!!"<<endl;
            }else{

                cout<<"Amostra Aceita!!"<<endl;
            }

        cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 2:

        cout << "Digite a média" << endl;
        cin>>mediaIC;
        cout << "Digite o Tamanho da Amostra" << endl;
        cin>>TamanhoAmostraIC;
        cout << "Digite o Desvio Padrão" << endl;
        cin>>desvioPadraoIC;
        cout << "Digite o nível de Confiança(Porcentagem)" << endl;
        cin>>nivelConf;
        nivelConf = nivelConf/100;
        nivelConf = nivelConf/2;

        printf("Verificar o valor na tabela: %.4f ", nivelConf);
        cout<<endl;
        cout << "Inserir valor da Tabela" << endl;
        cin>>tabela;

        printf("Valor a ser comparado: %.4f ",tabela);
        cout<<endl;

       cout<<endl;
       cout<<endl;
       cout<<"                   z(Intervalo Tabela)X desvio Padrão"<<endl;
       cout<<"  IC = x(média)  +-   ----------------------------------"<<endl;
       cout<<"                          raiz(TamanhoAmostra)         "<<endl;
       cout<<endl;
       cout<<endl;

       cout<<endl;
       cout<<endl;
       cout<<"                            "<<tabela<<" X "<<desvioPadraoIC<<endl;
       cout<<"  IC = x "<<mediaIC<<"  +-   ----------------------------------"<<endl;
       cout<<"                              raiz("<<TamanhoAmostraIC<<")         "<<endl;
       cout<<endl;
       cout<<endl;

        IC = tabela*desvioPadraoIC;
        IC = IC/(sqrt(TamanhoAmostraIC));
        ICneg = IC;
        IC = mediaIC + IC;
        ICneg = mediaIC - ICneg;

        cout<<"I.C. = ["<<ICneg <<";"<< IC <<"]"<<endl;

        cout<<endl;
        cout<<endl;
        system("pause");

        break;

        case 3:

        cout << "Digite a média" << endl;
        cin>>mediaIC;
        cout << "Digite o Tamanho da Amostra" << endl;
        cin>>TamanhoAmostraIC;
        cout << "Digite o Desvio Padrão" << endl;
        cin>>desvioPadraoIC;
        cout << "Digite o nível de Confiança (Porcentagem)" << endl;
        cin>>nivelConf;
        nivelConf = nivelConf/100;
        nivelConf = nivelConf/2;

        cout<<"Digite o Tamanho da População"<<endl;
        cin>>Populacao;

        printf("Verificar o valor na tabela: %.4f ", nivelConf);
        cout<<endl;
        cout << "Inserir valor da Tabela" << endl;
        cin>>tabela;

        printf("Valor a ser comparado: %.4f ",tabela);
        cout<<endl;

       cout<<endl;
       cout<<endl;
       cout<<"                   z(Intervalo Tabela)X desvio Padrão        |  N-n     "<<endl;
       cout<<"  IC = x(média)  +-   ---------------------------------- raiz| -----            "<<endl;
       cout<<"                          raiz(TamanhoAmostra)               |  N-1      "<<endl;
       cout<<endl;
       cout<<endl;

       cout<<endl;
       cout<<endl;
       cout<<"                                      "<<tabela<<" X "<<desvioPadraoIC<<"            | "<<Populacao<<" - "<<TamanhoAmostraIC<<endl;
       cout<<"  IC = x "<<mediaIC<<"  +-   ---------------------------------- raiz |           "<<endl;
       cout<<"                                        raiz("<<TamanhoAmostraIC<<")             | "<<Populacao<<" - 1 "<<endl;
       cout<<endl;
       cout<<endl;

        IC = tabela*desvioPadraoIC;
        IC = IC/(sqrt(TamanhoAmostraIC));
        raizPop = (Populacao-TamanhoAmostraIC)/(Populacao-1);
        IC = IC*raizPop;

        ICneg = IC;
        IC = mediaIC + IC;
        ICneg = mediaIC - ICneg;

        cout<<"I.C. = ["<<ICneg <<";"<< IC <<"]"<<endl;

        cout<<endl;
        cout<<endl;
        system("pause");
        break;

        case 4:

        cout<<"P = Probabilidade de Sucesso"<<endl;
        cout<<"Q = Probabilidade de Não Sucesso"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Digite a probabilidade de sucesso"<<endl;
        cin>>q;
        cout<<"Digite a probabilidade de No-sucess"<<endl;
        cin>>p;
        cout<<"Digite a Quantidade de itens testados - Tamanho Total: (n)"<<endl;
        cin>>n;
        cout<<"Digite a Probabilidade que deseja Calcular (k)"<<endl;
        cin>>k;
        cout<<endl;
        cout<<endl;

        cout<<"n = "<<n<<" k =2 "<<k<<" p= "<<p<<" q=  "<<q<<endl;

        cout<<"Formulas"<<endl;
        cout<<endl;
        cout<<"           | n |      n!       "<<endl;
        cout<<"           |   | = ---------          "<<endl;
        cout<<"           | k |    k!(n-k)!     "<<endl;

        cout<<endl;
        cout<<endl;
        cout<<"           | n |           "<<endl;
        cout<<"P(X = k) = |   | p^k q^n-k          "<<endl;
        cout<<"           | k |          "<<endl;


        p = p/100;
        q = q/100;

        X = n-k;
        X = Fatorial(X);
        fatN = Fatorial(n);
        fatK = Fatorial(k);
        X = fatN/(fatK*X);

        P = pow(p,k)*pow(q,n-k);

        P = X*P;
        cout<<P<<endl;
        cout<<" OU "<<endl;
        printf("%.4f",P*100);

        cout<<endl;
        cout<<endl;
        system("pause");
        break;

        case 5:

        break;

        case 6:

            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 7:

            cout<<endl;
            cout<<endl;
            system("pause");
        break;

        case 8:
        break;

        case 0:
        break;

        default:
            cout<<"Valor invalido!!!"<<endl;
        break;


        }



    }while(opc != 0);












    return 0;
}

