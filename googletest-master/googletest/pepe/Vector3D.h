/*
 * Vector3D.h
 *
 *  Created on: 15 de dic. de 2015
 *      Author: Alumno
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_

class Vector3D {
public:
	Vector3D();
	virtual ~Vector3D();
	float x;
	float y;
	float z;

	float dot(Vector3D v1, Vector3D v2);
	Vector3D cross(Vector3D v1, Vector3D v2);
	void Set(Vector3D v, float x, float y, float z);
};

#endif /* VECTOR3D_H_ */
