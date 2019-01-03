//============================================================================
// Name        : ibm_001.cpp
// Author      : sai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Human.h"
#include "Age.h"
#include "Location.h"
#include "Occupation.h"
#include "Infection.h"
#include "Patch.h"
//#include "InfectivityToPatch.h"
using namespace std;
using namespace ibm_001;


int DebugAge(){
	cout << "Debugging Age" << endl;

	Age myAge;
	myAge.SetAge(32);
	myAge.Aging();
	if(myAge.GetAge() ==33) return 1;
	else return 0;
}

int DebugLocation(){
	cout << "Debugging Location" << endl;

	Location myloc;

	myloc.SetCurrentPatch(3);
	cout<< myloc.GetCurrentPatch() << endl;
	return 0;
}

int DebugOccupation(){
	cout << "Debugging Occupation" << endl;

	Occupation myoccu;
	myoccu.ComingOfAgeNewOccupation();

	cout << myoccu.GetOccuType() << endl;
	myoccu.SetOccuType(Farmer);
	cout << myoccu.GetOccuType() << endl;

	return 0;
}

int DebugHuman(){
	cout << "Debugging Human" << endl;
	Human me;
	me.SetSex(M);
	cout << me.GetSex() << endl;
	return 0;
}

int DebugInfection(){

	cout << "Debugging Infection" << endl;
	Infection myInf;
	myInf.InfectHuman();
	cout << myInf.GetState() << endl;
	Patch myPatch;
	myInf.Progression(myPatch);
	cout << myInf.GetState() << endl;
	return 0;
}

int DebugPatch(){
	cout << "Debugging Patch: single" << endl;
	Patch myPatch;
	myPatch.SetInfectivityToHuman(90);
	cout << myPatch.GetInfectivityToHuman() << endl;

	cout << "Debugging Patch: multiple" << endl;
	int noPatch =10;
	Patch myPatchA[noPatch];
	for(int i=0; i< noPatch; i++){
		myPatchA[i].SetInfectivityToHuman(rand()%100);
		cout <<"Patch number " << i << " has infectivity of " <<myPatchA[i].GetInfectivityToHuman() << endl;
	}


	return 0;

}

int main() {



	//DebugPatch();
	//cout << "DebugAge: " << DebugAge()<< endl;
	//DebugLocation();
	//DebugOccupation();
	//DebugHuman();
	//DebugInfection();
	return 0;
}


