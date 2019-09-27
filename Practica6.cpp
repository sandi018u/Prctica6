#include <iostream>
#include<conio.h>
using namespace std; 

void cambiar(int, int);	//Declaramos la función que se ocupara en el paso por valor 
void intercambiar(int &i , int &j ); //Declaramos la función que se ocupara en el paso por referencia
int factorial(int n);  //Declaramos la función que se ocupara para la recursividad 

int a = 2,b = 3; //Los valores definidos a ocupar en el paso por valor y paso por referencia 
int n, r; //Se declara lo que se  ocupara en la recursividad 
int s;

int main(void){

	do{
	cout<<"\n Ingresa una opcion sobre los datos: \n";
	cout<<"1: Paso por referencia : \n";
	cout<<"2: Paso por valor : \n";
	cout<<"3: Recursividad : \n";
	
	cin >> s;
        switch(s)
        {
            case 1:
   			cout<<"Valores originales  a = "<<a<<" y b = "<<b<<endl<<endl;
    			cambiar(a,b);//Llmado a la función cambiar
    			cout<<"Luego de la funcion a = "<<a<<" y b = "<<b<<endl<<endl;
            //Lo que se hizo en el paso por valor fue que d ellos valores ya declarados solo se muestran el valor pidiendo que los regrese después de la función cambiar  
            break;
            case 2: 
   			 cout<<"Valores originales  a = "<<a<<" y b = "<<b<<endl<<endl;
    			intercambiar(a,b); //Llmado a la función intercambiar
    			cout<<"Luego de la funcion a = "<<a<<" y b = "<<b<<endl<<endl;
            //Lo que se hizo en el paso por referencia es muy similar al del paso por valor solo que en esta se le agrega el '&'
            break;
            case 3:
            	cout << "FACTORIAL : Escribe un numero : ";
   				cin >> n;
   				r=factorial(n);
   				cout << n << "! = " << r << endl;	
            break;	
            default: 
            cout << "Opcion desconocida!" << endl;
            break;
		}    
    } while (s != 4); 
	getch();
	return 0;
}

void cambiar(int i, int j)
{
    int z;
    z = i;
    i = j;
    j = z;
}

void intercambiar(int &i, int &j)
{
    int z;
    z = i;
    i = j;
    j = z;
}

int factorial(int n) {
   if(n < 0) return 0;
   else if(n > 1) return n*factorial(n-1); // Recursividad: n>1
   return 1; // Condicion para n == 1 y n == 0 
}


