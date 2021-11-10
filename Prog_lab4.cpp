#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int main()
{
	//Association example
	Point firstPoint, secondPoint;

	cout << "Enter the coordinates of the first point: ";
	firstPoint.input();

	cin.clear();
	while (cin.get() != '\n');

	cout << "\nEnter the coordinates of the second point: ";
	secondPoint.input();

	cin.clear();
	while (cin.get() != '\n');

	cout << "\nDistance between points: " << firstPoint.distance(secondPoint);

	cout << "\n\nLet's initialize line using this points\n";
	Line line;
	line.init(firstPoint, secondPoint);
	line.output();

	cout << "\n\nThe distance between points and line lenght are the same\nbecause line's lineLength method uses point's distance method";
	return 0;
}

