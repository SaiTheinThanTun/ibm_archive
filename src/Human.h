/*
 * Human.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef HUMAN_H_
#define HUMAN_H_
#include "Infection.h"

namespace ibm_001 {

enum Sex{F,M};

class Human {

	//friend class Infection;
private:
	Sex sex;
	Infection infection;
public:
	Human();
	void SetSex(Sex sex);
	Sex GetSex() const;
};

} /* namespace ibm_001 */

#endif /* HUMAN_H_ */
