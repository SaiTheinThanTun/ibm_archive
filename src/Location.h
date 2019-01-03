/*
 * Location.h
 *
 *  Created on: Jan 3, 2562 BE
 *      Author: Sai
 */

#ifndef LOCATION_H_
#define LOCATION_H_

namespace ibm_001 {

class Location {

private:
	int currentPatch;
	int homePatch;
	int affinityPatches; //should be an array of patches that could be travelled

public:
	Location();

	int GetCurrentPatch() const;
	void SetCurrentPatch(int currentPatch);
	void SetHomePatch(int homePatch);
	void SetAffinityPatches(int affinityPatches);

	void Movement(int affinityPatches, int homePatch, int currentPatch, int maxSize); //first 3 info can be accessed w/o declaration
};

} /* namespace ibm_001 */

#endif /* LOCATION_H_ */
