/*
 * principal.cpp
 *
 *  Created on: Nov 23, 2015
 *      Author: carlos, Fernando.
 */

#include <iostream>

using namespace std;

#include "claseCarlos.h"
#include "ClaseFernando.h"
#include "claseReche.h"
#include "clasefernandoperez.h"

int main() {

	claseCarlos carlos;
	carlos.saluda();

	ClaseFernando Fer;
	Fer.speak();

	claseReche reche;
	reche.hola();

	clasefernandoperez fer2;
	fer2.dihola();

	return 0;
}
