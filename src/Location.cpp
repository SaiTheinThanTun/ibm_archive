/*
 * Location.cpp
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#include "Location.h"
#include<iostream>

namespace ibm_001 {


Location::Location() {
	currentPatch = 0;
	homePatch = 0;
	affinityPatches = 0;

}

int Location::GetCurrentPatch() const{
	return currentPatch;
}

void Location::SetCurrentPatch(int currentPatch){
	this->currentPatch = currentPatch;

}
	void Location::SetHomePatch(int homePatch){
		this->homePatch = homePatch;
	}

	void Location::SetAffinityPatches(int affinityPatches){
		this->affinityPatches = affinityPatches;
	}

void Location::Movement(int affinityPatches, int homePatch, int currentPatch, int maxSize){
	currentPatch = rand()%maxSize; //random movement
}

} /* namespace ibm_001 */
