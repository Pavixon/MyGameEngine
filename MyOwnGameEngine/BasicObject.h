#pragma once

#include "GameObject.h"

class BasicObject : public GameObject
{
public:
	BasicObject();

	void Update(float deltaTime) override;
};
