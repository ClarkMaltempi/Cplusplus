#include <iostream>
#include <locale.h>
#include <math.h>
#define pt_br setlocale(LC_ALL,"Portuguese");
#define RED "\e[0;31m"

using namespace std;

int main()
{
    pt_br;
    int opc, tempo, tempRetorno,i=0;
    double ValFuturo, M, ValRetorno, CB, percent, valor, n, Parcela, Retorno, result,dia;
    double ValPresent;




    do{
        system("cls");
        cout << "--------------------------------------------------" << endl;
        cout << "                    Economia                       " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"Calculo Individual..."<<endl;
        cout << endl;
        cout << "[1] Calculo Valor Futuro (Simples)" << endl;
        cout << "[2] Calculo Valor Futuro do Investimento -M- (Simples)" << endl;
        cout << "[3] Calculo Valor Futuro do Retorno -VF- (Simples)" << endl;
        cout << "[4] Custo Benefício" << endl;
        cout << endl;

        cout<<"---------------------------------------------"<<endl;
        cout<<"Calculo Completo..."<<endl;
        cout << endl;
        cout << "[5] Calculo de Projeto {Val Futuro}, Investimento, Custo/Benefício e tempo" << endl;
        cout << "[6] Calculo de Projeto {Val Presente}, Investimento, Custo/Benefício" << endl;
        cout << "[0] SAIR" << endl;
        cout<<endl;
        cin>>opc;

        switch(opc){


    case 1:

       cout<<" VF = P*[ ( 1 + R )n – 1 ]"<<endl;
       cout<<"--------------------------"<<endl;
       cout<<"             R            "<<endl;
       cout<<endl;

        cout<<"Digite o valor Anual Investido *P*! "<<endl;
        cout<<"Digite: ";
        cin>>valor;

        cout<<"Digite o Percentual (valor inteiro)"<<endl;
        cout<<"Digite: ";
        cin>>percent;
        percent = percent/100;

        cout<<"Digite o Tempo de Investimento (Montante)"<<endl;
        cout<<"Digite: ";
        cin>>n;
        cout<<endl;

        cout<<"Como ficou a formula"<<endl;
        cout<<endl;
        cout<<" VF ="<<valor<<"*"<<"[ ( 1 +"<< percent <<" )^"<<n<< "– 1 ]"<<endl;
       cout<<"--------------------------"<<endl;
       cout<<"             "<<percent<<"            "<<endl;
       cout<<endl;


        ValFuturo = pow(1+percent,n)-1;

        ValFuturo = ValFuturo/percent;

        ValFuturo = ValFuturo * valor;

        printf("VF = %.9f",ValFuturo);


        cout<<endl;
        cout<<endl;
        system("pause");
        break;

        case 2:

        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Futuro do Investimento Fixo  "<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"Digite o valor -P- (Reultado de Calculo RF) Anual Investido! "<<endl;
        cout<<"Digite: ";
        cin>>valor;

        cout<<"Digite o Percentual (valor inteiro)"<<endl;
        cout<<"Digite: ";
        cin>>percent;
        percent = percent/100;

        cout<<"Digite o Tempo de Investimento (Montante)"<<endl;
        cout<<"Digite: ";
        cin>>n;
        cout<<endl;

        M = pow(1+percent,n);
        M = valor*M;
        cout<<"M = "<<valor<<" x "<<" (1+"<<percent<<")^"<<n<<endl;

        printf("M = %.9f",M);

        cout<<endl;
        cout<<endl;
        system("pause");
        break;


        case 3:

        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Futuro do Retorno Fixo  "<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"Digite o valor -P- (Parcela Retorno) Anual Investido! "<<endl;
        cout<<"Digite: ";
        cin>>valor;

        cout<<"Digite o Percentual (valor inteiro)"<<endl;
        cout<<"Digite: ";
        cin>>percent;
        percent = percent/100;

        cout<<"Digite o Tempo de Investimento (Montante)"<<endl;
        cout<<"Digite: ";
        cin>>n;
        cout<<endl;

        cout<<"VF ="<<valor<<" x "<<"1 + "<<percent<<" )^ "<<n<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"             "<<percent<<"            "<<endl;
        cout<<endl;
        ValRetorno = pow(1+percent,n)-1;

        ValRetorno = ValRetorno/percent;

        ValRetorno = ValRetorno * valor;

        printf("VF = %.9f",ValRetorno);

        cout<<endl;
        cout<<endl;
        system("pause");
        break;

        case 4:

        cout<<"-------------------------------------------------"<<endl;
        cout<<"              Cálculo Custo Benefício "<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"Digite o valor -VF- de Retorno! "<<endl;
        cout<<"Digite: ";
        cin>>ValRetorno;

        cout<<"Digite o valor de Investimento fixo -M- de Retorno! "<<endl;
        cout<<"Digite: ";
        cin>>valor;

        CB = valor/ValRetorno;
        cout<<"CB = "<<CB<<endl;

        cout<<endl;
        cout<<endl;
        system("pause");


        break;

        case 5:
        system("cls");
        cout<<"Digite o valor inicial Investido! "<<endl;
        cout<<"Digite: ";
        cin>>valor;

        cout<<"Digite o Tempo inicial do Investimento! "<<endl;
        cout<<"Digite: ";
        cin>>tempo;

        cout<<"Digite o Tempo retorno Investido para recuperar! "<<endl;
        cout<<"Digite: ";
        cin>>tempRetorno;

        cout<<"Digite a taxa Anual! "<<endl;
        cout<<"Digite: ";
        cin>>percent;
        percent = percent/100;
        cout<<endl;

        cout<<"Inicio do Projeto: "<<tempo<<" meses"<<endl;
        cout<<"Retorno do Investimento: "<<tempRetorno<<" meses"<<endl;
        cout<<"Tempo Total (Investimento + Retorno): "<<tempRetorno+tempo<<" meses"<<endl;
        cout<<"Custo Benefício: "<<tempRetorno<<" meses"<<endl;
        cout<<endl;

        while(i != tempRetorno+tempo){

            cout<<i<<" ";

            i++;
        }

        Parcela = valor/ tempo;
        Retorno = valor/ tempRetorno;
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Parcelas Mensais do Investimento e Retorno"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Parcelas Mensais do Investimento: "<<Parcela<<endl;
        cout<<"Parcelas do Retorno: "<<Retorno<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Futuro do Investimento em "<<tempo<<" meses"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Como ficou a formula"<<endl;
        cout<<endl;
        cout<<" VF ="<<Parcela<<"*"<<"[ ( 1 +"<< percent <<" )^"<<tempo<< "– 1 ]"<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"             "<<percent<<"            "<<endl;
        cout<<endl;


        ValFuturo = pow(1+percent,tempo)-1;

        ValFuturo = ValFuturo/percent;

        ValFuturo = ValFuturo * Parcela;

        printf("VF = %.9f",ValFuturo);

        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Futuro do Investimento Fixo em "<<tempRetorno-tempo<<" meses"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        M = pow(1+percent,tempRetorno-tempo);
        M = ValFuturo*M;
        cout<<"M = "<<ValFuturo<<" x "<<" (1+"<<percent<<")^"<<tempRetorno-tempo<<endl;
        printf("M = %.9f",M);


        cout<<endl;
        cout<<endl;

        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Futuro do Retorno Fixo em "<<tempRetorno-tempo<<" meses"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"VF ="<<Retorno<<" x "<<"1 + "<<percent<<" )^ "<<tempRetorno-tempo<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"             "<<percent<<"            "<<endl;
        cout<<endl;
        ValRetorno = pow(1+percent,tempRetorno-tempo)-1;

        ValRetorno = ValRetorno/percent;

        ValRetorno = ValRetorno * Retorno;

        printf("VF = %.9f",ValRetorno);

        cout<<endl;
        cout<<endl;

        cout<<"-------------------------------------------------"<<endl;
        cout<<"              Cálculo Custo Benefício "<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;


        CB = M/ValRetorno;
        cout<<"CB = "<<CB<<endl;

        cout<<endl;
        cout<<endl;

        cout<<"Deseja Calcular o Tempo Retorno Integral do Investimento ?"<<endl;
        cout<<"SIM[1] OU NÃO [2]"<<endl;
        cin>>opc;

        if(opc == 1){
            cout<<"-------------------------------------------------"<<endl;
            cout<<"  Cálculo Tempo Retorno Integral do Investimento "<<endl;
            cout<<"-------------------------------------------------"<<endl;
            cout<<endl;
            cout<<endl;



            cout<<"Retorno por dia: "<<Retorno/30<<" p/ dia"<<endl;
            dia = Retorno/30;
            cout<<"Valor a Retornar: "<<M-ValRetorno<<endl;
            result = M-ValRetorno;
            cout<<"Dias que faltam p/ retorno integral: "<< result/dia<<endl;
        }

        cout<<endl;
        cout<<endl;
        system("pause");
        break;


        case 6:

        system("cls");
        cout<<"Digite o valor inicial Investido! "<<endl;
        cout<<"Digite: ";
        cin>>valor;

        cout<<"Digite o Tempo inicial do Investimento! "<<endl;
        cout<<"Digite: ";
        cin>>tempo;

        cout<<"Digite o Tempo retorno Investido para recuperar! "<<endl;
        cout<<"Digite: ";
        cin>>tempRetorno;

        cout<<"Digite a taxa Anual! "<<endl;
        cout<<"Digite: ";
        cin>>percent;
        percent = percent/100;
        cout<<endl;

        cout<<"Inicio do Projeto: "<<tempo<<" meses"<<endl;
        cout<<"Retorno do Investimento: "<<tempRetorno<<" meses"<<endl;
        cout<<"Tempo Total (Investimento + Retorno): "<<tempRetorno+tempo<<" meses"<<endl;
        cout<<"Custo Benefício: "<<tempRetorno<<" meses"<<endl;
        cout<<endl;

        while(i != tempRetorno+tempo){

            cout<<i<<" ";

            i++;
        }

        Parcela = valor/ tempo;
        Retorno = valor/ tempRetorno;
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Parcelas Mensais do Investimento e Retorno"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Parcelas Mensais do Investimento: "<<Parcela<<endl;
        cout<<"Parcelas do Retorno: "<<Retorno<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Futuro do Investimento em "<<tempo<<" meses"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Como ficou a formula"<<endl;
        cout<<endl;
        cout<<" VF ="<<Parcela<<"*"<<"[ 1 /"<<percent<<"- 1 /"<< percent <<" *(1 +"<<percent<<")^"<<tempo<< " ]"<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"             "<<percent<<"            "<<endl;
        cout<<endl;
        cout<<endl;
        result = (1/percent);
        ValPresent = 1 / (percent*pow(1+percent,tempo));
        ValPresent = (result - ValPresent);
        ValPresent = Parcela*ValPresent;


        printf("VF = %.9f",ValPresent);

        cout<<endl;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo Presente do Valor de Retorno Fixo em "<<tempRetorno<<" meses"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<" VF ="<<Retorno<<"*"<<"[ 1 /"<<percent<<"- 1 /"<< percent <<" *(1 +"<<percent<<")^"<<tempRetorno<< " ]"<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"             "<<percent<<"            "<<endl;
        cout<<endl;
        cout<<endl;
        result = (1/percent);
        ValRetorno = 1 / (percent*pow(1+percent,tempRetorno));
        ValRetorno = (result - ValRetorno);
        ValRetorno = Retorno*ValRetorno;

        printf("VF = %.9f",ValRetorno);

        cout<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"-------------------------------------------------"<<endl;
        cout<<"Cálculo do Valor Presente do Retorno Fixo do Investimento "<<tempo<<" meses"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;

        M = pow(1+percent,tempo);
        M = ValRetorno/M;
        cout<<"M = "<<ValRetorno<<" x "<<" (1+"<<percent<<")^"<<tempo<<endl;
        cout<<endl;
        cout<<endl;
        printf("M = %.9f",M);


        cout<<endl;
        cout<<endl;

        cout<<"-------------------------------------------------"<<endl;
        cout<<"              Cálculo Custo Benefício "<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;


        CB = ValPresent/M;
        cout<<"CB = "<<CB<<endl;

        cout<<endl;
        cout<<endl;

        cout<<endl;
        cout<<endl;
        system("pause");
        break;

        case 0:
        exit(0);
        cout<<"Você optou por Sair!!!"<<endl;
        break;

        default:
            cout<<"Valor Invalido!"<<endl;
            cout<<endl;
            cout<<endl;
        break;
        }
        }while(opc != 0);


    return 0;
}
