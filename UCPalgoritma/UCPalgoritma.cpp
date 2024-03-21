
//1. dilakukan secara berulang -> scan -> membandingkan elemen yang berurutan
//   -> menukar tempat apabila tempatnya tidak sesuai

//2. caranya dibagi sesuai jaraknya

//3. menggunakan algoritma insertionsort karena cara kerja insertionsort itu
//   mengurutkan data pada array dan sudah pasti urut dari data terkecil
//   ke data terbesar

#include <iostream>
using namespace std;

int arr[15];
int n;

void input() {
    while (true) {
        cout << "Masukan nickname : ";
        cin >> n;
        if (n <= 15)
            break;
        else {
            cout << "\nNickname dapat mempunyai maksimal 15 elemen.\n";
        }
    }
    cout << endl;                           
    cout << "===============" << endl;      
    cout << "Masukan Nickname" << endl;
    cout << "===============" << endl;      

    for (int i = 0; i < n; i++) {
        cout << "Rani" << (i + 1) << ": ";
        cin >> arr[i];

    }
}
void bubbleSortRani() {
    int pass = 1;

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[n - 1]) {
                int min_index = j;
            }
        }

        cout << "\nPass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";


        }
        cout << endl;

    } while (pass <= n - 1);
}
void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Nickname yang telah dimasukkan" << endl;
    cout << "===================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}
int main() {
    input();
    bubbleSortRani();
    display();
    system("pause");

    return 0;
}
