/*
 * Age.cpp
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#include "Age.h"

namespace ibm_001 {

Age::Age() {
	ageInYears = 0;

}

void Age::SetAge(int age){
	ageInYears = age;
}

int Age::GetAge() const{
	return ageInYears;
}

void Age::Aging(){
	ageInYears++;
}

} /* namespace ibm_001 */
