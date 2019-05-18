#include <iostream>

#include "Robot.hpp"
#include "SpaceStation.hpp"

//dangerous!!! could conflict to others library
using namespace std;


SpaceStation::SpaceStation()
	:m_posX(0), m_posY(0), m_posZ(0)
{
	for (int i = 0; i < 20; i++) {
		m_robot.push_back(Robot(this));
	}
}


SpaceStation::~SpaceStation()
{
}

void SpaceStation::statusReport() const {
	// TODO: Finishing it
	cout << "print status" << endl;
	cout << " X " << m_posX
		<< " Y " << m_posY
		<< " Z " << m_posZ
		<< endl;
	for (int i = 0; i < 20; i++) {
		m_robot[i].talk();
	}
}

float SpaceStation::getPositionX() const {
	return m_posX;
}

float SpaceStation::getPositionY() const {
	return m_posY;
}

float SpaceStation::getPositionZ() const {
	return m_posZ;
}

void SpaceStation::setPositionX(float _posX) {
	m_posX = _posX;
}

void SpaceStation::setPositionY(float _posY) {
	m_posY = _posY;
}

void SpaceStation::setPositionZ(float _posZ) {
	m_posZ = _posZ;
}