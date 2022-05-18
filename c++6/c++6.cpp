// с++6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "NewTriangle.h"


using namespace std;
NewTriangle* createTriangle();

int main()
{
	setlocale(LC_ALL, "Russian");
	bool exit = false;
	NewTriangle* newTriangle = NULL;
	point t, center;
	double angle;
	int forSwitch, lineSegmentNumber;

	while (!exit) {

		cout << "1. создать треугольник\n";
		cout << "2. проверка точки на пренадлженость к границам\n";
		cout << "3. длина одной из сторон\n";
		cout << "4. проверка пересечения с ординатой\n";
		cout << "5. проверка пересечения с абцисой \n";
		cout << "6. вывод координат в консоль\n";
		cout << "7. поворот фигуры(6 лабораторная)\n";
		cout << "8. перенос центра(6 лабораторная)\n";
		cout << "9. возврат центра(6 лабораторная)\n";
		cout << "10. выход из программы \n";

		cout << "введите число\n";
		cin >> forSwitch;
		system("cls");

		switch (forSwitch)
		{
		case 1:
			newTriangle = createTriangle();
			break;
		case 2:
			if (newTriangle) {
				cout << "введите координаты точки: \n";
				cout << "t.x: "; cin >> t.x; cout << " t.y:"; cin >> t.y;
				if (newTriangle->PointOnBorder(t)) {
					cout << "точка прeнадлежит границам \n";
				}
				else
				{
					cout << "точка не пренадлежит границам \n";
				}
			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;

		case 3:
			if (newTriangle) {
				cout << "длину какой стороны найти ab - 1, ac - 2, bc - 3\n";
				cin >> lineSegmentNumber;
				cout << newTriangle->GetLenght(lineSegmentNumber) << "\n";
			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;

		case 4:
			if (newTriangle) {
				if (newTriangle->CrosseOrdinate()) {
					cout << "пересекает \n";
				}
				else
				{
					cout << "не пересекает \n";
				}
			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;

		case 5:
			if (newTriangle) {
				if (newTriangle->CrosseAbscissa()) {
					cout << "пересекает \n";
				}
				else
				{
					cout << "не пересекает \n";
				}

			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;
		case 6:
			if (newTriangle) {
				newTriangle->WtiteInConsole();

			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;
		case 7:
			if (newTriangle) {
				cout << "введите угол: ";
				cin >> angle;
				newTriangle->Rotate(angle);
				cout << "перевернуто";
			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;
		case 8:
			if (newTriangle) {
				cout << "введите новый центр фигуры: \n";
				cout << "x:";
				cin >> center.x;
				cout << "у:";
				cin >> center.y;
				newTriangle->SetCenter(center);
				cout << "перемещено";
			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;
		case 9:
			if (newTriangle) {
				newTriangle->ResetCenter();
				cout << "центр возвращен";
			}
			else
			{
				cout << "треугольник не создан" << endl;
			}
			break;

		case 10:
			exit = true;
			break;
		default:
			break;
		}




	}
	delete newTriangle;
}

NewTriangle* createTriangle() {
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
	return new NewTriangle(a, b, angA, angB);

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
