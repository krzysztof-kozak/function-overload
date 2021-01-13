#include <iostream>
using namespace std;

// Tworzymy wiele wersji tej samej funkcji (przeciążamy) w zależności od tego, jakie dane chcemy przesyłać.

// Chcemy dodać dwa integery.
 int add(int a, int b) {
    cout << "Suma " << a << " + " << b << " to " << a+b << endl;
    return a+b;
  }

// Chcemy dodać dwa floaty.
 float add(float a, float b) {
    cout << "Suma " << a << " + " << b << " to " << a+b << endl;
    return a+b;
  }

// Chcemy dodać double oraz int.
  double add(double a, int b) {
    cout << "Suma " << a << " + " << b << " to " << a+b << endl;
    return a+b;
}

// Chcemy dodać int oraz znak.
  char add(int a, char b) {
    cout << "Suma " << a  << " + " << b << " to " << char(a+b) << endl;
    return char(a+b);
}


// Zamiast wiele razy przeciążać jedną funkcję, możemy stworzyć szablon. 
// C++ wtedy sam odpowiednio zmodyfikuje parametry funkcji.
template<typename X, typename Y>

// Auto sprawi, że c++ sam zdecyduje jaki typ wartości zwrócić na bazie podanych argumentów
auto add2(X a, Y b) {
  cout << "Suma " << a << " + " << b << " to " << a+b << endl;
  return a+b;
}

int main() {
 add(2, 10);
 // Trzeba wpisać f, bo domyślnie c++ potraktuje te argumenty jako double, zamiast float.
 add(2.25f, 10.25f);
 add(2.25, 10);
 add(70, '$');

cout << endl << endl;
cout << "Szablon:" << endl;

 add2(2, 10);
 add2(2.25f, 10.25f);
 add2(2.25, 10);
 add(70, '$');

}