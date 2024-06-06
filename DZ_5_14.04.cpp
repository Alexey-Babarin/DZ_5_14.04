#include <iostream>
#include <string>
#include <locale> // подключаем библиотеку для работы с локалью

using namespace std;

class STRING 
{
private:
    string str;

public:
    // Конструктор по умолчанию, создающий строку длиной 80 символов
    STRING() : str(80, ' ') {}

    // Конструктор, создающий строку произвольного размера
    STRING(int size) : str(size, ' ') {}

    // Конструктор, создающий строку и инициализирующий ее строкой, введенной с клавиатуры
    STRING(string inputStr) : str(inputStr) {}

    // Деструктор класса STRING
    ~STRING() {}

    // Метод для ввода строки с клавиатуры
    void input() 
    {
        cout << "Введите строку: ";
        getline(cin, str);
    }

    // Метод для вывода строки на экран
    void output() 
    {
        cout << "Строка: " << str << endl;
    }
};

int main() 
{
    setlocale(LC_ALL, "Russian"); // устанавливаем русскую локаль

    STRING str1; // Создаем объект класса STRING с использованием конструктора по умолчанию
    str1.input(); // Вводим строку с клавиатуры
    str1.output(); // Выводим строку на экран

    STRING str2(50); // Создаем объект класса STRING с использованием конструктора с заданным размером
    str2.input();
    str2.output();

    STRING str3("Hello, world!"); // Создаем объект класса STRING с инициализацией заданной строкой
    str3.output();

    return 0;
}