
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
	l = side / 2;
	f << "" << (-l) << " 0 " << (-l) << endl;
	f << "" << (-l) << " 0 " << (l) << endl;
	f << "" << (l) << " 0 " << (l) << endl;

	f << "" << (-l) << " 0 " << (-l) << endl;
	f << "" << (l) << " 0 " << (l) << endl;
	f << "" << (l) << " 0 " << (-l) << endl;


	f.close();
}



void makeBox(double comprimento , double altura , double largura,/*double divisoes*/ string file ){

	ofstream f;
	f.open(file, std::fstream::in | std::fstream::out | std::fstream::app);

	double c = comprimento/2;
	double a = altura/2;
	double la = largura /2;
	//double d = (altura/divisoes)/2;

	//for (i=0; d<a ; i++;)

	//base
	f << "" <<(c)<<" " <<(-a)<<" " <<(la) << endl;
	f << "" <<(-c)<<" " << (-a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;

	f << "" << (c)<<" " << (-a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;


	//topo

	f << "" << (c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;

	f << "" << (c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (-la) << endl;

	//face 1

	f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (-la) << endl;

	f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (-la) << endl;

	//face 2

	f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (-la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (la) << endl;

	f << "" << (c)<<" " << (-a)<<" " << (la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;

	//face 3
	f << "" << (c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (c)<<" " << (-a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (-a)<<" " << (la) << endl;

	f << "" << (-c)<<" " << (-a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (c)<<" " << (a)<<" " << (la) << endl;

	//face 4
	f << "" << (-c)<<" " << (-a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (la) << endl;
	f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;

	f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;
	f << "" << (-c)<<" " << (a)<<" " << (la) << endl;



	f.close();


}



    void makeSphere (float radius, int slices , int stacks, string file) {

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
            z4 = radius * sin(phi + cSlices) * cos(teta);


            f << "" << x3<<" " << y3<<" " << z3 << endl;
            f << "" << x1<<" " << y1<<" " << z1 << endl;
            f << "" << x4<<" " << y4<<" " << z4 << endl;

            f << "" << x3<<" " << y3<<" " << z3<<" " << endl;
            f << "" << x2<<" " << y2<<" " << z2 << endl;
            f << "" << x1<<" " << y1<<" " << z1 << endl;

            phi += cSlices;

            }

        teta+= cStacks;
    }

    f.close();
}

void makeCone(float radius, float height, int slices, int stacks, string file) {

	float a = (2 * M_PI) / slices;
	float h = height / stacks;
	float b = radius / slices;

	ofstream f;
	f.open(file, std::fstream::in | std::fstream::out | std::fstream::app);

	for (int i = 0; i < stacks; i++) {
		for (int j = 0; j < slices; j++) {

			if (i==0) {

				// Base
				f << "" << "0 " << "0" << " 0" << endl;

				f << "" << radius * sin(a * (j + 1)) << " 0 " << radius * cos(a * (j + 1)) << endl;

				f << "" << radius * sin(a * j) << " 0 " << radius * cos(a * j) << endl;
			}

			if (i == stacks - 1) {

				// Topo
				f << "" << (radius - b * i) * sin(a * j)<<" " << i * h <<" "<< (radius - b * i) * cos(a * j) << endl;


				f << "" << (radius - b * i) * sin(a * (j + 1))<<" " << i * h <<" "<< (radius - b * i) * cos(a * (j + 1)) << endl;

				f << "" << "0 " << (i + 1) * h << " 0" << endl;

			}
			else {

				// Lateral
				f << "" << (radius - b * i) * sin(a * j)<<" " << i * h <<" "<< (radius - b * i) * cos(a * j) << endl;

				f << "" << (radius - b * (i + 1)) * sin(a * (j + 1))<<" " << (i + 1) * h <<" "<< (radius - b * (i + 1)) * cos(a * (j + 1)) << endl;

				f << "" << (radius - b * (i + 1)) * sin(a * j) <<" "<< (i + 1) * h<<" " << (radius - b * (i + 1)) * cos(a * j) << endl;


				f << "" << (radius - b * i) * sin(a * j)<<" " << i * h <<" "<< (radius - b * i) * cos(a * j) << endl;

				f << "" << (radius - b * i) * sin(a * (j + 1))<<" " << i * h<<" " << (radius - b * i) * cos(a * (j + 1)) << endl;

				f << "" << (radius - b * (i + 1)) * sin(a * (j + 1))<<" " << (i + 1) * h <<" "<< (radius - b * (i + 1)) * cos(a * (j + 1)) << endl;
			}
		}
	}
	
	f.close();
}

    int main(int argc , char **argv){


    if (argc >1) {

		if (strcmp(argv[1], "Plane") == 0) {
			makePlane(atof(argv[2]), argv[3]);
		} else if (strcmp(argv[1], "Box") == 0) {
			makeBox(atof(argv[2]), atof(argv[3]), atof(argv[4]), argv[5]);
		} else if (strcmp(argv[1], "Cone") == 0) {
			makeCone(atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]), argv[6]);
		} else if (strcmp(argv[1], "Sphere") == 0) {
			makeSphere(atof(argv[2]), atoi(argv[3]), atoi(argv[4]), argv[5]);
		} else
			printf("Figura inexistente\n");


	}


    else {

        printf ("Número de argumentos insuficiente\n");
    }
}


