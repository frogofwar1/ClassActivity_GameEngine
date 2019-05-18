#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;




int main() {
	
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

		cout << "Hello World" << endl;

		getchar();
		
}