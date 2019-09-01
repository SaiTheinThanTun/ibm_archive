/*
 * Infection.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef INFECTION_H_
#define INFECTION_H_
#include "Patch.h"

namespace ibm_001 {

enum States{S,I,R};

class Infection {
	friend class Human;
	//friend class Patch;
	//friend class Location;

private:
	States state;

public:
	Infection();
	States GetState() const;
	void InfectHuman();
	void Progression(Patch patch); // get age, state, immunity level, etc through friends
	//void Progression();
};

} /* namespace ibm_001 */

#endif /* INFECTION_H_ */
