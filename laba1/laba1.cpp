#include <iostream>
using namespace std;
// int main()
// {
//     cout << "Hello World!";
// }

// int main() {
// 	int a = 10;
// 	int*p = &a;
// 	cout: << p << " - " << p << '/n';
// } //Инициализация и вывод указателя через взятие другой переменной


// int main() {
// 	int* p = new int{ 11 };
// 	int* p1 = p;
// 	cout << p << " " << *p1 << '\n';
// 	return 0;
// } // через другое значение другого указателя

int main() {
	int a = 228;
	int* p = &a;
	int** p1 = &p;
	int*** p2 = &p1;

	cout << "**: " << p2 << " - " << *p2 << '\n';
  

}

