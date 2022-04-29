#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED


template <typename Tipo>
struct Pilha{
    Tipo *v;
    int tamanho;
    int topo;

    Pilha(int tam){
        tamanho = tam;
        v = new Tipo[tamanho];
        topo = -1;
    }

    ~Pilha(){
        delete []v;
    }

    void empilha(Tipo x){
        topo++;
        v[topo]=x;
    }
    Tipo desempilha(){
        Tipo temp = v[topo];
        topo--;
        return temp;
    }

    Tipo elementodotopo(){
        return v[topo];
    }

    bool pilhacheia(){
        return topo == tamanho-1;
    }

    bool pilhavazia(){
        return topo == -1;
    }
};

#endif // PILHA_H_INCLUDED
