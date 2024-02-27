#ifndef SHAPE_DEFINE_HEADER_H
#define SHAPE_DEFINE_HEADER_H
#include<map>
#include<string>
#include<iostream>
using namespace std;



class shape {
public:
	
	virtual void display()  = 0;
};

class two_dimension_shapes :public shape{         //class for 2d shapes inherits the function of shape class;
protected:
	static int id;

public:
	
	virtual double Calculate_area()=0;
	virtual double Calculate_perimeter()=0;
	virtual void display()=0;
	virtual void displayplanecoord()=0;

};
class shapeplane {
protected:

	bool x, y, z;

public:
	//construct a parameterized constructor
	shapeplane() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	shapeplane(bool x, bool y, bool z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void set_x(bool x) {
		this->x = x;
	}
	void set_y(bool y) {
		this->y = y;
	}
    void set_z(bool z) {
		this->z = z;
	}
	bool get_x() {
		return x;
	}
	bool get_y() {
		return y;
	}
	bool get_z() {
		return z;
	}


};
class circle :public two_dimension_shapes {
protected:
	double radius;
	shapeplane circleplane;
	

	

public:
	circle(int radius, bool x, bool y, bool z);
	void set_radius();
	void set_radius(int radius);

	double get_radius();
	double Calculate_area();
	double Calculate_perimeter();
	void manualdisplay_area(int i);
	void manualdisplay_perimeter(int i);
	void display();
	void displayplanecoord();

};
class square :public two_dimension_shapes {
protected:
	int side;
	shapeplane squareplane;
public:

		
	
	square(int side, bool x, bool y, bool z);
		
	
	void set_side();
	void set_side(int side);

	
	double get_side();
	double Calculate_area();
	double Calculate_perimeter();
	void manualdisplay_area(int i);
	void manualdisplay_perimeter(int i);
	void display();
	void displayplanecoord();


};

class three_dimension_shapes :public shape {         //class for 3d shapes inherits the function of shape class;


public:

	virtual double Calculate_surface_area() = 0;
	virtual double Calculate_volume() = 0;
	virtual void display()=0;
	virtual void displayplanecoord()=0;
	

};

class sphere :public three_dimension_shapes {
protected:
	float radius;
	shapeplane sphereplane;
public:
	sphere(float radius, bool x, bool y, bool z);
		
	
	void set_radius(float radius);
	void set_radius();
	double get_radius();
	double Calculate_volume();
	double Calculate_surface_area();
	void manualdisplay_volume(int i);
	void manualdisplay_surfacearea(int i);
	void display();
	void displayplanecoord();



};

class cube :public three_dimension_shapes {
protected:
	int side;
	shapeplane cubeplane;
public:
	cube(int side, bool x, bool y, bool z);
		
	
	void set_side(int side);

	
	void set_side();
	double get_side();
	double Calculate_volume();
	double Calculate_surface_area();
	void manualdisplay_volume(int i);
	void manualdisplay_surfacearea(int i);
	void display();
	void displayplanecoord();

};
class warehouse {

public:

	static map < int, two_dimension_shapes* > arr_of_shapes;
	static map < int, three_dimension_shapes* > arr_of_shapes1;

	void addsquare();
	void addcircle();
	void addsphere();
	void addcube();
	void addsquare(int id);
	void addcircle(int id);
	void addsphere(int id);
	void addcube(int id);
	void displayallshapes(int i);
	void deleteshape();
	void update();






};

class menu {

public:
	void callmenu();

};

#endif