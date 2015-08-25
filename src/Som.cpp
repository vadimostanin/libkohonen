/*
 * Som.cpp
 *
 *  Created on: 24 авг. 2015
 *      Author: vadim
 */

#include "Som.h"
#include "CRandomGenerator.h"

Som::Som( uint32_t width, uint32_t height )
{
	m_SomNeurons.resize( height, vector<SomNeuron>( width, SomNeuron( 16 ) ) );
	init();
}

Som::~Som()
{
}

void Som::init()
{
	for( uint32_t weight_row = 0 ; weight_row < m_SomNeurons.size() ; weight_row++ )
	{
		for( uint32_t weight_col = 0 ; weight_col < m_SomNeurons[weight_row].size() ; weight_col++ )
		{
			m_SomNeurons[weight_row][weight_col].init();
		}
	}
}







