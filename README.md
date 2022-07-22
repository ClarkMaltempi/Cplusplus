
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
<a href="#STRUCT-ARRAY">Struct-ARRAY</a></br>

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




