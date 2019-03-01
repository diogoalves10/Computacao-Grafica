
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
	fich.open(file, std::fstream::in | std::fstream::out | std::fstream::app);
	double l;
	l = lado / 2;
	fich << "" << (-l) << " 0 " << (-l) << endl;
	fich << "" << (-l) << " 0 " << (l) << endl;
	fich << "" << (l) << " 0 " << (l) << endl;

	fich << "" << (-l) << " 0 " << (-l) << endl;
	fich << "" << (l) << " 0 " << (l) << endl;
	fich << "" << (l) << " 0 " << (-l) << endl;
	
	f.close();
}