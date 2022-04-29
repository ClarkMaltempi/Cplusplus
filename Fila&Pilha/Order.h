#ifndef ORDER_H_INCLUDED
#define ORDER_H_INCLUDED

using namespace std;
struct Order{


    int *number, *numberFila;
    int tamanho;

    Order(int tam){
        tamanho = tam;
        number = new int[tamanho];
        numberFila = new int[tamanho];
    }

    void OrderValoresC(){
     //Método Bolha Ordena Valores Fila
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                if (number[i] > number[j])
                {
                    int a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
    }
       //Método Bolha Ordena Valores da Pilha
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                if (numberFila[i] > numberFila[j])
                {
                    int a =  numberFila[i];
                    numberFila[i] = numberFila[j];
                    numberFila[j] = a;
                }
            }
        }

    }

     void OrderValoresD(){
     //Método Bolha Ordena Valores Fila
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                if (number[i] < number[j])
                {
                    int a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
       //Método Bolha Ordena Valores da Pilha
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = i + 1; j < tamanho; j++)
            {
                if (numberFila[i] < numberFila[j])
                {
                    int a =  numberFila[i];
                    numberFila[i] = numberFila[j];
                    numberFila[j] = a;
                }
            }
        }

    }









};



/*

     for (int i = 0; i < tam; ++i){
        number[i] = f.remover();
        }

        for (int i = 0; i < tam; ++i){
        numberFila[i] = p.desempilha();
        }


     //Método Bolha Ordenar
    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (number[i] > number[j])
            {
                int a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (numberFila[i] > numberFila[j])
            {
                int a =  numberFila[i];
                numberFila[i] = numberFila[j];
                numberFila[j] = a;
            }
        }
    }
    //Ordem crescente
    for (int i = 0; i < tam; ++i){
         int a = number[i];
          p.empilha(a);
    }

    for (int i = 0; i < tam; ++i){
         int a = numberFila[i];
          f.insere(a);
    }

*/







#endif // ORDER_H_INCLUDED
