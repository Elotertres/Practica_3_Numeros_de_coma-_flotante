#include <iostream>
#include <conio.h>

using namespace std;

 void muestraHexa();
 void comparaIgual();
 void Suma();

int main(){
	
	int opc;
	float ValorReal,valor;
	do{
		
		cout<<"**************************************************************************"<<endl;
		cout<<"*******************Practica 3. Numeros de coma flotante*******************"<<endl;
		cout<<"**************************************************************************"<<endl;
		cout<<endl;
		cout<<"Seleccione su opcion"<<endl;
		cout<<"1.-Inicar su programa"<<endl;
		cout<<"2.-Creditos"<<endl;
		cout<<"3.-Salir"<<endl;
		scanf("%d",&opc);
		system("CLS");
		
		switch(opc){
			
			case 1:
			
			muestraHexa();
			comparaIgual();
			Suma();	
			
			system ("pause");
			system("cls");
			break;
				
			case 2:
				
			system("CLS");
			cout<<"Universidad Autonoma de Aguascalientes"<<endl;
			cout<<"**********************************************************"<<endl;
			cout<<"MAESTRA:"<<endl;
			cout<<"Dra. Aurora Torres Soto"<<endl;
			cout<<"Alumno:                               ID:"<<endl;
			cout<<"Juan Pablo Martínez Rocha              243645"<<endl;
			cout<<"**********************************************************"<<endl;
			system("pause");
			system("CLS");
			break;
					
		}
		
	}while(opc!=3);
		
}

 void muestraHexa(){
 	
 	int rem,enteros,temp,ent[100],zero,cont,temp2;
 	float ValorReal;
 	cout<<"Introduzca su valor real"<<endl;
	scanf("%f",&ValorReal);
	
	
	
				enteros=ValorReal;
				temp=enteros;
				
				for(int i; i<100;i++){

					rem=temp%16;
					temp=temp/16;
						
					ent[i]=rem;
			
					if(rem==0){
						zero++;
						if(zero>2){
							cont=i;
							i=100;
						}
					}	
				}
				cout<<"Su numero convertido a entero es:"<<endl;
				cout<<enteros<<endl;
				cout<<"Su numero en Hexadecimal es:"<<endl;
				
				for(cont;cont>=0;cont--){
				
				switch(ent[cont]){
					case 10:
						cout<<"A";
						break;
					case 11:
						cout<<"B";
						break;
					case 12:
						cout<<"C";
						break;
					case 13:
						cout<<"D";
						break;
					case 14:
						cout<<"E";
						break;
					case 15:
						cout<<"F";
						break;
					default:
					cout<<ent[cont];		
					
				}
						
	
				}
				cout<<endl;
	
	 
}

void comparaIgual(){
	cout<<"A continuacion se sumaran los numeros: 20.08 y 2.01 y se determinara si el resultado es 22.09"<<endl;
	float resultado;
	
	resultado = 20.08+20.1;
	cout<< resultado<<endl;
	
	if(resultado==22.09){
		cout<<"El resultado es igual a 22.09"<<endl;
		
	}else{
		cout<<"El resultado es diferente"<<endl;
		
	}	
	
	
	
}

void Suma(){
	cout<<"A continaucion usando una variable float se realizara la suma de 1x10-5 100 millones de veces"<<endl;
	
	float resultado;
	
	for(int i=0;i<100000000;i++){
		
		resultado = resultado + 0.00001;
		
	}
	cout<< "Su total es usando 0.00001 es:"<<resultado<<endl;
	
	
}
