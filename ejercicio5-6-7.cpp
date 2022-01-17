#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct point{
    int x, y;
};

struct Rect {
    point p1, p2;
};

int linearDiff (int v1, int v2) {
    return abs (v2-v1);
}

bool isAmong(int x, int p1, int p2) {
  int a = p1, b = p2;

  if(p1 > p2) {
    a = p2; b = p1;
  }

    return ((x >= a) && (x <= b));
  }


float rectPerimeter(Rect rect){
    int base = linearDiff(rect.p1.x, rect.p2.x); 
    int altura = linearDiff(rect.p1.y, rect.p2.y); 

    return (base * 2) + (altura * 2);
}
float rectArea(Rect rect){
    int base = linearDiff(rect.p1.x, rect.p2.x); 
    int altura = linearDiff(rect.p1.y, rect.p2.y); 

    return (base) * (altura);
}

bool isPointWithinOfRect(point p, Rect r) {
  bool xIsWithin = isAmong(p.x, r.p1.x, r.p2.x);
  bool yIsWithin = isAmong(p.y, r.p1.y, r.p2.y);

  return xIsWithin && yIsWithin;
}

bool isRectWithinOfRect(Rect r, Rect container) {
  bool p1IsWithin = isPointWithinOfRect(r.p1, container);
  bool p2IsWithin = isPointWithinOfRect(r.p2, container);

  return p1IsWithin && p2IsWithin;
}

int main() {
    point p1, p2;
    Rect rect1, rect2;
    float rect1P, rect1A;

    rect1.p1.x = 1;
    rect1.p1.y = 2;
    rect1.p2.x = 8;
    rect1.p2.y = 10;

    rect1P = rectPerimeter(rect1);
    cout << "Perimetro r1:" << rect1P << endl;

    rect1A = rectArea(rect1);
    cout << "Area r1:" << rect1A << endl;


  p1.x = 3, p1.y = 7;
  p2.x = 18, p2.y = 5;

  cout << "Punto 1: " << p1.x << " ," << p1.y << endl;
  string resultP1 = isPointWithinOfRect(p1, rect1) ? "Se encuentra dentro" : "Se encuentra fuera";
  cout << resultP1 << " Del primer rectangulo " << endl << endl;

  cout << "Punto 2: " << p2.x << " ," << p2.y << endl;
  string resultP2 = isPointWithinOfRect(p2, rect1) ? "Se encuentra dentro" : "Se encuentra fuera";
  cout << resultP2 << " Del primer rectangulo " << endl << endl;


  rect2.p1.x = 2;
  rect2.p1.y = 3;
  rect2.p2.x = 9;
  rect2.p2.y = 7;

  cout << "Rectangulo 2 p1: " << rect2.p1.x << ", " << rect2.p1.y 
    << " p2: " << rect2.p2.x << " ," << rect2.p2.y << endl << endl;
  string resultRect2 = isRectWithinOfRect(rect2, rect1) ? "Contenido" : "No contenido";
  cout << resultRect2 << " En el primer rectangulo " << endl;


    return 0;
}
