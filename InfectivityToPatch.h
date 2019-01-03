/*
 * InfectivityToPatch.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef INFECTIVITYTOPATCH_H_
#define INFECTIVITYTOPATCH_H_

namespace ibm_001 {

class InfectivityToPatch {
private:
	int riskScore;
public:
	InfectivityToPatch();
	void SetRiskScore(enum state, enum sex, int age, enum occuType);
	void InfectPatch(int riskScore, int patchIndex, Patch* patchArray); //don't actually need riskScore
};

} /* namespace ibm_001 */

#endif /* INFECTIVITYTOPATCH_H_ */
