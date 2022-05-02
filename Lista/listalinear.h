#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED


template <typename Tipo>
struct Lista{

    Tipo *lista;
    int tamanho;
    int posicao;

    Lista(int tam){
        tamanho = tam;
        lista = new Tipo[tamanho];
        posicao = -1;
    }

    void insere(Tipo x){
        posicao++;
        lista[posicao]=x;
    }

    void remover(){
        posicao--;
    }

    bool listavazia(){
        return posicao == -1;
        //if (posicao == -1)
        //    return true;
        //else
        //    return false;
    }

    bool listacheia(){
        return posicao == tamanho-1;
    }

    Tipo getValor(int pos){
        return lista[pos];
    }


};




#endif // LISTALINEAR_H_INCLUDED
