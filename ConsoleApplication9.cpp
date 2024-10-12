#include <iostream>
#include <string>
#include <filesystem>
using namespace std;

namespace fs = filesystem; 
string holz(const string& fiolos) {
    fs::path path(fiolos);
    return path.has_parent_path() ? path.parent_path().string() : "";
}

string getname(const string& fiolos) {
    fs::path path(fiolos);
    return path.has_parent_path() ? path.parent_path().filename().string() : "";
}

string gesfind(const string& fiolos) {
    fs::path path(fiolos);
    return path.filename().string();
}

string kolhen(const string& fiolos) {
    fs::path path(fiolos);
    return path.has_extension() ? path.extension().string() : "";
}

string kolhty(const string& fiolos) {
    fs::path path(fiolos);
    return path.stem().string();
}

int main() {
    string fiolos = "A:\\Step\\C++\\lesson_03\\Docs\\Less03.docx";

    cout << "a) Шлях без імені файлу: " << holz(fiolos) << endl;
    cout << "b) Ім'я останньої папки: " << getname(fiolos) << endl;
    cout << "c) Ім'я файлу з розширенням: " << gesfind(fiolos) << endl;
    cout << "d) Розширення файлу: " << kolhen(fiolos) << endl;
    cout << "e) Ім'я файлу без розширення: " << kolhty(fiolos) << endl;

    return 0;
}
