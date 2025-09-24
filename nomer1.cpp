// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
// 	setlocale(LC_ALL, "rus");
// 	const int a = 6;
// 	int array[a];
// 	cout << "Введите 6 целых чисел:" << endl;
// 	for (int i = 0; i < 6; i += 2) {
// 		cout << "Введите координаты вершины х :"<<"вершины:";
// 		cin >> array[i];
// 		cout << "Введите координаты вершины y :"<<"вершины:";
// 		cin >> array[i + 1];
// 	}
// 	double s = 0.5 * abs(array[0] * (array[3] - array[5]) + array[2] * (array[5] - array[1]) + array[4] * (array[1] - array[3]));
// 	cout << "Площадь треугольника:" << " " << s << endl;
// 	return 0;
// }