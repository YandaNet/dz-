#include <iostream>

using namespace std;

int main() {


    // 1
    int mas1[10] = {1,6,3,7,4,6,2,9,1,6};
    int mas2[5];
    int mas3[5];

    for (int i = 0; i < 5; i++) {
        mas2[i] = mas1[i];
    }

    for (int i = 5; i < 10; i++) {
        mas3[i - 5] = mas1[i];
    }

    cout << "mas: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << mas2[i] << " ";
    }

    cout << "mas2: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << mas3[i] << " ";
    }














    // 2
    int mas1_2[5] = {1, 2, 3, 4, 5 };
    int mas2_2[5] = {6, 7, 8, 9, 10};
    int mas2_3[5];
    int mass3;

    cout << "Masive 1:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << mas1_2[i] << endl;
    }

    cout << "Masive 2:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << mas2_2[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        mass3[i] = mas1_2[i] + mas2_2[i];
    }

    cout << "Masive3: ";
    for (int i = 0; i < 5; i++) {
        cout << mas3[i] << " ";
    }
}
