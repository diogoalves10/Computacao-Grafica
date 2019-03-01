// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void geraPlano(double lado, string ficheiro) {
	ofstream fich;
	fich.open(ficheiro, std::fstream::in | std::fstream::out | std::fstream::app);
	double l;
	l = lado / 2;
	fich << "" << (-l) << " 0 " << (-l) << endl;
	fich << "" << (-l) << " 0 " << (l) << endl;
	fich << "" << (l) << " 0 " << (l) << endl;

	fich << "" << (-l) << " 0 " << (-l) << endl;
	fich << "" << (l) << " 0 " << (l) << endl;
	fich << "" << (l) << " 0 " << (-l) << endl;
	
	fich.close();
}