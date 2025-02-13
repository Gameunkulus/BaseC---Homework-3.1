// Homework-3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Calculator {
public:

    double num1;
    double num2;

    double add() {
        double inum = num1 + num2;
        return (inum);
    };

    double multiply() {
        double inum = num1 * num2;
        return (inum);
    };
    double subtract_1_2() {
        double inum = num1 - num2;
        return (inum);
    };
    double subtract_2_1() {
        double inum = num2 - num1;
        return (inum);
    };
    double divide_1_2() {
        double inum = num1 / num2;
        return (inum);
    };
    double divide_2_1() {
        double inum = num2 / num1;
        return (inum);
    };

    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    };

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
        
    };

};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    Calculator calc;
    double num1 , num2;
    while (true) {

        cout << "Введите num1: " << endl;
        cin >> num1;

        while (!calc.set_num1(num1)) {
            cout << "Неверный ввод!" << endl;
            cout << "Введите num1: " << endl;
            cin >> num1;
        }
        
        cout << "Введите num2: " << endl;
        cin >> num2;

        while (!calc.set_num2(num2)) {
            cout << "Неверный ввод!" << endl;
            cout << "Введите num2: " << endl;
            cin >> num2;
        }
        
        cout << "num1 + num2 = " << calc.add() << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
        cout << "num1 * num2 = " << calc.multiply() << endl;
        cout << "num1 / num2 = " << calc.divide_1_2() << endl;
        cout << "num2 / num1 = " << calc.divide_2_1() << endl;
    }
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
