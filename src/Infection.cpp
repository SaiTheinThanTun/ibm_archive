/*
 * Infection.cpp
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#include "Infection.h"
#include "Patch.h"
#include "Human.h"
#include<iostream>


namespace ibm_001 {

Infection::Infection() {
	state = S;
}

States Infection::GetState() const{
	return state;
}
void Infection::InfectHuman(){
	if(state==S) state=I;
}
void Infection::Progression(Patch patch){
	// get age, state, immunity level, etc through friends
	//if(state==I) state = R;
	//std::cout << Human::Patch::GetInfectivityToHuman() << std::endl;
	std::cout << patch.GetInfectivityToHuman() << std::endl;
}

} /* namespace ibm_001 */
