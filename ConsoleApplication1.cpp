
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

//base
    f << "" <<(c)<<" " <<(-a)<<" " <<(la) << endl;
    f << "" <<(-c)<<" " << (-a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;

    f << "" << (c)<<" " << (-a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;


    //topo

    f << "" << (c)<<" " << (a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (la) << endl;

    f << "" << (c)<<" " << (a)<<" " << (la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (-la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;

    //face 1

    f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;

    f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (-la) << endl;

    //face 2

    f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (la) << endl;

    f << "" << (c)<<" " << (-a)<<" " << (la) << endl;
    f << "" << (c)<<" " << (-a)<<" " << (-la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (la) << endl;

    //face 3
    f << "" << (c)<<" " << (a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (-a)<<" " << (la) << endl;
    f << "" << (c)<<" " << (-a)<<" " << (la) << endl;

    f << "" << (-c)<<" " << (-a)<<" " << (la) << endl;
    f << "" << (c)<<" " << (a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (la) << endl;

    //face 4
    f << "" << (-c)<<" " << (-a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;

    f << "" << (-c)<<" " << (-a)<<" " << (-la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (la) << endl;
    f << "" << (-c)<<" " << (a)<<" " << (-la) << endl;




    f.close();


}






    void makeSphere (float radius, int slices , int stacks, string file) {


        float a = 2 * M_PI / slices;
        float b = M_PI / stacks;


        ofstream f;
        f.open(file, std::fstream::in | std::fstream::out | std::fstream::app);
        for (float i = 0; i < stacks; i++) {
            for (float j = 0; j < slices; j++) {


                if (i == 0) {

                    f << "" << radius * sin(i * b + b) * sin(j * a + a) << " "<<radius * cos(i + b)
                     <<" " << radius * sin(i * b + b) * cos(j * a + a) << endl;

                    f << "" << radius * sin(i * b) * sin(j * a)<<" " << radius * cos(i * b)
                     << " "<< radius * sin(i * b) * cos(j * a) << endl;

                    f << "" << radius * sin(i * b + b) * sin(j * a) << " "<< radius * cos(i * b + b)
                    << " " << radius * sin(i * b + b) * cos(j * a) << endl;
                } else if (i == stacks - 1) {
                    f << "" << radius * sin(i * b) * sin(j * a + a) << " " << radius * cos(i * b) << " "
                      << radius * sin(i * b) * cos(j * a + a) << endl;

                    f << "" << radius * sin(i * b) * sin(j * a) << " " << radius * cos(i * b) << " "
                      << radius * sin(i * b) * cos(j * a) << endl;

                    f << "" << radius * sin(i * b + b) * sin(j * a + a) << " " << radius * cos(i * b + b) << " "
                      << radius * sin(i * b + b) * cos(j * a + a) << endl;
                } else {

                    f << "" << radius * sin(i * b + b) * sin(j * a + a) << " " << radius * cos(i * b + b) << " "
                      << radius * sin(i * b + b) * cos(j * a + a) << endl;


                    f << "" << radius * sin(i * b) * sin(j * a) << " " << radius * cos(i * b) << " "
                      << radius * sin(i * b) * cos(j * a) << endl;

                    f << "" << radius * sin(i * b + b) * sin(j * a) << " " << radius * cos(i * b + b) << " "
                      << radius * sin(i * b + b) * cos(j * a) << endl;

                    f << "" << radius * sin(i * b) * sin(j * a + a) << " " << radius * cos(i * b) << " "
                      << radius * sin(i * b) * cos(j * a + a) << endl;

                    f << "" << radius * sin(i * b) * sin(j * a) << " " << radius * cos(i * b) << " "
                      << radius * sin(i * b) * cos(j * a) << endl;

                    f << "" << radius * sin(i * b + b) * sin(j * a + a) << " " << radius * cos(i * b + b) << " "
                      << radius * sin(i * b + b) * cos(j * a + a) << endl;

                }

            }


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


