#ifndef PILHA_LIGADA_H_INCLUDED
#define PILHA_LIGADA_H_INCLUDED


template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};

template <typename Tipo>
struct Pilha{
    Node<Tipo> *topo;

    Pilha(){
        topo = NULL;
    }

    ~Pilha(){
        while (!pilhavazia()){
            desempilha();
        }
    }

    bool empilha(Tipo x){
        bool v = true;
        Node<Tipo> *aux = new Node<Tipo>;
        if (aux == NULL){
            v = false;
        }
        else{
            aux->info = x;
            aux->prox = topo;
            topo = aux;
        }
        return v;
    }

    bool pilhavazia(){
        return topo == NULL;
    }

    Tipo desempilha(){
        Tipo temp = topo->info;
        Node<Tipo> *aux = topo;
        topo = topo->prox;
        delete aux;
        return temp;
    }

    Tipo elementodotopo(){
       return topo->info;
    }
};

#endif // PILHA_LIGADA_H_INCLUDED
