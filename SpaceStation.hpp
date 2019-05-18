#pragma once
#include <vector>

//Forward Decoration
class Robot;

class SpaceStation
{
public:
	SpaceStation();
	virtual ~SpaceStation();

	void statusReport() const;

	float getPositionX() const;
	float getPositionY() const;
	float getPositionZ() const;

	void setPositionX(float _posX);
	void setPositionY(float _posY);
	void setPositionZ(float _posZ);



private:
	float m_posX;
	float m_posY;
	float m_posZ;

	std::vector<Robot> m_robot;
};

