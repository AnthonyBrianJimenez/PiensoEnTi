#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	srand(time(0));	
	int numero,cont=0,max,min;
	
	cin>>max;
	cin>>min;
	int arreglo[max],aux[max];
	
	do{
		numero=rand()%(max-min+1)+min;
		arreglo[cont] = numero;
		for(int x=0;x<=cont;x++){
			for(int y=0;y<=cont;y++){
			if(arreglo[cont]==aux[y]){
				numero=rand()%(max-min+1)+min;
				arreglo[cont] = numero;
			}
		}
		}
		aux[cont]=numero;
		cont++;
	}while(cont!=max);
	
	cout<<"\nAleatorios sin repetir"<<endl;
	for(int i=0;i<max;i++){
		cout<<i+1<<"- "<<arreglo[i]<<endl;
	}
	return 0;
}
