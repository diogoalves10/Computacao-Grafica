
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
	a = altura/2;
	la = largura /2;

	//base
	f << "" << (c) << (-a)<< (la) << endl;
	f << "" << (-c) << (-a) << (la) << endl;
	f << "" << (-c) << (-a)<< (-la) << endl;

	f << "" << (c) << (-a) << (la) << endl;
	f << "" << (-c) << (-a) << (-la) << endl;
	f << "" << (c) << (-a) << (-la) << endl;


	//topo

	f << "" << (c) << (a) << (la) << endl;
	f << "" << (-c) << (a) << (la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;

	f << "" << (c) << (a) << (la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;

	//face 1

	f << "" << (-c) << (-a) << (-la) << endl;
	f << "" << (c) << (-a) << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;

	f << "" << (-c) << (-a) << (-la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;

	//face 2

	f << "" << (c) << (-a) << (-la) << endl;
	f << "" << (c) << (a) << (-la) << endl;
	f << "" << (c) << (a) << (la) << endl;

	f << "" << (c) << (-a) << (la) << endl;
	f << "" << (c) << (a) << (la) << endl;
	f << "" << (c) << (-a) << (-la) << endl;

	//face 3
	f << "" << (c) << (a) << (la) << endl;
	f << "" << (c) << (-a) << (la) << endl;
	f << "" << (-c) << (-a) << (la) << endl;

	f << "" << (-c) << (-a) << (la) << endl;
	f << "" << (-c) << (a) << (la) << endl;
	f << "" << (c) << (a) << (la) << endl;

	//face 4
	f << "" << (-c) << (-a) << (la) << endl;
	f << "" << (-c) << (a) << (la) << endl;
	f << "" << (-c) << (-a) << (-la) << endl;

	f << "" << (-c) << (-a) << (-la) << endl;
	f << "" << (-c) << (a) << (-la) << endl;
	f << "" << (-c) << (a) << (la) << endl;

	f.close();


}



    void make Sphere (float radius, int slices , int stacks, string file) {

    ofstream f;
    f.open(file, std::fstream::in | std::fstream::out | std::fstream::app);

    float x1 , x2 , x3 , x4 , y1 , y2 , y3 , y4, z1, z2, z3 , z4;

    float cSlices = 2 *M_PI / slices;
    float cStacks = M_PI / stacks;

    float teta = 0;
    float phi = 0;


    for (int i=0; i < stacks ; i ++){

        for(int j=0; j < slices ; j++) {

            x1 = radius * sin (phi + cSlices) * sin(teta + cStacks);
            y1 = radius * cos (phi + cSlices);
            z1 = radius * sin (phi + cSlices) * cos(teta * cStacks);

            x2 = radius * sin(phi) * sin (teta + cStacks);
            y2 = radius * cos(phi);
            z2 = radius * sin(phi) * cos (teta + cStacks);

            x3 = radius * sin(phi) * sin(teta);
            y3 = radius * cos(phi);
            z3 = radius * sin(phi) * cos (teta);

            x4 = radius * sin(phi + cSlices) * sin(teta);
            y4 = radius * cos(phi + cSlices);
            z4 = radius * sin(phi + cSlices * cos(teta);


            f << "" << x3 << y3 << z3 << endl;
            f << "" << x1 << y1 << z1 << endl;
            f << "" << x4 << y4 << z4 << endl;

            f << "" << x3 << y3 << z3 << endl;
            f << "" << x2 << y2 << z2 << endl;
            f << "" << x1 << y1 << z1 << endl;

            phi += cSlices;

            }

        teta+= cStacks;
    }
}