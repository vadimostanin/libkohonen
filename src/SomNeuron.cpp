/*
 * SomNeuron.cpp
 *
 *  Created on: 24 авг. 2015
 *      Author: vadim
 */

#include "SomNeuron.h"
#include "CRandomGenerator.h"
#include <cmath>

SomNeuron::SomNeuron( uint32_t weightsCount )
{
	m_weights.resize( weightsCount, 0.0 );
}
void SomNeuron::init()
{
	CRandomGenerator rand( -0.5, 0.5, 0.00001 );
	rand.fillVector( m_weights );
}
double SomNeuron::squaredistance( SomNeuron & neuron )
{
	double squaredistance = 0.0;
	uint32_t weightsCount = m_weights.size();
	for( uint32_t weight_i = 0 ; weight_i < weightsCount ; weight_i++ )
	{
		double error = abs( neuron.weight( weight_i ) - weight( weight_i ) );
		squaredistance += error * error;
	}
	return squaredistance;
}
vector<double> & SomNeuron::weights()
{
	return m_weights;
}
double SomNeuron::weight( uint32_t index )
{
	return m_weights[index];
}
void SomNeuron::weight( uint32_t index, double value )
{
	m_weights[index] = value;
}
double SomNeuron::weightCount()
{
	return m_weights.size();
}
SomNeuron::~SomNeuron()
{
	;
}
