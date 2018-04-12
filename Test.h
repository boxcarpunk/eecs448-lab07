#pragma once

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class Test
{

public:

	Test();
	void runTests();

private:

	void emptyListTester();
	void addFrontTester();
	void addBackTester();
	void tenValFrontTester();
	void tenValBackTester();

};