/*
 * Vector3D.cpp
 *
 *  Created on: 15 de dic. de 2015
 *      Author: Alumno
 */

#include "Vector3D.h"

Vector3D::Vector3D() {
	// TODO Auto-generated constructor stub
	x = 0;
	y = 0;
	z = 0;
}

Vector3D::~Vector3D() {
	// TODO Auto-generated destructor stub
}

float Vector3D::dot(Vector3D v1, Vector3D v2){


	float res = v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;


	return res;
}

Vector3D Vector3D::cross(Vector3D v1, Vector3D v2){

	Vector3D res;

	res.x = v1.y*v2.z - v1.z*v2.y;
	res.y = v1.z*v2.x - v1.x*v2.z;
	res.z = v1.x*v2.y - v1.y*v2.x;

	return res;
}

void Vector3D::Set(Vector3D v, float x, float y, float z){


	v.x = x;
	v.y = y;
	v.z = z;

}
