#include <iostream>
using namespace std;  

int main() {
    int a = 20;
    double b = 30; // double เพื่อไม่ให้ปัดเศษ
    double c = 4;  // link กับ b
    double output;

    output = a - (b/c);
    cout << "output: " << output << "\n";
    return 0;
}
