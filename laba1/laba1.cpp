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
// } //Инициализация 


// int main() {
// 	int* p = new int{ 11 };
// 	int* p1 = p;
// 	cout << p << " " << *p1 << '\n';
// } // через другое значение другого указателя

// int main() {
// 	int a = 228;
// 	int* p = &a;
// 	int** p1 = &p;
// 	int*** p2 = &p1;

// 	cout << "***: " << p2 << " - " << *p2 << '\n';
// 	cout << "**:" << p1 << " - " << *p1 << '\n';
// 	cout << "*:" << p << " - " << *p << '\n';
// } // Разыменовка 

struct GAME
{
    int win;
    int defeat;
    int draw;

};

int main(void) {
    struct GAME p;
    p.win = 4;
    p.defeat = 2;
    p.draw = 6;
    cout << "GAME win: " << p.win << endl;
    cout << "GAME defeat: " << p.defeat << endl;
    cout << "GAME draw: " << p.draw << endl;
    
    return 0;

}

