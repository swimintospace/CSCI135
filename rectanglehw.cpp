#include <iostream>
using namespace std;

class Rectangle {
	public:
		Rectangle(double input_w, double input_h);
		double get_perimeter();
		double get_area();
		void resize(double factor);
	private:
		double width;
		double height;
};


Rectangle::Rectangle(double input_w, double input_h){
    height = input_h;
    width = input_w;
}

double Rectangle::get_area(){
    return height * width;
}

double Rectangle::get_perimeter(){
    return (2*height) + (2*width);
}

void Rectangle::resize(double factor){
    height *= factor;
    width *= factor;
}