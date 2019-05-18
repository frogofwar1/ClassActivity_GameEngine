#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <memory>

#include "SpaceStation.hpp"

using namespace std;




int main() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	/*SpaceStation spaceStation;
	spaceStation.statusReport();*/

	shared_ptr<SpaceStation> spaceStation = make_shared<SpaceStation>();
	spaceStation->statusReport();

	getchar();

}