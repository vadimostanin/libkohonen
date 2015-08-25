/*
 * SomNeuron.h
 *
 *  Created on: 24 авг. 2015
 *      Author: vadim
 */

#ifndef SOMNEURON_H_
#define SOMNEURON_H_

#include <vector>
#include <stdint.h>
#include <algorithm>
using namespace std;

#include "CRandomGenerator.h"

class SomNeuron
{
public:
	SomNeuron( uint32_t weightsCount );
	void init();
	double squaredistance( SomNeuron & neuron );
	vector<double> & weights();
	double weight( uint32_t index );
	void weight( uint32_t index, double value );
	double weightCount();
	virtual ~SomNeuron();

private:

	mutable vector<double> m_weights;
};

#endif /* SOMNEURON_H_ */
