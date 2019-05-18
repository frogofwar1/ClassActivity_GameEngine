#include <iostream>

#include "Robot.hpp"

//dangerous!!! could conflict to others library
using namespace std;

Robot::Robot(SpaceStation* _station)
	: m_spaceStation(_station)
{
}


Robot::~Robot()
{
}

void Robot::talk() const {
	cout << "HA HA HA" << endl;
}

void Robot::askInfoFromSpaceStation() const {
	m_spaceStation->statusReport();
}