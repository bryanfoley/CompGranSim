/*
 * CGSP_UT.cpp
 *
 *  Created on: Mar 19, 2016
 *      Author: bryan
 */
#include<stdio.h>
#include<iostream>
#include<assert.h>
#include "disk.hpp"
#include "vector.hpp"
#include<typeinfo>

using namespace std;

int main(){
	disk particle01;
	Vector null(0,0,0);

	//Test A01, particle default constructor
	cout << "Test A01, Disk Object default member values";
	assert(particle01.x() == 0.0);
	assert(particle01.y() == 0.0);
	assert(particle01.phi() == 0.0);
	assert(particle01.vx() == 0.0);
	assert(particle01.vy() == 0.0);
	assert(particle01.omega() == 0.0);
	assert(particle01.r() == 1.0);
	assert(particle01.m() == 1.0);
	assert(particle01.j() == 1.0);
	assert(particle01.type() == 1.0);
	assert(particle01.mu() == 1.0);
	assert(particle01.gamma() == 1.0);
	assert(particle01.Y() == 1.0);
	assert(particle01.A() == 1.0);
	assert(particle01.z() == 1.0);
	cout << "...OK" << endl;
	cout << "" << endl;
	//Test A02, Disk default type check
	cout << "Test A02, Disk Object Default member types";
	assert(typeid(particle01.z()) == typeid(int));
	assert(typeid(particle01.type()) == typeid(int));
	assert(typeid(particle01.pos()) == typeid(Vector));
	cout << "...OK" << endl;
	cout << "" << endl;
	//How to check vectors completely?
	return 0;
}



