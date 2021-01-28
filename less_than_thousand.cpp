#include <iostream>
int main(){
	int a;
	std::cout << "Podaj liczbe: "; std::cin >> a;
	std::cout << a << (a>1000 ? " jest wieksze niz 1000\n" : " jest mniejsze niz 1000\n");
	return 0;
}
