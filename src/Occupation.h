/*
 * Occupation.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef OCCUPATION_H_
#define OCCUPATION_H_
//#include "Human.h"

namespace ibm_001 {
enum OccupationTypes{No, Business, Farmer, Forest};

class Occupation {
	friend class Human;
private:
	OccupationTypes occuType;
	//Human parent;
public:
	Occupation();
	void SetOccuType(OccupationTypes occuType);
	OccupationTypes GetOccuType() const;
	void ComingOfAgeNewOccupation();
};

} /* namespace ibm_001 */

#endif /* OCCUPATION_H_ */
