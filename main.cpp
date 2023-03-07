#include <iostream>
using namespace std;
class Shape {
public:
  virtual float area() = 0;
};

class Rectangle : public Shape {
protected:
  float length;
  float width;

public:
  Rectangle(float l, float w) : length(l), width(w) {}
  float area() override { return length * width; }
};

class Color {
protected:
  string color;

public:
  Color(string color) : color(color) {}
};

class ColoredRectangle : public Rectangle, public Color {
public:
  ColoredRectangle(float l, float w, string color)
      : Rectangle(l, w), Color(color) {}
  void display() {
    cout << "Length: " << length << ", Width: " << width << ", Color: " << color
         << endl;
  }
};

int main() {
  ColoredRectangle c(5, 10, "Blue");
  cout << "Area: " << c.area() << endl; // Output: Area: 50
  c.display(); // Output: Length: 5, Width: 10, Color: Blue
  return 0;
}
