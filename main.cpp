#include <iostream>
#include "Trees.h"

int main() {

	AVLTree<int> a;
	a.InsertNode(50);
	a.InsertNode(30);
	a.InsertNode(20);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	a.InsertNode(60);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	a.InsertNode(70);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	a.InsertNode(80);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	a.InsertNode(75);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	a.InsertNode(10);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	a.InsertNode(15);
	a.print2D();
	std::cout << "////////////////////////" << std::endl;
	
	return 0;
}