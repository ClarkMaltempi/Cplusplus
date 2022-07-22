
# Cplusplus

<p>Principais conceitos trabalhados com a linguagem C++

<h2>Indice</h2></br>
<a href="#sobre">Sobre</a></br>
<a href="#Inserindo-Valores">Inserir</a></br>
<a href="#ENUM">Enum</a></br>
<a href="#STRUCT">Struct</a></br>
<a href="#STRUCT-ARRAY">Struct-Array</a></br>
<a href="#PONTEIROS">Ponteiros</a></br>
<a href="#PONTEIROS-ARRAY">Ponteiros-Array</a></br>
<a href="#ALOCACAO-DINAMICA">Alocação-Dinamica</a></br>
<a href="#RECURSIVAS">funções-Recursivas</a></br>
<a href="#PiLHA-STACK">Pilha-Stack</a></br>
<a href="#EMPT">EMPT</a></br>
<a href="#FILAS-QUEUE">Filas-Queue</a></br>
<a href="#POO">POO</a></br>
<a href="#POO-CLASSES">POO-CLASSES</a></br>
<a href="#GET-SET">GET-SET</a></br>
<a href="#HERANCA">Herança</a></br>

</br>
</br>

>Templates Console Application

 _         |         |           |
--------- | --------| ----------|
Cadastro  |  Calculo Economia | Calculo Euler |      
Fila |  Dupla Fila | Fila&Pilha | 
Lista | Lista Linear | Ordenação | 
Pilha | Pilha Ligada | Probabilidade | 
Recursivas | Projeto Teatro |Projeto Teatro v2 |

##</br>
# Sobre
<p>Este repositorio contem mini projetos desenvolvidos para manipulação da linguagem c++</p>
<p>Você pode encontrar a explicação com trechos de código no desenvolvimento e Estrutura de dados da Linguagem</p>



# pre-requisitos

```c++

printf("teste");


```

# Inserindo-Valores



# STRUCT

```c++

#include <iostream>


using namespace std;


struct Carro{

		string nome;
		string cor;
		int pot;
		int valMax;

};

int main (){

	 //Declarar essa variável

	 Carro car1; //Declarando uma variável do tipo Carro

	 car1.nome="Tornado";
	 car1.cor="Vermelho";
	 car1.pot=450;
	 car1.velMax=350;

	 cout << "Nome do carro: "<<car1.nome << "\n";

	return 0;
}

```

<p>Trabalhando com funções e Métodos</p>

```c++

#include <iostream>


using namespace std;


struct Carro{

		string nome;
		string cor;
		int pot;
		int valMax;
		int vel;

		void  insere (string stnome, string stcor, int stpot, int stvelmax){

			nome=stnome;
			cor=stcor;
			pot=stpot;
			velMax=stvelmax;
			vel=0;

		}

		void mostra (){
				cout << "Nome................. :" << nome <<"\n";
				cout << "Cor................. :" << cor<<"\n";
				cout << "Potencia................. :" << pot <<"\n";
				cout << "Velocidade................. :" << vel <<"\n";
				cout << "Velocidade Máxima................. :" << velMax <<"\n";

		}

		//Mudar a velocidade
		//verifica se a velocidade não é maior que velocidade máxima
		void mudaVel (int mv){
			vel=mv;

			if(vel > velMax){

				vel=velMax;
			}
			if(vel <0){

				vel=0;
			}


		}

};


int main (){

	 //Declarar essa variável

	 Carro car1,car2; //Declarando uma variável do tipo Carro


	 car1.insere("Tornado", "Vermelho",450,350);
	 car2.insere("Tornado", "Vermelho",450,350);

	 car1.mostra();

	 car1.mudaVel(150);
	 car1.mostra();

	return 0;
}



```


# STRUCT-ARRAY

```c++

#include <iostream>


using namespace std;


struct Carro{

		string nome;
		string cor;
		int pot;
		int valMax;
		int vel;

		void  insere (string stnome, string stcor, int stpot, int stvelmax){

			nome=stnome;
			cor=stcor;
			pot=stpot;
			velMax=stvelmax;
			vel=0;

		}

		void mostra (){
				cout << "Nome................. :" << nome <<"\n";
				cout << "Cor................. :" << cor<<"\n";
				cout << "Potencia................. :" << pot <<"\n";
				cout << "Velocidade................. :" << vel <<"\n";
				cout << "Velocidade Máxima................. :" << velMax <<"\n";

		}

		//Mudar a velocidade
		//verifica se a velocidade não é maior que velocidade máxima
		void mudaVel (int mv){
			vel=mv;

			if(vel > velMax){

				vel=velMax;
			}
			if(vel <0){

				vel=0;
			}


		}

};


int main (){

	//um Objeto do tipo Carro cria um Array Carro de 5 posições

	 Carro *carros=new Carro[5];
	 Carro car1,car2, car3, car4, car5; //Declarando uma variável do tipo Carro

	 //cada carro vai ter uma posição

	 carros [0] =car1; carros [1] =car2; carros [2] =car3; carros [3] =car4; carros [4] =car5;

	 carros [0].insere("Tornado", "Vermelho",450,350);
	 carros [1].insere("Tornado", "Vermelho",450,350);
	 carros [2].insere("Tornado", "Vermelho",450,350);
	 carros [3].insere("Tornado", "Vermelho",450,350);
	 carros [4].insere("Tornado", "Vermelho",450,350);


	 for(int i=0; i<5; i++){
			carros[i].mostra();

	 }


	return 0;
}


```



# ENUM

<p>Valores inteiros</p>
<p>Por padrão cada item tem um valor, ele sempre tem uma estrutura sequencial...primeiro item é 0</p>
<p>Ele é sequencial apartir do numero anterior</p>


```c++

#include <iostream>


using namespace std;

int main (){

	enum armas {fuzil=100, revolver=8, rifle=12, escopeta=1};

	//tipo   variavel
	armas armaSel;

	armaSel = fuzil;

	cout << armaSel;

	return 0;
}

```

# PONTEIROS


<p>Não armazena o endereço de uma variavel, mas o endereço de outra variável, ele está apontando.</p>
<p>Ponteiro tem que ser da mesma variável</p>

<h2>Exemplo</h2>

| End			|			Tipo			|		valor		|	nome|
------------------------|-----------------------------------------------|-------------------------------|-------------------------|
1000			|			int			|		4		|			num|

```c++

int *pn;         //criando  ponteiro
pn=&num;     //Associei o endereço num com o ponteiro
cout << pn;   //Endereço;
cout << *pn;


int main (){

string veiculo="Carro";
string *pv; // criou o endereço;

pv=&veiculo; // Ponteiro PV recebe o endereço da variavel veículo

cout << pv; //Endereço da memória Ram;
cout << &veiculo;

*pv="Moto";


}


```

# PONTEIROS-ARRAY

```c++

// Manipulando Arrays e vetores


int *p;
int vet[10];

p=vet; //atribuindo o primeiro elemento do vetor p=&vetor[0];

p=&vetor[1];
cout<< "\n" << p << "\n";

*(p+=1);//incrementando 1 para o próxima posição
*p=10; // 10 atribuído a primeira posição do vetor
cout << "\n" << vetor[0]<<"\n";

*(p+=1); //incrementando para a segunda posição
*p=20;
cout << "\n" << vetor[1] << "\n";



void iniVetor (float *v);

int main(){

float vetor[5];
iniVetor(vetor); // Não precisa especificar o endereço
}

for(int i=0; i<5; i++){

	cout<< vetor[i] << "\n";
}

void iniVetor (float *v){
	v[0]=0;
	v[1]=0;
	v[2]=0;
	v[3]=0;
	v[4]=0;
}


```

# ALOCACAO-DINAMICA

```c++

#include <iostream>
#include <stdio.h> // Para função gets
#include <stdlib.h> //Para função malloc


//Malloc de memóry alocation, alocar exatamente o que é necessário para reservar um espaço de memória

int main (){

		char *vnome;
		vnome=(char*)malloc(sizeof(char)) //indicar o tamanho do bloco, retorna void, porém a variável nome é char, tapecast para converter o retorno/ sizeof retorna o tamanho do elemento (char) 1 byte
		vnome=(char*)malloc(sizeof(char)+1)//Soma a alocação de memória


		gets(vnome);





	return 0;

}

```

# RECURSIVAS



```c++

#include <iostream>

using namespace std;

int main (){

		contador(20);



		return 0;


}

void contador(int num, int cont){
	cout << cont << "\n";
	if(num > cont){
		contador(num, ++cont);
		
	}
	
}


/////////////////////////Recursividade Fatorial

#include <iostream>

using namespace std;

int main (){
	
		int val,res;
		
		val=8;
		res=fatorial(val);
		cout << "Fatorial de " << val ": " << res;
		
		cout << "\n\nFibonacci com " << val <<" valores: ";
		for(int i=0; i<val;i++){
			cout << fibonacci (i+1) << " ";
			
		}

		cout << "\n\n";

		return 0;
}

int fatorial (int n) {
	if(n==0){
		
		return 1;
	}
	return n*fatorial(n-1);
	
}

int fibonacci(int n){
	if (n==1 || n==2){
		return 1;
		
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	
}

```

# PiLHA-STACK



```c++


//Pilha /Stack - Um tubo, o primeiro elemento inserido é o ultimo elemento a ser trabalhado, o ultimo elemento inserido 
//é o primeiro a ser trabalhado

/*
		
			| |
			|_|
*/


#include <iostream>
#include <stack>

using namespace std;

int main (){
	
		stack <string> cartas;
		
		cartas.push("Rei de copas"); // inserir elemento na pilha
		cartas.push("Rei de Espadas");
		cartas.push("Rei de Ouros");
		cartas.push("Rei de Paus");
		
		cout << "Tamanho da pilha:" << cartas.size() << "\n";
		
		cout<<"Carta do topo: " << cartas.top() << "\n";
		
		cartas.pop(); // retira o elemento da pilha que está no topo
		
		cout << "Tamanho da pilha:" << cartas.size() << "\n";
		
		cout<<"Nova carta do Carta do topo: " << cartas.top() << "\n"; // Vert carta do topo
		
		
		return 0;
}


```

# EMPT


```c++

//////Pilhas Método Empt

#include <iostream>
#include <stack>

using namespace std;

int main (){
	
		stack <string> cartas;
		
		if (cartas.empty()){ //empty retorna verdadeiro ou falso
			
			cout<< "Pilha vazia\n\n";
			
		}else{
			
			cout << "Pilha com cartas\n\n";
			
			
		}
		
		//Pode ser usado o size também para verificar se existe elementos na pilha
		
		if (cartas.size()==0){ //empty retorna verdadeiro ou falso
			
			cout<< "Pilha vazia\n\n";
			
		}else{
			
			cout << "Pilha com cartas\n\n";
			
			
		}
		
		//excluir elementos
		while(!cartas.empty()){ // Enquanto cartas não for vazio
			
			cartas.pop();
			
		}
		
		cartas.push("Rei de copas"); // inserir elemento na pilha
		cartas.push("Rei de Espadas");
		cartas.push("Rei de Ouros");
		cartas.push("Rei de Paus");
		
		cout << "Tamanho da pilha:" << cartas.size() << "\n";
		
		cout<<"Carta do topo: " << cartas.top() << "\n";
		
		cartas.pop(); // retira o elemento da pilha que está no topo
		
		cout << "Tamanho da pilha:" << cartas.size() << "\n";
		
		cout<<"Nova carta do Carta do topo: " << cartas.top() << "\n"; // Vert carta do topo
		
	
		return 0;
}



```



# FILAS-QUEUE


```c++



///Filas****** /Queue
/*
			 _    _	
			  |  |
			 _|  |_
			
*/			//Primeiro elemento que entra é o primeiro elemento que sai, ultimo a entrar ultimo a sair
#include <iostream>
#include <queue>

using namespace std;

int main (){
	
	/*
		empty
		size
		front -  Na frente da fila
		back - 
		push
		pop
	*/
	
	queue <string> cartas;
		
		cartas.push("Rei de copas"); // inserir elemento na pilha
		cartas.push("Rei de Espadas");
		cartas.push("Rei de Ouros");
		cartas.push("Rei de Paus");
		
		cout << "Tamanho da fila:" << cartas.size() << "\n";
		cout<< "Primeira Carta: " << cartas.front() << "\n";	
		cout<< "Primeira Carta: " << cartas.back() << "\n\n";	
		
		
		
		//excluir elementos
		while(!cartas.empty()){ // Enquanto cartas não for vazio
		
		
			cout<< "Primeira Carta: " << cartas.front() << "\n";	
			cartas.pop(); //sempre vai remover a carta que está na frente da fila	
		}
		
	
		return 0;
}


```

# POO



```c++

///////////POO //// C++

#include <iostream>

using namespace std;


class Aviao{

	public:
		int vel=0;
		int velMax;
		string tipo;
		void ini(int tp); //Prototipar a Função, criando um metodo

	private:

};

void Aviao::ini(int tp){//tipo 1=jato, 2 = monomotor 3=Planador

	if(tp==1){
		this->velMax = 800; //Para dizer que velmax pertence a classe avião usamos "this" (está)
		this->tipo = "Jato";

	}else if (tp==2){
		this->velMax=350;
		this->tipo="Monomotor";

	}
}

int main (){


		Aviao *av1=new Aviao(); //No c++ precisa definir o ponteiro, instancio o objeto dessa classe

		av1->ini(1);

		cout << av1->vel; // O "."  nesse exemplo av1.vel mostra uma propriedade do Objeto, mas no C++ precisamos alterar a sintaxe, no c++ é "->"

		return 0;
}

```



# POO-CLASSES


```c++

//POO, Classe em arquivo externo - Arquivo principal.cpp



#include <iostream>
#include "arquivo.h"

using namespace std;


	Aviao *av1=new Aviao(1);//Informa o tipo de avião, ou seja passando o parametro
	Aviao *av2=new Aviao(3);
	Aviao *av3=new Aviao(2);
	
	av1->imprimir();
	av2->imprimir();



//*************************************************Segundo arquivo.h
//ou usar namespace std;
class Aviao{

	public:
		int vel=0;
		int velMax;
		std::string tipo;
		Aviao(int tp); //Prototipar a Função, criando um metodo
		void imprimir();

	private:

};

Aviao::Aviao(int tp){//tipo 1=jato, 2 = monomotor 3=Planador

	if(tp==1){
		velMax = 800; //Aqui não usamos o usamos "this" por causa da declaração do nome Aviao(int tp);
		tipo = "Jato";

	}else if (tp==2){
		velMax=350;
		tipo="Monomotor";
		
	}else if (tp==3){
		velMax=180;
		tipo="Planador";
}



void Aviao::imprimir(){
	
	std::cout<< "Tipo: " << tipo <<endl;
	std::cout<< "Velocidade máxima: " << velMax <<endl;
	
}


```



# GET-SET



```c++


/////GET E SET******************************************************#46
//TRABALHANDO COM PARAMETROS PRIVATE

//ARquivo principal

	Veiculo *v1=new Veiculo();
	//v1->velMax=300; // Está dando erro por que o velMax é privado
	cout<<v1->getVelMax();
	cout<<v1->velMax;
	
	v1->setLigado(1);


//Arquivo .harderr

class Veiculo{

	public:

		int vel;
		int tipo;	
		Veiculo(int tp);//Método construtor é o método que é chamado quando instancio um objeto da classe
		int getVelMax(); //Mesmo tipo da variável
		bool getLigado();
		void setLigado(int l);

	private:
		std::string nome;
		int velMax;
		bool ligado;
		void setVelMax(int vm);
};

bool Veiculo::getLigado(){
	return ligado;
}

void Veiculo::setLigado(int l){
	if(l==1){
		ligado=true;
	}else if(l==0){
		ligado=false;
	}
}

int Veiculo::getVelMax(){
	return VelMax;
}

void Veiculo::setVelMax(int vm){
	velMax=vm;
}

Veiculo::Veiculo(int tp){//1 = Carro 2 = Aviao 3 = Navio
	
	tipo = tp;
	if(tipo==1){
		nome="Carro";
		setvelMax(200);
	}else if(tipo==2){
		nome="Aviao";
		setvelMax(800);
	}if(tipo==3){
		nome="Navio";
		setvelMax(120);
	}
	
	
}


```

# HERANCA




```c++

//Arquivo Principal


	Moto *v1=new Moto();
	Carro *v2=new Carro();

	cout<<v1->rodas;
	v1->imp();



//Classes Arquivo .harder


class Veiculo{
	
	public:
	
		int vel;
		int blind;
		int rodas;
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		void imp();
	
	private:
	
		int tipo;
		int velMax;
		bool arma;
};

void Veiculo::imp(){
	std::cout<<"Tipo Veículo:"<< tipo;
}

void Veiculo:setTipo(int tp){
	tipo=tp;
}
	
void Veiculo:setVelMax(int vm){
	velMax=vm;
}

void Veiculo:setArma(bool ar){
	arma=ar;
}

class Moto::public Veiculo{//Criando uma classe que herda os elemntos da classe veículo
	
	public:
		moto();
	
	
};

Moto::Moto(){ //não foi declado os elementos
	vel=0;
	blind=0;
	rodas=2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
}


class Carro::public Veiculo{//Criando uma classe que herda os elemntos da classe veículo
	
	public:
		Carro();
	
	
};

Carro::Carro(){
	
	vel=0;
	blind=0;
	rodas=4;
	setTipo(2);
	setVelMax(120);
	setArma(false);
		
}


```




