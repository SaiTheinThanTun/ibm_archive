/*
 * Age.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef AGE_H_
#define AGE_H_

namespace ibm_001 {

class Age {
private:
	int ageInYears;
public:
	Age();
	void SetAge(int age);
	int GetAge() const;
	void Aging();
};

} /* namespace ibm_001 */

#endif /* AGE_H_ */
