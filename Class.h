//Mahmoud Refaie 900221164
#include <iostream>
#include <cmath>
using namespace std;

class point
{
 public:
point(){
x=0;
y=0;
}// initialize x and y to 0



point (float one, float two){
x=one;
y=two;
}

void setX(float b){
x=b;
}

void setY(float b){
y=b;
}

float getX(){
return x;
}

float getY(){
return y;
}

void DisplayPoints(){
cout << "(" << x<< ", "<<y << ") ";
}

float CalcDistance(point z){
float D = sqrt(pow(x-z.x,2)+pow(y-z.y,2));
return D;
}
 
 private:

float x;
float y;
 };