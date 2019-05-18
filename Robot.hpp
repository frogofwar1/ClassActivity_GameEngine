#pragma once

#include <memory>
#include "SpaceStation.hpp"

class Robot
{
public:
	Robot(SpaceStation* _station);
	virtual ~Robot();

	void talk() const;
	void askInfoFromSpaceStation() const;

private:
	SpaceStation* m_spaceStation;

};

