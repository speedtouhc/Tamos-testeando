#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct nuevaestructura{
		int a;
}estructura,*puntero;
int main(int argc, char** argv) {
	estructura.a=12;
	puntero = &estructura;
	cout<<puntero<<endl;
	cout<<puntero->a<<endl;
	cout<<&estructura;
	return 0;
}
