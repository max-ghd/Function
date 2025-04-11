

/*#include <iostream>
#include <windows.h>

using namespace std;

void Line(int num,char sobaka, int color, bool polozenie ) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);

    for (int i = 0; i <= num; i++) {
        cout << sobaka;
        if (!polozenie) {
            cout << endl;
        }
    }
    cout << endl;


}

int main()
{
    Line(20, '@', 12, true);
    Line(10, '@', 11, false);
}
*/


/* #include<iostream>
#include<Windows.h>

using namespace std;

void Rectangle(int width, int height, char symbol, int color, int x1, int y1) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, color);
    

    for (int y = 0; y < height; y++) {
        COORD position{ (SHORT)x1, (SHORT)y1 + y };
        SetConsoleCursorPosition(h, position);
        
        for (int x = 0; x < height; x++) {
             
            cout << symbol;
        }
        cout << endl;
    }
     
    

    SetConsoleTextAttribute(h, 2);
}




int main() {
    Rectangle(20, 5, '*', 4, 5, 5);
    



}
*/

/* #include <iostream>

using namespace std;

int cube(int num) {
    return num * num * num;
}



int main() {
    int num = 6;
    cout << "CUBE: " << num<<"="<<cube(num);
}
*/


/* #include <iostream>

using namespace std;

bool perevirka_chysel(int x) {
    if (x <= 1) {
        return false;
    }

    if (x == 2){
        return true;
    }
    if (x % 2 == 0) {
        return false;
    }

}



int main() {
    int number;
    cout << "Write number: " << "\n";
    cin >> number;

    if (perevirka_chysel(number)) {
        cout << number << " Simple number";
    }
    
    else {
        cout << number << " Not simple number";
    }

    
    


}*/


/* #include <iostream>

using namespace std;



int suma(int x, int y, int sumaxy) {
    for (int i = x; i <= y; i++) {
        sumaxy += i;
        cout << sumaxy<<" ";
    }
    cout << "\n";
    return sumaxy;
}



int main(){
    cout<<suma(5, 10, 0);
    
}*/

/* #include<iostream>
#include<ctime>

using namespace std;

double avr_masiva() {
    srand(time(0));
    const int SIZE = 5;
    int ar[SIZE];
    int suma = 0;

    for (int i = 0; i < SIZE; i++) {
        ar[i] = rand() % 10;
        cout << ar[i] << " ";
        suma += ar[i];
        
    }
    cout << '\n';
    double avr = static_cast<double>(suma) / SIZE;
    
    return avr;

    


}
int main() {
    cout << avr_masiva();
}*/