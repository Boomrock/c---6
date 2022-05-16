// с++6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Triangle.h"
#include "NewTriangle.h"

using namespace std;
void createTriangle(Triangle&);
int main()
{
	setlocale(LC_ALL, "Russian");
	bool exit = true;
	Triangle tr;
	NewTriangle newTriangle = tr;
	point t;
	int forSwitch, lineSegmentNumber;
	while (exit) {
		cout << "1. создать треугольник\n";
		cout << "2. проверка точки на пренадлженость к границам\n";
		cout << "3. длина одной из сторон\n";
		cout << "4. проверка пересечения с ординатой\n";
		cout << "5. проверка пересечения с абцисой \n";
		cout << "6. вывод координат в консоль\n";
		cout << "7. поворот фигуры(6 лабораторная)\n";
		cout << "8. перенос центра(6 лабораторная)\n";

		cout << "9. выход из программы \n";

		cout << "введите число\n";
		cin >> forSwitch;
		system("cls");

		switch (forSwitch)
		{
		case 1:
			createTriangle(tr);
			break;
		case 2:
			cout << "введите координаты точки: \n";
			cout << "t.x: "; cin >> t.x; cout << " t.y:"; cin >> t.y;
			if (tr.PointOnBorder(t)) {
				cout << "точка прeнадлежит границам \n";
			}
			else
			{
				cout << "точка не пренадлежит границам \n";
			}
			break;

		case 3:
			cout << "длину какой стороны найти ab - 1, ac - 2, bc - 3\n";
			cin >> lineSegmentNumber;
			cout << tr.GetLenght(lineSegmentNumber)<<"\n";
			break;
		case 4:
			if (tr.CrosseOrdinate()) {
				cout << "пересекает \n";
			}
			else
			{
				cout << "не пересекает \n";
			}
			break;
		case 5:
			if (tr.CrosseAbscissa()) {
				cout << "пересекает \n";
			}
			else
			{
				cout << "не пересекает \n";
			}
			break;
		case 6:
			tr.WtiteInConsole();
			break;
		case 7:
			

			break;
		case 8:
			exit = false;
			break;
		case 9:
			exit = false;
			break;
		default:
			break;
		}




	}

}

void createTriangle(Triangle& triangle) {
	double angA, angB;
	point a,b;

	cout << "введите координаты точек: \n";
	cout << "a.x: "; cin >> a.x; cout << "a.y:"; cin >> a.y;
	cout << "b.x: "; cin >> b.x; cout << "b.y:"; cin >> b.y;
	cout << "\n";
	cout << "введите углы в пи: \n";
	cout << "Угол для точки а: "; cin >> angA;
	cout << "\nУгол для точки b:"; cin >> angB;
	Triangle tr(a, b, angA, angB);
	triangle = tr;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
