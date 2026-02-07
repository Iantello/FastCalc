#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <limits>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	while (true) {
		system("cls");

		string input;
		double num1, num2;
		char operation;

		cout << "Введите выражение через пробел (exit для выхода): " << endl;
		cin >> input;

		if (input == "exit") {
			cout << "Завершение..." << endl;
			break;
		}

		if (input == "ГОЙДА") {
			cout << "ГОЙДА! Братья мои! ГОЙДА!!!" << endl;

			cin.clear();
			cin.ignore(10000, '\n');

			system("pause");
			continue;
		}

		try {
			num1 = stod(input);
		}
		catch (...) {
			cout << "Ошибка: Первое значение должно быть числом!" << endl;

			cin.clear();
			cin.ignore(10000, '\n');

			system("pause");
			continue;
		}

		if (!(cin >> operation >> num2)) {
			cout << "Ошибка: Неверный формат! Введите: ЧИСЛО ОПЕРАЦИЯ ЧИСЛО" << endl;

			cin.clear();
			cin.ignore(10000, '\n');

			system("pause");
			continue;
		}

		switch (operation) {
		case '+':
			cout << "Результат: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "Результат: " << num1 - num2 << endl;
			break;
		case '*':
			cout << "Результат: " << num1 * num2 << endl;
			break;
		case '/':
			if (num2 != 0) {
				cout << "Результат: " << num1 / num2 << endl;
			}
			else {
				cout << "Ошибка: Деление на ноль!" << endl;
			}
			break;
		default:
			cout << "Ошибка: Неверная операция!" << endl;
			break;
		}

		cin.ignore(10000, '\n');
		cout << "Нажмите Enter для продолжения..." << endl;
		cin.get();
	}

	return 0;
}
