#include <iostream>
#include<cmath>
using namespace std;


int main() {
const double PI = 3.14159;
const double SLICE_AREA = 14.125;

  double diameter;
double radius;
  
  int slices;

  cout <<"Enter the pizza diameter";
  cin >> diameter;
radius = diameter / 2.0;

  slices = static_cast<int>(PI * (pow(radius, 2.0))) / SLICE_AREA;   
  cout << slices << "slices" << endl;

  return 0;
}