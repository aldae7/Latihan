#Latihan
1
**program menampilkan bil terbesar dan sejumlah bilangan acak yang di inputkan**

**Alur Algoritma**

1. masukkan bilangan input secara acak dengan syntax int max=0; dan int n,a; .
2. masukkan cout dan cin nya untuk memasukkan nilai variabel secara acak yang akan menjadi terbesarnya.
3. mencari bilangan yang terbesar yang kita inputkan tadi dengan syntax ```cout << "Masukkan Bilangan ke-" << i+1 << ": "; cin >> a;```.

**screenshot**

<img src="Screenshot.png" width="1366px" height="768px">

```c++

#include <iostream>

using namespace std;

int main(){
    int i=0;
    int max=0;
    int n,a;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++) {
        cout << "Masukkan Bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;
}

```