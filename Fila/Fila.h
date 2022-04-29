#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename Tipo>
struct Fila{
    Tipo *v;
    int inic;
    int fim;
    int qtde;
    int tamanho;

    Fila(int tam){
        tamanho = tam;
        v = new Tipo[tamanho];
        inic=0;
        fim=-1;
        qtde=0;
    }

    ~Fila(){
        delete []v;
    }

    void insere(Tipo x){
        fim++;
        if(fim == tamanho){
            fim = 0;
        }
        v[fim]=x;
        qtde++;
    }

    Tipo remover(){
        Tipo temp = v[inic];
        inic++;
        if(inic == tamanho){
            inic=0;
        }
        qtde--;
        return temp;
    }

    Tipo primeiro(){
        return v[inic];
    }


    bool filacheia(){
        return qtde == tamanho;
    }

    bool filavazia(){
        return qtde == 0;
    }

};

















#endif // FILA_H_INCLUDED
