#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file1("1.txt");
    ifstream file2("2.txt");
    ofstream file3("3.txt");

    if (!file1.is_open() || !file2.is_open() || !file3.is_open()) {
        cerr << "Ошибка открытия файлов!" << endl;
        return 1;
    }

    string line;

    // Копируем содержимое 1.txt
    while (getline(file1, line)) {
        file3 << line << endl;
    }

    // Копируем содержимое 2.txt
    while (getline(file2, line)) {
        file3 << line << endl;
    }

    file1.close();
    file2.close();
    file3.close();

    cout << "Файл 3.txt успешно создан." << endl;

    return 0;
}