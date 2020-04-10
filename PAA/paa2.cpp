#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n,d;
	while(scanf("%d%d",&n,&d) == 2 && (n || d)){
		string num;
		string copia;
		cin >> num;
		int tamanho = 0;
		int contador = 0;
		for (auto i = num.begin(); i != num.end(); i++){
			if (copia.empty())
			{
				copia.push_back(*i);
				++tamanho;
			}
			else{
				while (!copia.empty())
				{
					if(d <= contador){
						break;
					}
					if(*i > copia.back()){
						copia.pop_back();
						--tamanho;
						++contador;
					}
					else{
						break;
					}
				}
				if(tamanho < n-d){
					copia.push_back(*i);
					++tamanho;
				}
				
			}
			
		}
		cout << copia << endl;
	}
	return 0;
}
