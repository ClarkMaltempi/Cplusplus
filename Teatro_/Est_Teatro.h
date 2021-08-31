#ifndef EST_TEATRO_H_INCLUDED
#define EST_TEATRO_H_INCLUDED



struct Teatro
{
    std::string *ptr;
    int tamanho;
    int cont=0;

    void adicionarDados()
    {
        cont= cont + 1;
    }

    int mostrarDados()
    {
        return cont;

    }

    void NovaReserva(std::string *arr)
    {
        ptr = arr;
        for(int i=1;i<tamanho;i++)
        {
            for (int x=1;x<tamanho;x++)
            {

                *ptr = 'X';


            }
        }

    }

    void Devolver(std::string *arr)
    {
        ptr = arr;
        for(int i=1;i<tamanho;i++)
        {
            for (int x=1;x<tamanho;x++)
            {
                *ptr = 'D';
            }
        }
    }

    void Trocar (std::string *arr)
    {
        ptr = arr;
        for(int i=1;i<tamanho;i++)
        {
            for (int x=1;x<tamanho;x++)
            {
                *ptr = 'T';
            }
        }
    }




};

#endif // EST_TEATRO_H_INCLUDED




