#pragma once
#include <stdlib.h>
#include <vector>
#include "Neuron.h"


class Layer {
public:
	Layer() {};
	~Layer() {}

	void printLayer() const {};

protected:
	std::vector<Neuron> listOfNeurons;
	size_t listOfNeuronsInitLayer;

};
