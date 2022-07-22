
# Cplusplus

</br>
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

<a href="#sobre">Sobre</a></br>
<a href="#pre-requisitos">Roadmap</a></br>
<a href="#Inserindo-Valores">Inserir</a></br>
<a href="#ENUM">Enum</a></br>
<a href="#STRUCT">Struct</a></br>
<a href="#STRUCT-ARRAY">Struct-Array</a></br>
<a href="#PONTEIROS">Ponteiros</a></br>
<a href="#PONTEIROS-ARRAY">Ponteiros-Array</a></br>
<a href="#ALOCACAO-DINAMICA">Alocação-Dinamica</a></br>
<a href="#RECURSIVAS">funções-Recursivas</a></br>

# Sobre
<p>Este repositorio contem mini projetos desenvolvidos para manipulação da linguagem c++</p>



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













