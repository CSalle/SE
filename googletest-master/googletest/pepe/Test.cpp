/*
 * Test.cpp
 *
 *  Created on: 15 de dic. de 2015
 *      Author: Alumno
 */

#include <limits.h>
#include "Vector3D.h"
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

TEST(dot, various) {

  Vector3D v1, v2;

  v1.Set(v1,1,2,3);
  v2.Set(v2,1,2,3);

  EXPECT_EQ(0, v1.dot(v1, v2));

  v1.Set(v1,999,999,999);
  v2.Set(v2,555,555,555);

  EXPECT_EQ(0, v1.dot(v1, v2));

  v1.Set(v1,0,0,0);
  v2.Set(v2,1,2,3);

  EXPECT_EQ(0, v1.dot(v1, v2));

  v1.Set(v1,-2,-3,54);
  v2.Set(v2,1,-7,-3);

  EXPECT_EQ(0, v1.dot(v1, v2));
}
/*
TEST(cross, various){

  Vector3D v1, v2;

  v1.Set(v1,1,2,3);
  v2.Set(v2,1,2,3);

  EXPECT_EQ(v1, v1.cross(v1, v2));

  v1.Set(v1,0,0,0);
  v2.Set(v2,0,0,0);

  EXPECT_EQ(v1, v1.cross(v1, v2));

  v1.Set(v1,-3,-5,-23);
  v2.Set(v2,1,2,3);

  EXPECT_EQ(v1, v1.cross(v1, v2));

  v1.Set(v1,-1,2,3);
  v2.Set(v2,1,9999,3);

  EXPECT_EQ(v1, v1.cross(v1, v2));


}
*/
