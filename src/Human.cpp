/*
 * Human.cpp
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#include "Human.h"

namespace ibm_001 {

Human::Human() {
	sex=F;

}

void Human::SetSex(Sex sex){
	this->sex = sex;
}
	Sex Human::GetSex() const{
		return sex;
	}

} /* namespace ibm_001 */
