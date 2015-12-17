/*
 * Test.cpp
 *
 *  Created on: 15 de dic. de 2015
 *      Author: Alumno
 */

#include <limits.h>
#include "Vector3d.h"
#include "gtest/gtest.h"

TEST(dot, zero) {
	
	//float x = 0, y = 0, z = 0;

	Vector3D v1, v2;
	v1.x = 0;
	v1.y = 0;
	v1.z = 0;
	v2 = v1;
	//v2.Set(v2, x,y,z);
  EXPECT_EQ(0, v1.dot(v1, v2));

}

