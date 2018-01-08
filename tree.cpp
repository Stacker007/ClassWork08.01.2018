/*3.	

Нарисовать равнобедренный треугольник из символов 
^. Высоту выбирает пользователь. 
Например: высота = 5, на экране
____^	4-1
   ^^^  3-3
  ^^^^^ 2-5
 ^^^^^^^ 1-7
^^^^^^^^^ 0-9
*/

#include <iostream>

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int space, row , birdNow=1;
	do {
		cout << "Введите количество строк (высоту) ";
		cin >> row;
		if (row<1) cout << "Некорректная высота!\n";
	} while (row<1);
		
	for (int i = (row - 1); i >= 0; i--) {
		
		for (int k = i; k > 0; k--) cout << " ";
		for (int k = birdNow; k > 0; k--) cout << "^";
		birdNow += 2;
		cout << endl;
	}
	
