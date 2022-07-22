
# Cplusplus

>Principais conceitos trabalhados com a linguagem C++

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
<a href="#VECTOR">Vector</a></br>
<a href="#INTERATOR">interator</a></br>
<a href="#CONVERTER-STRING">Converter-String</a></br>
<a href="#DATA">Data</a></br>
<a href="#CHRONO">Biblioteca-Chrono</a></br>
<a href="#CTIME-TIME">CTIME-TIME.h</a></br>
<a href="#ARQUIVOS">Arquivos</a></br>
<a href="#FUNCOES-LAMBDA">Funções-Lambda</a></br>
<a href="#CLASSES-ARMAZENAMENTO">Classes-Armazenamento_externo</a></br>
<a href="#PONTEIROS-INTELIGENTES">Ponteiros-Inteligentes</a></br>
<a href="#FOREACH">Foreach</a></br>
<a href="#XML">XML</a></br>

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


```c++
//POO --

class Carro{
	
	public:
	
		int velMax;
		int potencia;
		const char* nome;
		
		Carro(const char* n, int p){
			this->nome=n;
			this->potencia=p;
			if(p<100){
				this->velMax = 120;
			}else if(p<200){
				this->velMax=220;
			}
		}//Método Construtor
};

//main

//instanciando a classe
Carro *c1=new Carro("Bruno", 300);
cout<<c1->nome<< " - " <<c1->potencia <<" - " << c1->velMax << endl;

delete c1;

//Lista de inicialização com o new usamos a seta

Carro(const char* n, int p):nome(n), potencia(p){
	
			if(p<100){
				this->velMax = 120;
			}else if(p<200){
				this->velMax=220;
			}
		}//Método Construtor



//main

Carro c1{"Bruno", 70};
cout<<c1.nome<< " - " <<c1.potencia <<" - " << c1.velMax << endl;

//usar um smart point inteligente
#include <memory>

//main

unique_ptr<Carro>c1(new Carro{"Bruno", 70});
cout<<c1->nome<< " - " <<c1->potencia <<" - " << c1->velMax << endl;





	
var query = from element in root.Elements
where (string)element.Attribute ("atr") == "search" 
select element;


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


# VECTOR



```c++


#include <vector>

int main(){

vector<int> num; // Criado um vetor sem tamanho
vector<int> num(5); // Com tamanho
vector<int> num2; // Criado um vetor sem tamanho


int tam,i;

num.push_back(10); //Inserir no final do vetor

tam = num.size(); //armazena o tamanho do vector

for(i=0;i<tam.size();i++){
	cout << num[i];
	
}

num1.swap(num2); //troca de valores entre vetores
num1.front(); //retorna o primeiro elemento
num1.back(); //retorna o primeiro elemento
num1.at(tam/2);//retorno o valor do meio

num1.insert(num1.begin(),8888);//begin -> inicio, valor a inserir
num1.insert(num1.begin()+1,88);//begin -> inicio próxima posição indicando o +1
num1.insert(num1.end()-1,88); //penultima posição
num1.insert(num1.end(),88); //ultima posição
num1.erase(num1.end()-1);//eliminar o elemento
clear();limpa tudo

while(!num1.empty(){
	num1.pop_back;
	
}//retire até que o array fique vazio

}


```

# INTERATOR


```c++

//Interator 

vector<string>produtos = {"mouse", "teclado"};
vector<string>::iterator it; //apontar o elemento

it=produtos.begin(); //primeiro elemento
it=produtos.end()-1; //ultimo elemento

//advance
//next
//prev

advance(it,3); //avançar

cout <<*next(it,3)<<endl // avançar
cout <<*prev(it,3)<<endl //anda para a esquerda

cout << *it << endl; // colocar como ponteiro

for(it=produtos.begin(); it!=produtos.end();it++){
	cout << *it << endl;
	
}

```


# CONVERTER-STRING

```c++

strupr();

#include <stdio.h>
#include <stdlib.h>

// procedimento que converte uma string para maiúsculo
void maiusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; // caracteer que indica o fim da string
}

// procedimento que converte uma string para minúsculo
void minusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0'; // caracteer que indica o fim da string
}

int main() {
    char str1[] = "Ola. Bom dia.";
    char str2[500];

    printf("String original: %s\n", str1);

    maiusculo(str1, str2);
    printf("String maiuscula: %s\n", str2);

    minusculo(str1, str2);
    printf("String minuscula: %s\n", str2);

    return 0;
}


```




# DATA


```c++

////////////////////////////////////////////////////DATA

#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d/\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}

struct tm {
    int tm_sec;   // Indica os segundos de 0 a 59
    int tm_min;   // Indica os minutos de 0 a 59
    int tm_hour;  // Indica as horas de 0 a 24
    int tm_mday:  // Indica os dias do mês de 1 a 31
    int tm_mon;   // Indica os meses do ano de 0 a 11
    int tm_year;  // Indica o ano a partir de 1900
    int tm_wday;  // Indica o dia da semana de 0 (domingo) até 6 (sábado)
    int tm_yday;  // Indica o dia do ano de 1 a 365
    int tm_isdst; // Indica o horário de verão se for diferente de zero
};


```


#CHRONO


```c++


///***Biblioteca Chrono

// é utilizado na versão 11 do C++
#include <chrono>
#include <ctime>

using namespace chrono;

minutes m(1);
seconds s(1);
minutes m=duration_cast<minutes>(s); //converter segundos em minutos para que funcione corretamente

hours
milliseconds
microseconds
nanoseconds

cout<< s.count() << endl; // contagem

using chrono::system_clock; // acessar o relógio do sistema
duration<int,ratio<60*60*24>> um_dia(1);// duraration é o periodo em segundos

system_clock::time_point hoje=system_clock::now(); // criando um ponto no tempo
system_clock::time_point amanha=hoje + um_dia;
system_clock::time_point ontem=hoje - um_dia;

time_t tt;

tt=system_clock::to_time(hoje);
cout << "Hoje: " << ctime(&tt) << endl;

tt=system_clock::to_time(amanha);
cout << "amanhã: " << ctime(&tt) << endl;


//Tempo
steady_clock::time_point t1 = steady_clock::now(); //tempo
cout << "Imprimindo 1500 estrelas: "<<endl;

for (int i=0; i<1500; i++){
	cout <<"*";
}

steady_clock::time_point t2 = steady_clock::now(); // outro tempo

duration<double> tempo = duration_cast<duration<double> > (t2-t1);//duration_cast a conversão para double

cout <<"Tempo de trabalho: "<< tempo.count() << "segundos";


```


# CTIME-TIME

```c++

time_t t;
struct tm*infotempo; // implementado em ctime

time(&t); 
infoTempo=localtime(&t); // receber o tempo decorrido e converter para a estrutura tm

cout << asctime(infoTempo)<<endl; //asctime converte para string

cout<< infoTempo->tm_mday;

////////////////////////////////////////////

//Em utilizar o ctime não é necessário  implementar a struct como no exemplo acima
time_t t;

time(&t);

cout<<ctime(&t)<<endl;

///////////////////////////////// strftime formata a saída


time_t t;
struct tm*infoTempo; // implementado em ctime
char buffer[80];

time(&t); 
infoTempo=localtime(&t); // receber o tempo decorrido e converter para a estrutura tm



strftime(buffer,80, "Hora: %I : %M" , infoTempo);//resultado, tamanho, como eu quero que realize a formatação

cout << buffer<<endl; //asctime converte para string

///
clock_t c; //tempo
size_t tam; //Armazena tamanho
struct tm * stinfo;
time_t t;


```


# ARQUIVOS


```c++

#include <fstream>

//ofstream, ifstream, fstream


//Criar um arquivo

ofstream arquivo;

arquivo.open("impressora.txt");

arquivo << "cfb Cursos";//armazenar no arquivo


arquivo.close();


```

# FUNCOES-LAMBDA

```c++


//Características
/*
	[](){};
	[captura de variáveis]
	(parametros)->tipo_retorno
	{
		corpo da função
	};
*/
//C++ 11

int main(){
	
	auto maior = [](int n1, int n2)->int{
		return(n1>n2)?n1:n2;
		/* O mesmo valor
		if(n1>n2){
			return n1;
		}else{
			return n2;
		}
		*/	
	};
	
	cout<< maior(2,6)<<endl;
	
	///****************************************Variações
	//Utilizando o vector
	
	auto maior = [](vector<int>n)->int{
		auto maior
		for(int x:n){
			m=(m>x)?m:x;
		}
		return m;
	};
	cout<< maior({2,6,10, 45,5,34,17})<<endl;
	
	///************************************Captura de variáveis
	int x1,x2,x3,x4;
	x1=10;
	x2=5;
	x3=2;
	x4=12;
	
	auto soma=[x1,x2,x3,x4]()->int{
		
		return x1+x2+x3+x4;
		
	};
	
	auto maior = [](vector<int>n)->int{
		auto maior
		for(int x:n){
			m=(m>x)?m:x;
		}
		return m;
	};
	cout<< maior({2,6,10, 45,5,34,17})<<endl;
	cout<< soma()<<endl;
	
	return 0;
}


```


# CLASSES-ARMAZENAMENTO


```c++

int soma(int n1, int n2){
	return n1+n2;
}

auto soma(int n1, int n2)->int{//Retorno da função
	return n1+n2;
}

int main(){
	
	auto num=0;//variavel de qualquer tipo, Na inicialização determinar o tipo de variável,não se preocupar em declarar
	auto nome = "Bruno";
	auto valor=10.5;
	
	auto res=soma(10,5);
	
	
	
	///Utilizando o vector
	
	vector<int>v{10,20,30,40,50,60,70};
	
	for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
		cout<<*it<<endl;
	}
	
	//Declaração com auto
	
	for(auto it=v.begin(); it!=v.end();it++){
		cout<<*it<<endl;
	}
	
	register int cont; //Armazenar em um registrador e não na memória, variaveis que precisam ser acessada rapidamente-contador
	for(cont=0;cont<=10;cont++){
		//exemplo
	}
	
	//Ele retornará 1 dessa maneira conforme está declarada***Static Armazena a variavel na memória e usa o mesmo endereço
	void somador(){
		int i=0;
		i++;
		cout<<i<<endl;
	}

	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();


	void somador(){
		static auto i=0;
		i++;
		cout<<i<<endl;
	}

	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	somador();
	
	return 0;
}
      
 ////LOOP FOR ******************************************************************************************************** C 11 // Elementos inteiros

//string mome="Bruno";
const char* nome="Bruno";//Declaração do string moderno c++ não se aplica

int x[10]{0,1,2,3,4,5,6,7,8,9};
vector<int> n{1,2,3,4,5};

for(auto i:n){
	cout<<i<<endl;
}

//tradicional
for(int i=0;i<=10;i++){
	cout<<x[i]<<endl;
}

for(int i=0; i<=sizeof(nome);i++){
	cout<<nome[i]<<endl;
	
}

//for com base em intervalo // ou for range declaration
for(int i:x){//cria uma variavel e passa a coleção
	cout<< i <<endl;
}



///extern*************************************************************************************C11 //Acessar uma variável em outro arquivo externo
//criar um outro arquivo .cpp na mesma pasta para realizar o teste


//auxiliar
using namespace std;
extern int num;

void impNum(){
	cout<<num<<endl;
}



//main
void impNum();
int num {10};

int main(){
	impNum();
	
	
	return 0;
}

//Conteiner Pair -- Par de Dados <int><string> ou <int><class> ou <int><int>**************************************************************
//Semelhante ao vector armazena 1 elemento
#include <utility>

pair <int,string> par(10,"Bruno");//inicialização direta
cout<<par.first << "-" <<par.second <<endl;

//Adicionando valores
pair <int,string> par;
par.first=100;
par.second="Bruno";

//formato de Vetor
const int tam=3;
pair <int,string> par[tam];

par[0].first=100;
par[0].second="Bruno";

par[1].first=200;
par[1].second="nome";

par[2].first=300;
par[2].second="nome2";


cout<<par[0].first << "-" <<par[0].second <<endl;

//Outra maneira

par[0]=make_pair(10,"Bruno");
par[1]=make_pair(200,"nome");
par[2]=make_pair(300,"nome2");

for(int i=0;i<tam;i++){
	cout<<par[i].first << "-" <<par[i].second <<endl;	
}


//Pair com três dados
pair<int,par<string,double>>par[tam];
par[0]=make_pair(10,make_pair("mouse",10.55));
par[1]=make_pair(20,make_pair("teclado",50.55));
par[2]=make_pair(30,make_pair("monitor",1210.55));

for(int i=0;i<tam;i++){
	cout<<par[i].first << "-" <<par[i].second.first<<" - "<<par[i].second.second <<endl;	
}

//utilizando vector
#include <vector>

vector<pair<int,string>>prod;

prod.push_back(make_pair(10,"mouse"));
prod.push_back(make_pair(20,"teclado"));

for(int i=0;i<prod.size();i++){
	cout<<prod[i].first << "-" <<prod[i].second <<endl;	
}

for(auto i:prod){
	cout<<i.first << "-" <<i.second <<endl;	
}


//Container Map******************************************************************************************************
#include <map>


map<int, string>prod;//sem precisar de associação numero de elementos por exemplo

//Outro exemplo de declaração
//map<char,string>prod;
//prod['a']="Mouse";

//chave[0] X Valor
prod[0]="mouse";
prod[1]="teclado";
prod[2]="Monitor";

for(int i=0;i<3;i++){
	cout<<prod[i]<<endl;
}

//Interator criar o inteirator

for(auto it=prod.begin();it!=prod.end();i++){
	cout<<it->first<<endl;//imprimir a chave
	cout<<it->second<<endl;//imprimir o valor
}

for(auto it:prod){
	cout<<it.first<<endl;
}

// Inserção usando o insert

prod.insert(pair<int,string>(0,"Mouse"));//informar um pair exigencia do insert
prod.insert(pair<int,string>(1,"Teclado"));
prod.insert(pair<int,string>(2,"Monitor"));

for(auto it:prod){
	cout<<it.first<<" - "<<it.second<<endl;
}

//Deletar o elemento - Esse valor não é o elemento da posição 2, ele é a chave, se alterar o valor para 10 ele não vai encontrar

prod.erase(2);

//Deletar tudo
prod.clear();

//Procura uma chave - criando um iterator para map
map<int, string>::iterator itmap;

itmap=prod.find(2);

if(itmap==prod.end()){
	cout<<"Produto nao encontrado"<<endl;
}else{
	cout<<"Produto em estoque"<<endl;
	cout<<"Codigo: "<<itmap->first<<"Produto: "<<itmap->second<<endl;
}

//Deletar uma faixa de elemntos
prod.erase(prod.begin(), prod.find(1));//Pegando do inicio begin
prod.erase(prod.find(0), prod.find(2)); 

```



# PONTEIROS-INTELIGENTES


```c++

/////////////////////PONTEIROS INTELIGENTES***********************************************************smart points
//Asseguram a exclusão do objeto, a memória é liberada para atualização

//Ponteiros

//revisão
int *pnum;
int num;

num=10;
pnum=&num;

cout<<*pnum<< "-"<<pnum<<endl;

delete pnum;

//***************************

int *pnum=new int();

*pnum=10;

cout<<*pnum<< "-"<<pnum<<endl;

delete pnum;


//***************************Smart
#include <memory>

unique_ptr<int>pnum(new int());

*pnum=10;

cout<<*pnum<< "-"<<&pnum<<endl;

//Ponteiro compartilhado

shared_ptr<int>pnum(new int());
shared_ptr<int>pnum2=pnum);

//String ponteiro tradicional e smart

string* str=new string("Cursos");
cout<<*str<< "-tamanho"<<str->size()<<endl;
delete str;

unique_ptr<string>str(new string("Cursos"));
cout<<*str<< "-tamanho"<<str->size()<<endl;

//Classes

class Carro{
	
	public:
	int vel=0;
	int getVel(){
		return vel;
	}
	void setVel(int v){
		this->vel=v;
	}
	
};

//tradicional
Carro *c1=new Carro();

cout<<"Velocidade"<<c1->getVel()<<endl;
delete c1;

//Com Smart

unique_ptr<Carro>c1(new Carro);
cout<<"Velocidade"<<c1->getVel()<<endl;

//Shared Smart
shared_ptr<Carro>c1(new Carro);
shared_ptr<Carro>c2=c1;
c1->setVel(10);
c2->setVel(5);
cout<<"Velocidade"<<c1->getVel()<<endl;//ele terá o mesmo valor alterando em todos por que está compartilhando o ponteiro
cout<<"Velocidade"<<c2->getVel()<<endl;


```



# FOREACH

```c++

////////////////////Foreach*************************************************************************/////////////////////////////// C++11

//Uma função que recebe 3 parametros, posição inicial do container(vector), posição final, função qe opera os elementos

#include <vector>
#include <algorithm>

vector<int>n{0,1,2,3,4,5,6,7,8,9};

//for em intereitor e intervalo

vector<int>::iterator it;

for(auto it=n.begin();it!=n.end();it++){
	cout<<*it<<endl;
}

for(it:n){
	cout<<it<<endl;
}
//***************************
//foreach junto com a função lambda, for(pontoinicial,pontofinal, função lambda o que vai fazer com esses valores)

vector<int>n{0,1,2,3,4,5,6,7,8,9};

for_each(n.begin(),n.end(),[](int num){

	cout<< num <<endl;
});

for_each(n.begin(),n.end(),[](int num){//Importante não altera o valor do vector
	num+=10;
	cout<< num <<endl;
});



```



# XML


```c++


using System;  
using System.IO;  
using System.Xml;  


public class Sample  
{  
    public static void Main()  
    {  
        // Create the XmlDocument.  
        XmlDocument doc = new XmlDocument();  
        doc.LoadXml("<book genre='novel' ISBN='1-861001-57-5'>" +  
                   "<title>Pride And Prejudice</title>" +  
                  "</book>");  
 
        // Save the document to a file.  
        doc.Save("data_.xml"); 

        
    }  
}  

//XML************************************************************************************************************************************

using System;  
using System.IO;  
using System.Xml;  


public class Sample  
{  
    public static void Main()  
    {  
        int i=0;
        //List<string> InfoArq = new List<string>();
        string[] arquivos = Directory.GetFiles(@"C:\Users\adm\Documents\Docs_XML\", "*.xml");
        
        while (i == arquivos.Length)
        {
            
           
        // Create the XmlDocument.
          
        XmlDocument doc = new XmlDocument();  
        
        doc.Load(@"C:\Users\adm\Documents\Docs_XML\data.xml");
        string CaminhodoArquivo = @"C:\Users\adm\Documents\Docs_XML\data.xml";
        //Ler o arquivo XML
        XmlTextReader xmlReader = new XmlTextReader(CaminhodoArquivo);
        while (xmlReader.Read())
        {
            switch (xmlReader.NodeType)
            {
                case XmlNodeType.Element:
                    Console.WriteLine("<" + xmlReader.Name + ">");
                    Console.WriteLine("<" + xmlReader.Name + ">"+Environment.NewLine);
                    break;
                case XmlNodeType.Text:
                    Console.WriteLine(xmlReader.Value);
                    Console.WriteLine(xmlReader.Value+ Environment.NewLine);
                    break;
                case XmlNodeType.EndElement:
                    Console.WriteLine("<" + xmlReader.Name + ">");
                    Console.WriteLine("<" + xmlReader.Name + ">" + Environment.NewLine);
                    break;
            }
        }
    
        // Save the document to a file.  
        doc.Save(@"C:\Users\adm\Documents\Docs_XML\data\data_.xml"); 
        
        i++;
        }
    }  
}
//xml reader*******************************************************************************************************************************
using System;  
using System.IO;  
using System.Xml;  
public class Sample  
{  
    public static void Main()  
    {  
        
        string URLString = @"C:\Users\adm\Documents\doc\data\Produtos.xml";
        XmlTextReader reader = new XmlTextReader (URLString);
        while (reader.Read())
        {
            switch (reader.NodeType)
            {
                case XmlNodeType.Element: // The node is an element.
                    Console.Write("<" + reader.Name);
                    Console.WriteLine(">");
                    break;
                case XmlNodeType.Text: //Display the text in each element.
                    Console.WriteLine (reader.Value);
                    break;
                case XmlNodeType. EndElement: //Display the end of the element.
                    Console.Write("</" + reader.Name);
                    Console.WriteLine(">");
                    break;
            }
        }
    }  
}  
					       
					       
					       
					       
//Contar numero de Dígitos
			
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cerr;
using std::endl; using std::string;
using std::to_string;
template<typename T>
size_t countDigits(T n)
{
    string tmp;
    tmp = to_string(n);
    return tmp.size();
}
int main() {
    int num1 = 1234567;
    int num2 = -1234567;
    cout << "number of digits in " << num1 << " = " << countDigits(num1) << endl;
    cout << "number of digits in " << num2 << " = " << countDigits(num2) << endl;
    exit(EXIT_SUCCESS);
}					       
					       
					       				       

```



