#pragma once
#include "iMediatorInterface.hpp"
#include "cModelObject.hpp"
#include "cGameObjectFactory.hpp"
#include "MediatorGlobals.hpp"

class cModelManager : iMediatorInterface {
	cModelManager();
	static cModelManager stonModelMngr;



	iMediatorInterface* pMediator;


	// FACTORY OBJECT TO HANDLE THE CREATION OF NEW MODEL OBJECTS
	cGameObjectFactory _fact_game_obj;

public:
	static cModelManager* GetModelManager();


	void setMediatorPointer(iMediatorInterface* pMediator);

	virtual sNVData RecieveMessage(sNVData message);


	bool EnableWireframe(std::vector<cModelObject*> &pModels);
	bool EnableWireframe(cModelObject*& pModels);

	bool DisableWireframe(std::vector<cModelObject*> &pModels);
	bool DisableWireframe(cModelObject*& pModel);

	bool ToggleWireframe(std::vector<cModelObject*> &pModels);
	bool ToggleWireframe(cModelObject*& pModel);


	bool EnableVisible(cModelObject*& pModel);
	bool DisableVisible(cModelObject*& pModel);
	bool ToggleVisible(cModelObject*& pModel);

	bool EnableVisible(std::vector<cModelObject*>& pModels);
	bool DisableVisible(std::vector<cModelObject*> & pModels);
	bool ToggleVisible(std::vector<cModelObject*> & pModels);
};
