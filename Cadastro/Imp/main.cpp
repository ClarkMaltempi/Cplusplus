#include <iostream>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <locale.h>
#define pt setlocale(LC_ALL,"Portuguese");
#include <algorithm>
#include <ctime>



using namespace std;

//funções de incialização das funções e parametros
vector <string> vet;
vector <string> vetPedido;
vector<string>::iterator it; // utilizar para interagir com os elementos de uma coleção
string capitalizeString(string s);
void atualiza();
void cadastro();
void ListaImpressoras();
void Altera();
void Pedido();
string Tempo();
int StsPedido=0;
string BuscaPedido(string nome);
void ListaPedido();
void ApagaPedido();
void atualizaArq();

//Responsável pelo cadatro de novos ativos
void cadastro(){

    fstream arquivo;
    char opc='s';
    string nome,linha, modelo, departamento, IP, Serie, Cartucho,QtdCartucho;

    arquivo.open("Impressora.txt",ios::out|ios::app);

    while((opc=='s')or(opc=='S')){
        cout << "Digite um nome: ";
        cin >> nome;
        nome=capitalizeString(nome);
        arquivo << nome << "\n";

        cout << "Digite um modelo: ";
        cin >> modelo;
        modelo=capitalizeString(modelo);
        arquivo << modelo << "\n";

        cout << "Digite um Departamento: ";
        cin >> departamento;
        departamento=capitalizeString(departamento);
        arquivo << departamento << "\n";

        cout << "Digite um IP: ";
        cin >> IP;
        IP=capitalizeString(IP);
        arquivo << IP << "\n";

        cout << "Digite o numero de Série: ";
        cin >> Serie;
        Serie=capitalizeString(Serie);
        arquivo << Serie << "\n";

        cout << "Digite o modelo do cartucho: ";
        cin >> Cartucho;
        Cartucho=capitalizeString(Cartucho);
        arquivo << Cartucho << "\n";

        cout << "Quantidade de cartuchos: ";
        cin >> QtdCartucho;
        QtdCartucho=capitalizeString(QtdCartucho);
        arquivo << QtdCartucho << "\n";

        arquivo<<"----------------------------";
        arquivo << "\n";
        arquivo<<"0"; //Pedidos
        arquivo << "\n";
        arquivo << "X"; //Data do Pedido
        arquivo << "\n\n";
        cout << "\nDigitar um novo nome?[s/n]";

        cin >> opc;
        system("CLS"); // cstdlib trabalhar com o system
    }
    arquivo.close();
}


//procedimento que converte uma string para maiúsculo
string capitalizeString(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); });
    return s;
}

//atualização da memória, puxa os dados do arquivo e insere no vetor
void atualiza(){

    fstream arquivo;
    string linha;
    int i=0;

    arquivo.open("Impressora.txt",ios::in);

    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            //cout << linha << endl;
            if(vet[i] == vet[i]){
                vet.push_back(linha);//inserir no final do vetor
            }
            i++;
        }
        arquivo.close();
    }else{
        cout << "Não foi possivel abrir o arquivo" << endl;
        cout << "Entre em Novo Cadastro" << endl;
    }


    //Atualiza arquivo de Pedidos

    arquivo.open("Pedidos.txt",ios::in);

    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            //cout << linha << endl;
            if(vetPedido[i] == vetPedido[i]){
                vetPedido.push_back(linha);//inserir no final do vetor
            }
            i++;
        }
        arquivo.close();
    }else{
        cout << "Não foi possivel abrir o arquivo" << endl;
        cout << "Entre em Novo Cadastro" << endl;
    }
}

//Atualiza arquivo da memória para a pasta de dados
void atualizaArq(){

    ofstream arquivo;

    arquivo.open("Impressora.txt");
    int i=0;
    if(arquivo.is_open()){

            for(int i=0;i<=vet.size();i++)
            {
                arquivo << vet[i]<<"\n";
            }
            cout<<"Registrado"<<endl;
            cout<<"\n";
            system("pause");
        arquivo.close();
    }else{
        cout << "Não foi possivel abrir o arquivo" << endl;
        cout << "Entre em Novo Cadastro" << endl;
    }


}

//Lista as Impressoras utilizando o interator, verifica o inicio (begin) e final (end) do arquivo.

void ListaImpressoras(){

    /*
    int i=0;
    for(i=0;i<=vet.size();i++){
        cout << vet[i] <<"\n";
    }

    outra maneira usando o iterator
    */
    for(it=vet.begin();it!=vet.end();it++){
        cout << *it <<endl;

        if(*it == " "){
            cout<<"Nenhum item cadastrado"<<endl;
        }
    }
    system("pause");
}

//Busca arquivo por nome verificando a string carregada através do vetor na memória
void Busca(){

    int i=0,x=0;
    string nome, pos;
    cout<<"Digite o nome da impressora"<<endl;
    cout<<"Digite: ";
    cin>>nome;
    nome = capitalizeString(nome);

    cout<<"\n\n ";


    for(i=0;i<=vet.size();i++)
    {
            if(vet[i] == nome)
            {
                while(vet[i] != "----------------------------")
                {
                   cout<<vet[i]<<endl;
                   i++;
                }
            }
    }

    cout<<"\n\n ";
    system("pause");
}


//Tela inicial do programa
void Status(){

    int i,x=0;
    string posicao;
    cout<<" STATUS ATUAL"<<endl;

    for(it=vet.begin();it!=vet.end();it++)
    {

            if(*it != " "){

            for(i=0;i<=18;i++)
            {
                cout<<" __";
            }

            cout<<"\n\n";
            cout<<"|";
            cout<<" IMPRESSORAS";
            cout<<"      ESTOQUE";
            cout<<"      PEDIDO";
            cout<<"      DTA PEDIDO";
            cout<<"   |";
            cout<<"\n";
            cout<<"|";
            cout<<"                                                        |";
            cout<<"\n";



                for(i=0;i<=vet.size();i++){

                //Exibição dos itens cadastrados no arquivo e armazenados na memória
                    if(vet[i] >= "PO_" && vet[i] <= "R0")
                    {

                        cout<<"|";
                        cout<<" "<<vet[i];
                        cout<<"        "<<vet[i+6];
                        cout<<"            "<<vet[i+8]; //Numero de Pedido, Busca no Vetor de Pedidos a impressora
                        cout<<"          "<<vet[i+9];

                        if(vet[i+9] != "X")
                        {
                            cout<<"|";
                        }else{
                            cout<<"           |";
                        }
                        //cout<<"           |";
                        cout<<"\n";

                    }
                }

                for(i=0;i<=18;i++)
                {
                    cout<<" __";
                }
                break;
        }else{

            cout<<"\n";
            cout<<"Ainda Nenhum Registro encontrado!"<<endl;
            break;
        }

    }

}

//Menu de alteração dos dados na memória e atualização simultanea do arquivo de dados
void Altera(){

    ofstream arquivo;
    string nome, Novonome, modelo, Novomodelo, departamento, Novodep, IP, NovoIP, Serie, NovaSerie, Cartucho, NovoCartucho, QtdCartucho, NovaQtd;
    int opc,pos;

    system("cls");
    cout << "\n";
    cout<<"[1] Novo nome"<<endl;
    cout<<"[2] Novo modelo"<<endl;
    cout<<"[3] Novo departamento"<<endl;
    cout<<"[4] Novo IP"<<endl;
    cout<<"[5] Nova Serie"<<endl;
    cout<<"[6] Novo Cartucho"<<endl;
    cout<<"[7] Nova QtdCartucho"<<endl;
    cout<<"\n\n";
    cout<<"Digite: ";
    cin>>opc;

        switch(opc)
        {

            //
            case 1 :
            cout<<"Digite o nome da impressora que deseja Alterar"<<endl;
            cout<<"Digite: ";
            cin>>nome;
            nome = capitalizeString(nome);
            cout<<"\n\n ";

            //Novo Nome
            for(int i=0;i<=vet.size();i++)
            {
                if(vet[i] == nome)
                {
                    cout<<"Digite novo nome: ";
                    cin>>Novonome;
                    vet[i] = Novonome;
                }
            }
            break;

            case 2 :
            cout<<"Digite o modelo da impressora que deseja Alterar"<<endl;
            cout<<"Digite: ";
            cin>>modelo;
            modelo = capitalizeString(modelo);
            cout<<"\n\n ";

            //Novo Nome
            for(int i=0;i<=vet.size();i++)
            {
                if(vet[i] == modelo)
                {
                    cout<<"Digite novo modelo: ";
                    cin>>Novomodelo;
                    vet[i] = Novomodelo;
                }
            }
            break;

            //
            case 3 :
            cout<<"Digite o Departamento da impressora que deseja Alterar"<<endl;
            cout<<"Digite: ";
            cin>>departamento;
            departamento = capitalizeString(departamento);
            cout<<"\n\n ";

            //Novo Nome
            for(int i=0;i<=vet.size();i++)
            {
                if(vet[i] == departamento)
                {
                    cout<<"Digite novo Novo departamento: ";
                    cin>>Novodep;
                    vet[i] = Novodep;
                }
            }
            break;

            //
            case 4 :
            cout<<"Digite o IP da impressora que deseja Alterar"<<endl;
            cout<<"Digite: ";
            cin>>IP;
            IP = capitalizeString(IP);
            cout<<"\n\n ";

            //Novo Nome
            for(int i=0;i<=vet.size();i++)
            {
                if(vet[i] == IP)
                {
                    cout<<"Digite novo Novo IP: ";
                    cin>>NovoIP;
                    vet[i] = NovoIP;
                }
            }
            break;

            //
            case 5 :
            cout<<"Digite a Serie da impressora que deseja Alterar"<<endl;
            cout<<"Digite: ";
            cin>>Serie;
            Serie = capitalizeString(Serie);
            cout<<"\n\n ";

            //Novo Nome
            for(int i=0;i<=vet.size();i++)
            {
                if(vet[i] == Serie)
                {
                    cout<<"Digite Nova Serie: ";
                    cin>>NovaSerie;
                    vet[i] = NovaSerie;
                }
            }
            break;

            //
            case 6:
            cout<<"Digite o  nome do Cartucho da impressora que deseja Alterar"<<endl;
            cout<<"Digite: ";
            cin>>Cartucho;
            Cartucho = capitalizeString(Cartucho);
            cout<<"\n\n ";

            //Novo Nome
            for(int i=0;i<=vet.size();i++)
            {
                if(vet[i] == Cartucho)
                {
                    cout<<"Digite Nova Cartucho: ";
                    cin>>NovoCartucho;
                    vet[i] = NovoCartucho;
                }
            }
            break;

            case 7:

            cout<<"Digite o nome da impressora"<<endl;
            cout<<"Digite: ";
            cin>>nome;
            nome = capitalizeString(nome);
            cout<<"\n\n ";

            //Alteração de Quantidade
            for(int i=0;i<=vet.size();i++)
            {
                    if(vet[i] == nome)
                    {
                        pos = i;
                        for(i=pos;i<=6;i++)
                        {
                            if(i == 7){
                                cout<<"Digite nova Quantidade de Tonner: ";
                                cin>>NovaQtd;
                                vet[i] = NovaQtd;

                            cout<<"\n\n";
                            cout<<"Modificação Registrada!";
                        }
                    }
                }
            }

            break;

            default:
                cout<<"Valor inválido!";
            }

    //Atualiza arquivo após mudanças, fato essencial
    cout<<"\n\n ";
    arquivo.open("Impressora.txt");
    int i=0;
    if(arquivo.is_open()){

            for(int i=0;i<=vet.size();i++)
            {
                arquivo << vet[i]<<"\n";
            }
            cout<<"Registrado"<<endl;
            cout<<"\n";
            system("pause");
        arquivo.close();
    }else{
        cout << "Não foi possivel abrir o arquivo" << endl;
        cout << "Entre em Novo Cadastro" << endl;
    }
}

//Nomeia um ponto no tempo e armazena a data atual do Sistema que é retornada através da variável buffer
string Tempo()
{
    time_t t;
    struct tm*infoTempo;
    char buffer[80];

    time(&t);
    infoTempo=localtime(&t);


    strftime(buffer,80, "%d /%m / %y " , infoTempo);
    return buffer;
}

//Buscar Pedido e colocar no Status
string BuscaPedido(string nome)
{
    int i=0,x=0;
    nome = capitalizeString(nome);

    for(i=0;i<=vetPedido.size();i++)
    {
            if(vetPedido[i] == nome)
            {
                return "1";
            }else{

                return "0";
            }
    }

    cout<<"\n\n ";
    system("pause");
}

//Registrar Pedidos
void Pedido(){

    fstream arquivo;
    char opc='s';
    string nome,Cartucho,QtdCartucho;

    arquivo.open("Pedidos.txt",ios::out|ios::app);

    cout<<"Registrar pedidos"<<endl;
    cout<<"\n\n";

    while((opc=='s')or(opc=='S')){
        cout << "Digite o nome da Impressora: ";
        cin >> nome;
        nome=capitalizeString(nome);
        arquivo << nome << "\n";

        for(int i=0;i<=vet.size();i++)
        {
            if(vet[i] == nome)
                {
                    vet[i+8] = "1";
                    vet[i+9] = Tempo();
                }
        }

        cout << "Digite o modelo do cartucho: ";
        cin >> Cartucho;
        Cartucho=capitalizeString(Cartucho);
        arquivo << Cartucho << "\n";

        cout << "Quantidade de cartuchos: ";
        cin >> QtdCartucho;
        QtdCartucho=capitalizeString(QtdCartucho);
        arquivo << QtdCartucho << "\n";

        arquivo<<"----------------------------";
        arquivo << "\n";
        arquivo<<Tempo();
        arquivo << "\n";
        StsPedido = +1;
        arquivo << StsPedido;

        cout << "\nDigitar um novo nome?[s/n]";

        cin >> opc;
        system("CLS"); // cstdlib trabalhar com o system
    }
    arquivo.close();
    atualizaArq();
}

void ListaPedido(){

    int i=0;



        for(i=0;i<=vetPedido.size();i++){

            cout << vetPedido[i] <<endl;

            if(vetPedido[i] == " "){
                cout<<"Nenhum item cadastrado"<<endl;
                break;

            }


        }


    /*
    for(it=vetPedido.begin();it!=vetPedido.end();it++){
        cout << *it <<endl;

        if(*it == " "){
            cout<<"Nenhum item cadastrado"<<endl;
            break;
        }
    }
    */
    system("pause");
}

//Apagar Pedidos
void ApagaPedido(){

    ofstream arquivo;
    int i;
    string op, nome;

    if(vetPedido[0] != " "){

    cout<<"Digite [1] para Eliminar todos os Pedidos?"<<endl;

    cout<<"Digite: ";
    cin>>op;

    //Apaga todos os itens
    if(op =="1")
    {

        for(i=0;i<=vetPedido.size();i++)
        {
            vetPedido[i] = " ";
        }

        for(i=0;i<=vet.size();i++)
        {
            if(vet[i] >= "PO_" && vet[i] <= "R0")
            {
                if(vet[i] != "X")
                {
                    vet[i+9] = "X";
                    vet[i+8] = "0";

                }else{

                    i++;
                }
            }
        }
        atualizaArq();
    }



    //Atualiza arquivo após mudanças
    cout<<"\n\n ";
    arquivo.open("Pedidos.txt");

    if(arquivo.is_open()){

            for(int i=0;i<=vetPedido.size();i++)
            {
                if(vetPedido[i] == " "){
                    arquivo << " ";
                }else{
                    arquivo << vetPedido[i]<<"\n";
                }
            }
            cout<<"Registrado apagado"<<endl;
            cout<<"\n";
            system("pause");
        arquivo.close();
    }else{
        cout << "Não foi possivel abrir o arquivo" << endl;
        cout << "Entre em Novo Cadastro" << endl;
    }

    }else{
        cout<<"Nenhum Pedido Cadastrado!"<<endl;
        system("pause");
    }
}


//Função main inicializa e atualiza as alterações do sistema
int main()
{
    pt;
    atualiza();
    int op, item;
    Inicio:
    system("cls");
    Status();

    cout<<"\n\n\n";
    cout<<"Digite [1] para Modificar "<<endl;
    cout<<"Digite: ";
    cin>>item;

    cout<<"\n\n\n\n";
    if(item == 1)
    {
        do
        {
            system("cls");
            cout << "\n";
            cout<<"[1] Novo Cadastro"<<endl;
            cout<<"[2] Lista Itens"<<endl;
            cout<<"[3] Busca Itens"<<endl;
            cout<<"[4] Altera Itens"<<endl;
            cout<<"[5] Fazer Pedido"<<endl;
            cout<<"[6] Lista Pedido"<<endl;
            cout<<"[7] Apaga Pedido"<<endl;
            cout<<"[8] Menu Inicial"<<endl;
            cout<<"[0] Sair"<<endl;
            cout<<"\n\n";
            cout<<"Digite: ";
            cin>>op;


            switch(op)
            {
                case 1:
                    cadastro();
                break;

                case 2:
                    ListaImpressoras();
                break;

                case 3:
                    Busca();
                break;

                case 4:
                    Altera();
                break;

                case 5:
                    Pedido();
                break;

                case 6:
                    ListaPedido();
                break;

                case 7:
                    ApagaPedido();
                break;

                case 8:
                    goto Inicio;
                break;


                default:
                    if(op != 0){
                        cout<<"Valor Inválido!";
                    }
            }

        }while(op != 0);

    }

    return 0;
}
