#pragma once
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#include "InputLayer.h"
#include "OutputLayer.h"
using namespace :: std;

int main() {
	InputLayer inputL;
	inputL.numberOfNeuronInLayer = 5;
	inputL=inputL.initLayer(inputL);
	inputL.printLayer(inputL);

	OutputLayer outputL;
	outputL.numberOfNeuronInLayer = 2;
	outputL = outputL.initLayer(outputL);
	outputL.printLayer(outputL);

    cout <<"Hello there..";

	getchar();
}