/*
 * Som.h
 *
 *  Created on: 24 авг. 2015
 *      Author: vadim
 */

#ifndef SOM_H_
#define SOM_H_

#include "SomNeuron.h"
#include <vector>
using namespace std;

class Som
{
public:
	Som( uint32_t width, uint32_t height );
	virtual ~Som();

private:

	void init();
	typedef SomNeuron ColorSomNeuron;
	vector<vector<ColorSomNeuron> > m_SomNeurons;

};

#endif /* SOM_H_ */
