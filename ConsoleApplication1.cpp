
//

#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void makePlane(double side, string file) {
	ofstream f;
	f.open(file, std::fstream::in | std::fstream::out | std::fstream::app);
	double l;
	l = lado / 2;
	f << "" << (-l) << " 0 " << (-l) << endl;
	f << "" << (-l) << " 0 " << (l) << endl;
	f << "" << (l) << " 0 " << (l) << endl;

	f << "" << (-l) << " 0 " << (-l) << endl;
	f << "" << (l) << " 0 " << (l) << endl;
	f << "" << (l) << " 0 " << (-l) << endl;
	
	f.close();
}



void makeBox(double comprimento , double altura , double largura, string file ){

	ofstream f;
	f.open(file, std::fstream::in | std::fstream::out | std::fstream::app);

	c = comprimento/2;
	a = altura;
	la = largura /2;

	//base
	f << "" << (c) << " 0 " << (la) << endl;
	f << "" << (-c) << " 0 " << (la) << endl;
	f << "" << (-c) << " 0 " << (-la) << endl;

	f << "" << (c) << " 0 " << (la) << endl;
	f << "" << (-c) << " 0 " << (-la) << endl;
	f << "" << (c) << " 0 " << (-la) << endl;


	//topo

	f << "" << (c) << (a) << (la) << endl;
	f << "" << (-c) << (a) << (la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;

	f << "" << (c) << (a) << (la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;

	//face 1

	f << "" << (-c) << " 0 " << (-la) << endl;
	f << "" << (c) << " 0 " << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;

	f << "" << (-c) << " 0 " << (-la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;

	//face 2

	f << "" << (c) << " 0 " << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;
	f << "" << (c) << (a) << (la) << endl;

	f << "" << (c) << " 0 " << (la) << endl;
	f << "" << (c) << (a) << (la) << endl;
	f << "" << (c) << " 0 " << (-la) << endl;

	//face 3
	f << "" << (c) << (a) << (la) << endl;
	f << "" << (c) << " 0 " << (la) << endl;
	f << "" << (-c) << " 0 " << (la) << endl;

	f << "" << (-c) << " 0 " << (la) << endl;
	f << "" << (-c) << (a) << (la) << endl;
	f << "" << (c) << (a) << (la) << endl;

	//face 4
	f << "" << (-c) << " 0 " << (la) << endl;
	f << "" << (-c) << (a) << (la) << endl;
	f << "" << (-c) << " 0 " << (-la) << endl;

	f << "" << (-c) << " 0 " << (-la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;
	f << "" << (-c) << (a) << (la) << endl;

	f.close();


}