/*
 * Patch.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef PATCH_H_
#define PATCH_H_

namespace ibm_001 {

class Patch {
	//friend class Human;
private:
	int patchIndex;
	int historyInfectedHuman;
	int infectivityToHuman;
	int mosquitoAbundance;
public:
	Patch();
	void StoreHistory();
	void SetInfectivityToHuman(int infectivityToHuman);
	int GetInfectivityToHuman();

};

} /* namespace ibm_001 */

#endif /* PATCH_H_ */
