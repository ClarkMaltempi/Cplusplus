#ifndef REC_H_INCLUDED
#define REC_H_INCLUDED
#include <vector>
#include <string.h>

using namespace std;

struct Recursiva{

    int valn;
    int valx;
    int valy;

//fatorial***************************

float fr(int n){

if(n==0){
	return 1;
}
else{
	return n*fr(n-1);
	}
}

//fibonacci**************************

float fb(int n){
    if (n<=2)
        return 1;
    else
        return fb(n-1)+fb(n-2);
}

//mdc********************************

float mdc(int x,int y){

	if(y==0){
		return x;
	}else
        if(x < y){
            return mdc(y,x);
        }else{
            return mdc(x-y,y);
        }
}

//somatório***************************

float somatoria(float m, int n)
{
 if (n == m)
 return m;
 else{
   if(m<n){
    return somatoria(m,n-1)+n;
   }
 }
}

//somatório***************************

float somatoriaD(float m, int n)
{
 if (n == 0)
 return 1;
 else
 return m+somatoria(m+1,n);
}


//potencia**************************

float pot(float x, int n)
{
 if (n == 0)
  return 1;
 	else
 	 return x*pot(x,n-1);
}

//absoluto***************************

int Dig(int n){
	if(abs(n)<=9){
		return 1;
	}else if(abs(n)>9){
		return 1+Dig(n/10);
	}
}


};



























#endif // REC_H_INCLUDED
