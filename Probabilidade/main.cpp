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


double Euler(double x)
{
    double result = exp(x);
    return result;
}

void cabecalho(){

    cout<<endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                          " << endl;
    cout << "                                                                         ESTATÍSTICA                          " << endl;
    cout << "                                                          " << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout<<endl;
    cout<<endl;

}


int main()
{
    pt_br;
    system("color 1E");

    int opc,i;
    double mediaHipotetica, mediaAmostral, TamanhoAmostra, desvioPadrao, nivelSignificancia, z, AreaTeste=100.00,tabela; //VARIAVEIS TESTE DE HIPÓTESES
    double mediaIC, TamanhoAmostraIC, desvioPadraoIC, nivelConf, IC,ICneg, Populacao, raizPop;//INTERVALO DE CONFIANÇA (POPULAÇÃO CONHECIDA)
    double n, p, q, fatN,fatK, k, X, P;//DISTRIBUIÇÃO NORMAL
    double MediaInterval, OcorInterval, ValLambida, OcorVariavel; //DISTRIBUIÇÃO DE POISSON

    do{
        system("cls");
        cabecalho();
        cout << " \t [1] TESTE DE HIPOTESES" << endl;
        cout << " \t [2] INTERVALO DE CONFIANÇA" << endl;
        cout << " \t [3] INTERVALO DE CONFIANÇA (POPULAÇÃO CONHECIDA)" << endl;
        cout << " \t [4] DISTRIBUIÇÃO NORMAL" << endl;
        cout << " \t [5] DISTRIBUIÇÃO DE POISSON" << endl;
        cout << " \t [6] Potencia" << endl;
        cout << " \t [7] SOBRE" << endl;
        cout << " \t [0] Sair" << endl;
        cout<<endl;
        cout <<"\t DIGITE: ";
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
            system("\tpause");
        break;

        case 2:
        system("cls");
        cout<<endl;
        cout<<endl;
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
        cout <<"Inserir valor da Tabela" << endl;
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

        cout<<"\tI.C. = ["<<ICneg <<";"<< IC <<"]"<<endl;

        cout<<endl;
        cout<<endl;
        system("\tpause");

        break;

        case 3:
        system("cls");
        cout<<endl;
        cout<<endl;
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

        cout<<"\tI.C. = ["<<ICneg <<";"<< IC <<"]"<<endl;

        cout<<endl;
        cout<<endl;
        system("\tpause");
        break;

        case 4:
        system("cls");
        cout<<endl;
        cout<<endl;
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
        system("\tpause");
        break;

        case 5:
        system("cls");
        cout<<endl;
        cout<<endl;
        cout << "\tDISTRIBUIÇÃO DE POISSON" << endl;
        cout<<endl;
        cout << "\tO que diferencia essa distribuição é a Análise envolvendo um espaço ou tempo " << endl;
        cout<<endl;

        cout<<"                                       "<<endl;
        cout<<"                                       "<<endl;
        cout<<"P(X = k) = e^-lambida X lambida^k      "<<endl;
        cout<<"           -----------------------     "<<endl;
        cout<<"                     K!                "<<endl;
        cout<<endl;

        cout << "\t[1]Deseja Calcular o Valor de Lambida (apartir de duas variáveis)" << endl;
        cout << "\t[2]Inserir o valor de Lambida" << endl;
        cout << "\t[3]Inserir o valor de Lambida Com um intervalo de Ocorrencias >[Maior] ou <[Menor]" << endl;
        cout<<endl;
        cout<<"Escolha: ";
        cin>>X;
        cout<<endl;

        if(X == 1){
            cout<<"\tCalcular o Valor de lambda"<<endl;
            cout<<endl;
            cout<<"Média do intervalo"<<endl;
            cin>>MediaInterval;

            cout<<"Ocorrencia do intervalo"<<endl;
            cin>>OcorInterval;

            ValLambida = OcorInterval/MediaInterval;
            X = 2;
            }
        if(X == 2){

            cout<<"Inserir Valor de lambda (média)"<<endl;
            cin>>ValLambida;

            cout<<"Inserir Valor Total do Intervalo"<<endl;
            cin>>OcorInterval;


        cout<<"                                       "<<endl;
        cout<<"                                       "<<endl;
        cout<<"P(X = k) = e^-lambida X lambida^k      "<<endl;
        cout<<"           -----------------------     "<<endl;
        cout<<"                     K!                "<<endl;
        cout<<endl;

        cout<<"                                       "<<endl;
        cout<<"                                       "<<endl;
        cout<<"P(X = "<<OcorInterval<<") = e^-"<<ValLambida<<" X "<<ValLambida<<"^"<<OcorInterval<<endl;
        cout<<"          --------------     "<<endl;
        cout<<"              "<<OcorInterval<<"!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"--------------------------------------- "<<endl;

        X = pow(Euler(1),-ValLambida);
        X = X*(pow(ValLambida,OcorInterval));
        X = X/(Fatorial(OcorInterval));
        cout<<endl;
        printf("%.5f",X);
        cout<<"OU"<<endl;
        X = X*100;
        cout<<X<<" % "<<endl;
        }

        if(X == 3){


            cout<<"Inserir Valor de lambda (média)"<<endl;
            cin>>ValLambida;

            cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\tOcorrencia é > ou >= ou <= ou < que a Probabilidade a ser considerada"<<endl;
            cout<<endl;
            cout<<"\tExemplo:"<<endl;
            cout<<endl;
            cout<<"\tConsidera-se antender no mínimo 2, ou seja, k(ocorrencias) poderia ser k=2,3,4,5..."<<endl;
            cout<<"\tNesse caso considera-se o intervalo de ocorrencias P(X < 2) = P(X=1)+P(X=0) - 100% Calculo Complementar"<<endl;
            cout<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<"\tSabendo disso Digite..."<<endl;
            cout<<"\tInserir Valor Total do Intervalo"<<endl;
            cout<<"Digite: ";
            cin>>OcorInterval;
            cout<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
            cout<<endl;
            cout<<"                                       "<<endl;
            cout<<"                                       "<<endl;
            cout<<"P(X = k) = e^-lambida X lambida^k      "<<endl;
            cout<<"           -----------------------     "<<endl;
            cout<<"                     K!                "<<endl;
            cout<<endl;

            while(OcorInterval != -1){

            cout<<"                                       "<<endl;
            cout<<"                                       "<<endl;
            cout<<"P(X = "<<OcorInterval<<") = e^-"<<ValLambida<<" X "<<ValLambida<<"^"<<OcorInterval<<endl;
            cout<<"          --------------     "<<endl;
            cout<<"              "<<OcorInterval<<"!"<<endl;
            cout<<endl;
            cout<<endl;


            X = pow(Euler(1),-ValLambida);
            X = X*(pow(ValLambida,OcorInterval));
            X = X/(Fatorial(OcorInterval));

            cout<<endl;
            cout<<"P(X = "<<OcorInterval<<") =  ";
            printf("%.5f",X);
            cout<<endl;
            cout<<"--------------------------------------- "<<endl;
            cout<<endl;
            OcorVariavel += X;

            OcorInterval--;
            }

            OcorVariavel = OcorVariavel*100;
            //cout<<OcorVariavel;
            X = 100-OcorVariavel;

            cout<<endl;
            cout<<"--------------------------------------- "<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t***Valor Final***"<<endl;

            //printf("%.5f",X);

            cout<<"\tResultado:   "<<X<<" % "<<endl;
        }




       // printf("%.31f",Euler(1));//Quantidade de digitos da calculadora do Windows


        cout<<endl;
        cout<<endl;
        system("\tpause");
        break;

        case 6:

            cout<<endl;
            cout<<endl;
            system("\tpause");
        break;

        case 7:
            cout<<endl;
            cout<<endl;
            cout<<"\tAutor: Clark Maltempi"<<endl;
            cout<<"\tTema: Estatística"<<endl;
            cout<<endl;
            cout<<"\tEssa é a primeira versão do software que envolve calculos estátisticos abrangendo probabilidade"<<endl;
            cout<<"\tConceitos Abordados, Testes de hipóteses, Intervalo de Confiança, Distribuição Normal, Distribuição de Poisson... "<<endl;
            cout<<endl;
            cout<<endl;
            system("\tpause");
        break;


        case 0:
            cout<<endl;
            cout<<endl;
            cout<<"\tVocê optou por sair!!!"<<endl;
            system("\tpause");
        break;

        default:
            cout<<"\tValor invalido!!!"<<endl;
        break;


        }



    }while(opc != 0);












    return 0;
}

