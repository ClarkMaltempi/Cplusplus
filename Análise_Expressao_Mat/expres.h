#ifndef EXPRES_H_INCLUDED
#define EXPRES_H_INCLUDED
#include <vector>

using namespace std;

struct Ex{

    vector<char> vetSymb;
    vector<char>::iterator it;
    char *char_array;
    int tamanho;

    Ex(int tamanho){
    char_array = new char[tamanho];
    }

    //Inicialização dos valores
    //**********************************************************************************
    void Inilist(int tamanho, char temp){

        it = vetSymb.begin();
            vetSymb.insert(vetSymb.end(),temp);
	}


	bool Expressao(int tamanho){

     int item;
     bool check;
	 int i=0,contpar=0, contcol=0;
//Verifica a quantidade de parenteses********************************************

     while(i < tamanho){

          if (vetSymb[i] == '(' || vetSymb[i] == '{' || vetSymb[i] == '['){
                    contpar++;
              }

          if (vetSymb[i] == ')' || vetSymb[i] == '}' || vetSymb[i] == ']'){
                    contcol++;
              }
             i++;
        }

        i=0;
        //Verifica quantidade de caracter de abertura e fechamento, se par correto
        item = contpar+contcol;
        item = item % 2;

        //Verifica o tipo de caracter********************************************************
        if(item == 0){

            do{

             if (vetSymb[i] == '(')
             {
                    vetSymb[i]='&';
                    item++;

                    if(item == 1){

                            for(int x=0;x<=tamanho;x++){


                              if(vetSymb[x] == ')'){

                                vetSymb[x] = '&';
                                item++;


                                if(item == 2){
                                    check = true;
                                    item=0;

                                    break;
                                }

                                }else{
                                    check = false;
                                }
                            }
                    }
              }

             if (vetSymb[i] == '{')
             {
                    vetSymb[i]='$';
                    item++;


                    if(item == 1){

                            for(int x=0;x<=tamanho;x++){


                              if(vetSymb[x] == '}'){

                                vetSymb[x] = '$';
                                item++;


                                if(item == 2){
                                    check = true;
                                    item=0;

                                    break;
                                }

                                }else{
                                    check = false;
                                }
                            }
                    }
              }


              if (vetSymb[i] == '[')
             {
                    vetSymb[i]='#';
                    item++;

                    if(item == 1){

                            for(int x=0;x<=tamanho;x++){


                              if(vetSymb[x] == ']'){

                                vetSymb[x] = '#';
                                item++;


                                if(item == 2){
                                    check = true;
                                    item=0;

                                    break;
                                }

                                }else{
                                    check = false;
                                }
                            }
                    }
              }

              i++;

              }while(i <= tamanho);


            }else{
                check = false;
            }

        return check;
	}

	//*******************************************************

	bool VerificaCar(int tamanho){

        int operador=0;
        int num=0, result=0;

        bool check;

         for(int i=0;i<=tamanho;i++)
         {
            if(vetSymb[i] == '+' || vetSymb[i] == '-' || vetSymb[i] == '*' || vetSymb[i] == '/'){

                    operador++;
            }

            if(vetSymb[i] >= '0'){

                    num++;
            }
         }

         if(num > 2 && operador > 2){

            result = num - operador;

            if(result == 1){
                check = true;
            }else{
                check = false;
            }
         }else if(num == 2 && operador==1){
                check = true;
         }else{
            check =false;
         }
            return check;

	}


};

struct PilhaCar{

    char *v;
    int tamanho, topo;

    PilhaCar(int tam)
    {
        tamanho = tam;
        topo = -1;
        v = new char[tamanho];
    }

    void empilha(char c)
    {
        topo = topo + 1;
        v[topo] = c;
    }



    char desempilha()
    {
        char temp;
        temp = v[topo];
        topo = topo - 1;
        return temp;
    }

    char elementodotopo()
    {
        return v[topo];
    }

    //se pilha esta vazia, o valor do indice da pilha e igual a -1
    //por isso, se topo = -1, a funcao retornara TRUE
    bool pilhavazia()
    {
        return topo == -1;
    }

    //se pilha esta cheia, o valor do indice da pilha e igual ao total de elementos que existem na pilha -1 (maior indice possivel)
    //por isso, se topo = tamanho-1, a funcao retornara TRUE
    bool pilhacheia()
    {
        return topo == tamanho-1;
    }


};





#endif // EXPRES_H_INCLUDED
