#include<iostream>
using namespace std;
class Rectangle {
	double length=1, width=1;
public:
	float perimeter() {
		float temp= 2*(length + width);
		return temp;
	}
	float area() {
		float area = length * width;
		return area;
	}

	void setLength(float x) {
		if (x>= 0.0 && x<= 20.0) {
			length=x;
		}
		else {
			cout<<"Enter vaild values "<<endl;
		}
	}
	void getLength();

	void setWidth(float y) {
		if (y>= 0.0 && y<= 20.0) {
			width=y;
		}
		else {
			cout<<"Enter vaild values "<<endl;
		}
	}
	void getWidth();
};
int main()
{
	Rectangle obj1;
	obj1.setLength(5.5);
	obj1.setWidth(7.0);
	cout<<"Perimeter is:"<<obj1.perimeter()<<endl;
	cout<<"Area is : "<<obj1.area()<<endl;

}
