#include <iostream>

using namespace std;

class SolutionThirtyFive{
public:
	int findNthDigit(int n){
		long long digit=9;
		int first=1;
		int length=1;
		//si n es mayor que el numero de digitos en el grupo actual
		//entonces debemos estar en el otro grupo de numeros, movernos
		while(n>digit*length){
			n=n-digit*length;
			length++;
			first=first*10;
			digit=digit*10;
		}
		//aqui encontramos el numero exacto en el que está el n-esimo digito
		//da cuantos numeros debes contar dentro del grupo para encontrar
		//el numero correcto
		first=first+(n-1)/length;
		string str=to_string(first);
		//(n-1)%length te dice que posición dentro del numero es el 
		//n-ésimo dígito
		return str[(n-1)%length]-'0';
	}
};

int main(){
	cout<<"cool!"<<endl;
	return 0;
}