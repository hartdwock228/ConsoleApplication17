#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int width, height;
    cout << "Введите ширину и высоту рамки: ";
    cin >> width >> height;

    for (int i = 0; i < width; ++i) {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < height - 2; ++i) {
        cout << "|";
        for (int j = 0; j < width - 2; ++j) {
            cout << " ";
        }
        cout << "|" << endl;
    }
    if (height > 1) {
        for (int i = 0; i < width; ++i) {
            cout << "-";
        }
        cout << endl;
    }


}
