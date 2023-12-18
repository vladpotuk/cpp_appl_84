#include <iostream>
#include <fstream>
#include "Reservoir.h"

int main() {
    system("chcp 1251");
    system("cls");
    
    Reservoir reservoirs[] = {
        Reservoir("����", 100.0, 200.0, 50.0),
        Reservoir("������", 30.0, 40.0, 10.0),
        Reservoir("������", 80.0, 150.0, 30.0)
    };

    
    for (const auto& reservoir : reservoirs) {
        reservoir.displayInfo();
    }

   
    std::ofstream outFile("reservoirs.txt");
    if (outFile.is_open()) {
        for (const auto& reservoir : reservoirs) {
            outFile << reservoir.getName() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "�� ������� ������� ���� ��� ������\n";
    }

    
    std::ofstream binaryOutFile("reservoirs.bin", std::ios::binary);
    if (binaryOutFile.is_open()) {
        for (const auto& reservoir : reservoirs) {
            binaryOutFile.write(reinterpret_cast<const char*>(&reservoir), sizeof(Reservoir));
        }
        binaryOutFile.close();
    }
    else {
        std::cerr << "�� ������� ������� ������� ���� ��� ������\n";
    }

    return 0;
}
