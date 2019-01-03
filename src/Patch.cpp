/*
 * Patch.cpp
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#include "Patch.h"

namespace ibm_001 {

Patch::Patch() {
	patchIndex = 0;
	historyInfectedHuman = 0;
	infectivityToHuman = 0;
	mosquitoAbundance = 0;

}

void Patch::StoreHistory(){

}

void Patch::SetInfectivityToHuman(int infectivityToHuman){
	this->infectivityToHuman = infectivityToHuman;
}

int Patch::GetInfectivityToHuman(){
	return infectivityToHuman;
}

} /* namespace ibm_001 */
