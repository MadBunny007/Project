#ifndef SHAPE_DECLARE_CPP
#define SHAPE_DECLARE_CPP
#include "Shape_Define_Header.h"
#include<iostream>
#include<string>
using namespace std;

double const PI = 3.14;
map < int, two_dimension_shapes*> warehouse::arr_of_shapes;
map < int, three_dimension_shapes*> warehouse::arr_of_shapes1;

void warehouse::displayallshapes(int i) {
	
	if (i == 1) {
		for (const auto& elem : arr_of_shapes)
		{

			cout << "Id " << elem.first << " :-> ";

			auto it = arr_of_shapes.find(elem.first);
			if (it != arr_of_shapes.end()) {
				// Update the existing circle with the new radius
				circle* existingCircle = dynamic_cast<circle*>(it->second);
				square* existingsquare = dynamic_cast<square*>(it->second);
				sphere* existingsphere = dynamic_cast<sphere*>(it->second);
				cube* existingcube = dynamic_cast<cube*>(it->second);

				if (existingCircle) {

					cout << " Shape : circle \n";

					elem.second->displayplanecoord();
					cout << '\n';

				}
				else if (existingsquare) {
					cout << "Shape : Square \n";
					elem.second->displayplanecoord();
					cout << '\n';
				}

			}


			
			elem.second->display();
			cout << "\n------------------------------\n";
		}
	}
	else {
		for (const auto& elem : arr_of_shapes1)
		{

			cout << "Id " << elem.first << " :-> ";

			auto it = arr_of_shapes1.find(elem.first);
			if (it != arr_of_shapes1.end()) {
				// Update the existing circle with the new radius
				circle* existingCircle = dynamic_cast<circle*>(it->second);
				square* existingsquare = dynamic_cast<square*>(it->second);
				sphere* existingsphere = dynamic_cast<sphere*>(it->second);
				cube* existingcube = dynamic_cast<cube*>(it->second);


				if (existingsphere) {
					cout << "Shape :Sphere \n";
					elem.second->displayplanecoord();
					cout << '\n';
				}
				else if (existingcube) {
					cout << "Shape :Cube \n";
				}
			}

			

			elem.second->display();
			cout << "\n------------------------------\n";
		}
	}
} 
void circle::displayplanecoord() {
	cout << "It is present in ";
	if (circleplane.get_x()) {
		cout << "x plane ";
	}
	if (circleplane.get_y()) {
		cout << "y plane ";
	}
	if (circleplane.get_z()) {
		cout << "z plane ";
	}
}

void square::displayplanecoord() {
	cout << "It is Present in ";
	if (squareplane.get_x()) {
		cout << "x plane ";
	}
	if (squareplane.get_y()) {
		cout << "y plane ";
	}
	if (squareplane.get_z()) {
		cout << "z plane ";
	}
	
}

void sphere::displayplanecoord() {
	cout << "It is Present in ";
	if (sphereplane.get_x()) {
		cout << "x plane ";
	}
	if (sphereplane.get_y()) {
		cout << "y plane ";
	}
	if (sphereplane.get_z()) {
		cout << "z plane ";
	}

}
void cube::displayplanecoord() {
	cout << "It is Present in ";
	if (cubeplane.get_x()) {
		cout << "x plane ";
	}
	if (cubeplane.get_y()) {
		cout << "y plane ";
	}
	if (cubeplane.get_z()) {
		cout << "z plane ";
	}

}
void square::display() {
	cout << "The Area of Square is -> ";
	cout << Calculate_area()<<endl;
	cout << "The Perimeter of Square is -> ";

	cout << Calculate_perimeter()<<endl;

	displayplanecoord();

	cout << "\n___________________________________________"<<endl;


}
void circle::display() {
	cout << "The area of circle is -> ";
	cout << Calculate_area()<<endl;
	cout << "The perimeter of circle is -> ";

	cout << Calculate_perimeter()<<endl;

	displayplanecoord();
	cout << "\n___________________________________________"<<endl;



}
void cube::display() {
	cout << "The surface area of cube is -> ";

	cout << Calculate_surface_area()<<endl;
	cout << "The volume of cube is -> ";

	cout << Calculate_volume()<<endl;

	displayplanecoord();
	cout << "\n___________________________________________"<<endl;


}
cube::cube(int side, bool x, bool y, bool z) {
	this->side = side;
	cubeplane.set_x(x);
	cubeplane.set_y(y);
	cubeplane.set_z(z);
}

square::square(int side, bool x, bool y, bool z) {
	this->side = side;
	squareplane.set_x(x);
	squareplane.set_y(y);
	squareplane.set_z(z);

}

void sphere::display() {
	cout << "The surface area of sphere is -> ";
	cout << Calculate_surface_area() << endl;
	cout << "The volume  of sphere is -> ";

	cout << Calculate_volume()<<endl;
	displayplanecoord();
	cout << "___________________________________________"<<endl;

}

void warehouse::addsquare() {
	
	

	int id;
	cout << "Enter Your Id -> ";
	cin >> id;
	int side;
	
	int x; 
	int y;
    int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}
	
	
	
	
	
	
	
	cout << "enter the side -> ";
	cin >> side;
	arr_of_shapes[id] = new square(side,x,y,z);
	arr_of_shapes[id]->display();

	
}
void warehouse::addcircle() {

	int id;
	cout << "Enter Your Id -> ";
	cin >> id;
	int radius;
	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}
	
	cout << "enter the radius -> ";
	cin >> radius;
	arr_of_shapes[id] = new circle(radius,x,y,z);
	arr_of_shapes[id]->display();

}
void warehouse::addsphere() {
	cout << "Enter Your Id -> ";
	int id;
	cin >> id;
	float radius;
	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}
	
	cout << "enter the radius -> ";
	cin >> radius;
	arr_of_shapes1[id] = new sphere(radius,x,y,z);
	arr_of_shapes1[id]->display();
}
void warehouse::addcube() {

	int id;
	int side;
	cout << "Enter Your Id -> ";
	cin >> id;
	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}
	cout << "enter the side-> ";
	cin >> side;
	arr_of_shapes1[id] = new cube(side,x,y,z);
	arr_of_shapes1[id]->display();

}
void warehouse::addsquare(int id) {

	
	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		square* existingsquare = dynamic_cast<square*>(it->second);
		if (existingsquare) {
			
			int side;
			cout << "Enter the new radius for the circle: ";
			cin >> side;
			existingsquare->set_side(side);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a square." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}


}
void warehouse::addcircle(int id) {

	
	
		

		// Check if the shape exists in the map
		auto it = arr_of_shapes.find(id);
		if (it != arr_of_shapes.end()) {
			// Update the existing circle with the new radius
			circle* existingCircle = dynamic_cast<circle*>(it->second);
			if (existingCircle) {
				int radius;
				cout << "Enter the new radius for the circle: ";
				cin >> radius;
				existingCircle->set_radius(radius);
				cout << "Circle with ID " << id << " updated." << endl;
			}
			else {
				cout << "Shape with ID " << id << " is not a circle." << endl;
			}
		}
		else {
			cout << "Shape with ID " << id << " not found." << endl;
		}
	

}
void warehouse::addsphere(int id) {

	
	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		sphere* existingsphere = dynamic_cast<sphere*>(it->second);
		if (existingsphere) {
			int radius;
			cout << "Enter the new radius for the sphere: ";
			cin >> radius;
			existingsphere->set_radius(radius);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a sphere." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}
}
void warehouse::addcube(int id) {

	
	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		cube* existingcube = dynamic_cast<cube*>(it->second);
		if (existingcube) {
			int side;
			cout << "Enter the new radius for the sphere: ";
			cin >> side;
			existingcube->set_side(side);
			cout << "cube with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a cube." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}

}
void warehouse::deleteshape() {
	
	int deleteIndex;
	cout << "Enter the index of the shape to delete: ";
	cin >> deleteIndex;

	if (arr_of_shapes.find(deleteIndex) != arr_of_shapes.end()) {
		delete arr_of_shapes[deleteIndex];
		arr_of_shapes.erase(deleteIndex);
		cout << "Entry Deleted" << endl;

	}
	else if (arr_of_shapes1.find(deleteIndex) != arr_of_shapes1.end()) {
		delete arr_of_shapes1[deleteIndex];
		arr_of_shapes1.erase(deleteIndex);
		cout << "Entry Deleted" << endl;
	}
	else {
		cout << "Invalid index." << endl;
	}
}
void warehouse::update() {
	
	int id;
	cout << "Enter the id for updation -> ";
	cin >> id;
	cout << "current values for your shape is : \n";
	arr_of_shapes[id]->display();
	cout << endl;
	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		circle* existingCircle = dynamic_cast<circle*>(it->second);
		square* existingsquare = dynamic_cast<square*>(it->second);
		sphere* existingsphere = dynamic_cast<sphere*>(it->second);
		cube* existingcube = dynamic_cast<cube*>(it->second);

		if (existingCircle) {
			int radius;
			cout << "Enter the new radius for the circle: ";
			cin >> radius;
			existingCircle->set_radius(radius);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else if (existingsquare) {
			int side;
			cout << "Enter the new radius for the circle: ";
			cin >> side;
			existingsquare->set_side(side);
			cout << "Square with ID " << id << " updated." << endl;
		}
		else if (existingsphere) {
			int radius;
			cout << "Enter the new radius for the Sphere: ";
			cin >> radius;
			existingCircle->set_radius(radius);
			cout << "Sphere with ID " << id << " updated." << endl;
		}
		else if (existingcube) {
			int side;
			cout << "Enter the new side for the cube: ";
			cin >> side;
			existingcube->set_side(side);
			cout << "Cube with ID " << id << " updated." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}
	
	
	
}

void square::manualdisplay_area(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_area();
}
void square::manualdisplay_perimeter(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_perimeter();
}
void circle::manualdisplay_perimeter(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_perimeter();

}
void circle::manualdisplay_area(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_area();

}
sphere::sphere(float radius, bool x, bool y, bool z) {
	this->radius = radius;
	sphereplane.set_x(x);
	sphereplane.set_y(y);
	sphereplane.set_z(z);
			
			
}
void sphere::manualdisplay_volume(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_volume();

}
void sphere::manualdisplay_surfacearea(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_surface_area();

}
void cube::manualdisplay_surfacearea(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_surface_area();
}
void cube::manualdisplay_volume(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_volume();
}
void circle::set_radius(int radius) {
	this->radius = radius;
}

void circle::set_radius() {
	cout << "Enter the Radius of the Circle -> ";
	cin >> radius;
}

double circle::get_radius() {
	return radius;
}
double circle::Calculate_area() {
	
	return  PI * radius * radius;
	
}
double circle::Calculate_perimeter() {

	return 2 * PI * radius;

}
circle::circle(int radius, bool x, bool y, bool z) 
	{
		this->radius = radius;
		circleplane.set_x(x);
		circleplane.set_y(y);
		circleplane.set_z(z);

	}

void square::set_side() {
	cout << "Enter the side of the square -> ";
}
void square::set_side(int side) {
	this->side = side;
}
double square::get_side() {
	return side;
}
double square::Calculate_area() {

	return side*side;

}
double square::Calculate_perimeter() {

	return 4*side;

}
void sphere::set_radius() {
	cout << "Enter the Radius of the Circle -> ";
	cin >> radius;
}
void sphere::set_radius(float radius) {
	this->radius = radius;
}
double sphere::get_radius() {
	return radius;
}
double sphere::Calculate_surface_area() {

	return  4 * PI * radius * radius;
}
double sphere::Calculate_volume() {

	return (4/3) * PI * radius*radius;

}
void cube::set_side() {
	cout << "Enter the side of the cube -> ";
	cin >> side;
}
void cube::set_side(int side) {
	cout << "Enter the side of the cube -> ";
	cin >> side;
}
double cube::get_side() {
	return side;
}
double cube::Calculate_surface_area() {

	return  side * side * side;
}
double cube::Calculate_volume() {

	return 6 * side*side;

}
void menu::callmenu() {
	bool state = true;
	while (state) {
		warehouse w1;
		int choice;
		cout << "Choose an option:" << endl;
		cout << "1. Show Existing Data \n2. Add shape\n3. Update shape\n4. Delete shape\n5. Display shapes\n6. Search\n7. Exit" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "ID: 1, Shape: Circle, Area: " << 3.14 * 5 * 5 << ", Perimeter: " << 2 * 3.14 * 5 << endl;
			cout << "Square:" << endl;
			cout << "ID: 2, Shape: Square, Area: " << 5 * 5 << ", Perimeter: " << 4 * 5 << endl;
			cout << "Sphere:" << endl;
			cout << "ID: 3, Shape: Sphere, Surface Area: " << 4 * 3.14 * 5 * 5 << ", Volume: " << (4.0 / 3) * 3.14 * 5 * 5 * 5 << endl;
			cout << "Cube:" << endl;
			cout << "ID: 4, Shape: Cube, Surface Area: " << 6 * 5 * 5 << ", Volume: " << 5 * 5 * 5 << endl;


			break;
		case 2:
			int addChoice;
			cout << "Choose a shape to add:" << endl;
			cout << "1. Circle\n2. Square\n3. Sphere\n4. Cube" << endl;
			cin >> addChoice;

			
			switch (addChoice) {
			case 1:
				w1.addcircle();
				break;
			case 2:
				w1.addsquare();
				break;
			case 3:
				w1.addsphere();
				break;
			case 4:
				w1.addcube();
				break;
			default:
				cout << "Invalid choice." << endl;
			}
			break;
		case 3:
			w1.update();
			break;
		case 4:
			w1.deleteshape();
			break;
		case 5:
			cout << "Press 1 for 2D Shapes Data 2. for 3D Shapes Data -> ";
			int i;
			cin >> i;

			if (i == 1) {

				if (w1.arr_of_shapes.empty()) {
					cout << "No 2D shapes to display." << endl;
				}
				else {
					
						w1.displayallshapes(i);
					
				}
			}
			else {
				if (w1.arr_of_shapes1.empty()) {
					cout << "No 3D shapes to display." << endl;
				}
				else {
					
						w1.displayallshapes(i);
					
				}
			}
			break;
		case 6:
			cout << "      1.2D shape     \n      2.3D shape    \n";
			int no;
			cin >> no;
			int id;
			if (no == 1) {
				cout << "Enter ID to Search -> ";
				cin >> id;
				w1.arr_of_shapes[id]->display();
			}
			else{
				cout << "Enter ID to Search -> ";
				cin >> id;
				w1.arr_of_shapes1[id]->display();
			}

			break;
		case 7:
			cout << "Exiting program." << endl;
			// Clean up memory
			for (const auto& pair : w1.arr_of_shapes) {
				delete pair.second;
			}
			for (const auto& pair : w1.arr_of_shapes1) {
				delete pair.second;
			}
			state = false;
			break;
		default:
			cout << "Invalid choice." << endl;
			// Clear input buffer
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}


#endif