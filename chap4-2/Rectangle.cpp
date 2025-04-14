#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2): upLeft(x1, y1), lowRight(x2, y2){};
void Rectangle::ShowRecInfo() const{
    cout<<"LeftTop: "<<'['<<upLeft.getX()<<", "<<upLeft.getY()<<']'<<endl;
    cout<<"RightBottom: "<<'['<<lowRight.getX()<<", "<<lowRight.getY()<<']'<<endl<<endl;
};

int main(void){
    Point pos1={-2, 4};
    Point pos2={5, 9};
    Rectangle rec(pos1.getX(), pos1.getY(), pos2.getX(), pos2.getY());
    rec.ShowRecInfo();
    return 0;
}
    