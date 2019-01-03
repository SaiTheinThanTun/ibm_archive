/*
 * Occupation.cpp
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#include "Occupation.h"

namespace ibm_001 {

Occupation::Occupation() {
	occuType= No;

}

void Occupation::SetOccuType(OccupationTypes occuType){
	this->occuType = occuType;
}
OccupationTypes Occupation::GetOccuType() const{
	return occuType;
}
void Occupation::ComingOfAgeNewOccupation(){
	if(occuType==No){
		occuType= Business;
	}
}

} /* namespace ibm_001 */
