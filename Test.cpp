#include "Test.h"

Test::Test()
{
}

void Test::runTests()
{
	std::cout << "\n\n";
	emptyListTester();
	std::cout << "\n\n";
	addFrontTester();
	std::cout << "\n\n";
	addBackTester();
	std::cout << "\n\n";
	tenValFrontTester();
	std::cout << "\n\n";
	tenValBackTester();
}

void Test::emptyListTester()
{
	LinkedListOfInts linky;

	if(linky.isEmpty()) //new list is empty
	{
		std::cout << "isEmpty returns true for an empty list: Passed\n";
	}
	else //new list is not empty
	{
		std::cout << "isEmpty returns true for an empty list: Failed\n";
	}

	if(linky.size() == 0) //new list has a size of 0
	{
		std::cout << "size returns 0 for an empty list: Passed\n";
	}
	else //new list does not have a size of 0
	{
		std::cout << "size returns 0 for an empty list: Failed\n";
	}

	if(!linky.search(0)) //new list can not find 0
	{
		std::cout << "search returns false when run on an empty list: Passed\n";
	}
	else //new list can find 0
	{
		std::cout << "search returns false when run on an empty list: Failed\n";
	}

	if(!linky.removeBack()) //new list can not remove back
	{
		std::cout << "removeBack returns false when run on an empty list: Passed\n";
	}
	else //new list can remove back
	{
		std::cout << "removeBack returns false when run on an empty list: Failed\n";
	}

	if(!linky.removeFront()) //new list can not remove front
	{
		std::cout << "removeFront returns false when run on an empty list: Passed\n";
	}
	else //new list can remove front
	{
		std::cout << "removeFront returns false when run on an empty list: Failed\n";
	}
}

void Test::addFrontTester()
{
	LinkedListOfInts linky;
	std::vector<int> testy;

	linky.addFront(1);
	testy = linky.toVector();

	if(testy.size() == 1) //addFront added an element
	{
		std::cout << "addFront(1) adds an item to the list: Passed\n";

		if(testy[0] == 1) //addFront added 1
		{
			std::cout << "addFront(1) adds 1 to the list: Passed\n";
		}
		else //addFront added an element that was not 1
		{
			std::cout << "addFront(1) adds 1 to the list: Failed\n";
		}

		if(linky.isEmpty()) //list has an element but is reported as empty
		{
			std::cout << "isEmpty returns false when the list contains 1 element: Failed\n";
		}
		else //list has an element and reports as not empty
		{
			std::cout << "isEmpty returns false when the list contains 1 element: Passed\n";
		}

		if(linky.size() == 1) //list has an element and reports a size of 1
		{
			std::cout << "size returns 1 when the list contains 1 element: Passed\n";
		}
		else //list has an element and reports a size other than 1
		{
			std::cout << "size returns 1 when the list contains 1 element: Failed\n";
		}

		if(linky.search(1)) //list contains 1 and reports true
		{
			std::cout << "search(1) returns true when the list only contains 1: Passed\n";
		}
		else //list contains 1 and reports false
		{
			std::cout << "search(1) returns true when the list only contains 1: Failed\n";
		}

		if(linky.removeFront())
		{
			std::cout << "removeFront returns true when called on a list of size 1: Passed\n";
		}
		else
		{
			std::cout << "removeFront returns true when called on a list of size 1: Failed\n";
		}
		
		testy = linky.toVector();

		if(testy.size() == 0) //removeFront removed the element
		{
			std::cout << "removeFront empties a list of size 1: Passed\n";
		}
		else //removeFront did not remove the element
		{
			std::cout << "removeFront empties a list of size 1: Failed\n";

			if(linky.removeBack())
			{
				std::cout << "removeBack returns true when called on a list of size 1: Passed\n";
			}
			else
			{
				std::cout << "removeBack returns true when called on a list of size 1: Failed\n";
			}
			
			testy = linky.toVector();

			if(testy.size() == 0) //removeBack removed the element
			{
				std::cout << "removeBack empties a list of size 1: Passed\n";
			}
			else //removeBack did not remove the element
			{
				std::cout << "removeBack empties a list of size 1: Failed\n";
			}
		}
	}
	else //addFront did not add an element
	{
		std::cout << "addFront(1) adds an item to the list: Failed\n";
	}
}

void Test::addBackTester()
{
	LinkedListOfInts linky;
	std::vector<int> testy;

	linky.addBack(1);
	testy = linky.toVector();

	if(testy.size() == 1) //addBack added an element
	{
		std::cout << "addBack(1) adds an item to the list: Passed\n";

		if(testy[0] == 1) //addBack added 1
		{
			std::cout << "addBack(1) adds 1 to the list: Passed\n";
		}
		else //addBack added an element that was not 1
		{
			std::cout << "addBack(1) adds 1 to the list: Failed\n";
		}

		if(linky.isEmpty()) //list has an element but is reported as empty
		{
			std::cout << "isEmpty returns false when the list contains 1 element: Failed\n";
		}
		else //list has an element and reports as not empty
		{
			std::cout << "isEmpty returns false when the list contains 1 element: Passed\n";
		}

		if(linky.size() == 1) //list has an element and reports a size of 1
		{
			std::cout << "size returns 1 when the list contains 1 element: Passed\n";
		}
		else //list has an element and reports a size other than 1
		{
			std::cout << "size returns 1 when the list contains 1 element: Failed\n";
		}

		if(linky.search(1)) //list contains 1 and reports true
		{
			std::cout << "search(1) returns true when the list only contains 1: Passed\n";
		}
		else //list contains 1 and reports false
		{
			std::cout << "search(1) returns true when the list only contains 1: Failed\n";
		}

		if(linky.removeBack())
		{
			std::cout << "removeBack returns true when called on a list of size 1: Passed\n";
		}
		else
		{
			std::cout << "removeBack returns true when called on a list of size 1: Failed\n";
		}
			
		testy = linky.toVector();

		if(testy.size() == 0) //removeBack removed the element
		{
			std::cout << "removeBack empties a list of size 1: Passed\n";
		}
		else //removeBack did not remove the element
		{
			std::cout << "removeBack empties a list of size 1: Failed\n";

			if(linky.removeFront())
			{
				std::cout << "removeFront returns true when called on a list of size 1: Passed\n";
			}
			else
			{
				std::cout << "removeFront returns true when called on a list of size 1: Failed\n";
			}
			
			testy = linky.toVector();

			if(testy.size() == 0) //removeFront removed the element
			{
				std::cout << "removeFront empties a list of size 1: Passed\n";
			}
			else //removeFront did not remove the element
			{
				std::cout << "removeFront empties a list of size 1: Failed\n";
			}
		}
	}
	else //addBack did not add an element
	{
		std::cout << "addBack(1) adds an item to the list: Failed\n";
	}
}

void Test::tenValFrontTester()
{
	LinkedListOfInts linky;
	std::vector<int> testy;

	for(int i = 1; i < 11; i++) //add 1 through 10 to the front of the list
	{
		linky.addFront(i);
	}

	testy = linky.toVector();
	
	std::cout << "The list should be 1 through 10 in descending order: ";
	for(int i = 0; i < 10; i++) //print the vector to test the order
	{
		std::cout << testy[i] << ",";
	}
	std::cout << "\n";

	if(testy.size() == 10) //if all the values were added properly
	{
		std::cout << "addFront adds 1 through 10 to the list properly: Passed\n";

		if(linky.isEmpty()) //if the list is empty
		{
			std::cout << "isEmpty returns false when there are ten items in the list: Failed\n";
		}
		else //if the list is not empty
		{
			std::cout << "isEmpty returns false when there are ten items in the list: Passed\n";
		}

		if(linky.size() == 10) //if the list has ten items in it
		{
			std::cout << "size returns ten when there are ten items in the list: Passed\n";
		}
		else
		{
			std::cout << "size returns ten when there are ten items in the list: Failed\n";
		}

		for(int i = 1; i < 11; i++) //test the search function with 1 through 10
		{
			if(linky.search(i)) //if search finds the value
			{
				std::cout << "search returns true when searching for " << i << " when it is in the list: Passed\n";
			}
			else
			{
				std::cout << "search returns true when searching for " << i << " when it is in the list: Failed\n";
			}
		}

		for(int i = 10; i > 0; i--) //remove all the values in the reverse order they were added
		{
			linky.removeFront();

			if(linky.search(i)) //if the value just removed is found
			{
				std::cout << "search does not find a value just removed by removeFront: Failed\n";
			}
			else
			{
				std::cout << "search does not find a value just removed by removeFront: Passed\n";
			}
		}

		testy = linky.toVector();

		if(testy.size() == 0)
		{
			std::cout << "removeFront removes all ten items in the list: Passed\n";
		}
		else
		{
			std::cout << "removeFront removes all ten items in the list: Failed\n";

			for(int i = 1; i < 11; i++) //remove all the values in the order they were added
			{
				linky.removeBack();

				if(linky.search(i)) //if the value just removed is found
				{
					std::cout << "search does not find a value just removed by removeBack: Failed\n";
				}
				else
				{
					std::cout << "search does not find a value just removed by removeBack: Passed\n";
				}
			}
			
			if(testy.size() == 0) //if the list was emptied
			{
				std::cout << "removeBack removes all ten items in the list: Passed\n";
			}
			else
			{
				std::cout << "removeBack removes all ten items in the list: Failed\n";
			}
		}
	}
	else //if the values were not added properly
	{
		std::cout << "addFront adds 1 through 10 to the list properly: Failed\n";
	}
}

void Test::tenValBackTester()
{
	LinkedListOfInts linky;
	std::vector<int> testy;

	for(int i = 1; i < 11; i++) //add 1 through 10 to the back of the list
	{
		linky.addBack(i);
	}

	testy = linky.toVector();
	
	std::cout << "The list should be 1 through 10 in ascending order: ";
	for(int i = 0; i < 10; i++) //print the vector to test the order
	{
		std::cout << testy[i] << ",";
	}
	std::cout << "\n";

	if(testy.size() == 10) //if all the values were added properly
	{
		std::cout << "addBack adds 1 through 10 to the list properly: Passed\n";

		if(linky.isEmpty()) //if the list is empty
		{
			std::cout << "isEmpty returns false when there are ten items in the list: Failed\n";
		}
		else //if the list is not empty
		{
			std::cout << "isEmpty returns false when there are ten items in the list: Passed\n";
		}

		if(linky.size() == 10) //if the list has ten items in it
		{
			std::cout << "size returns ten when there are ten items in the list: Passed\n";
		}
		else
		{
			std::cout << "size returns ten when there are ten items in the list: Failed\n";
		}

		for(int i = 1; i < 11; i++) //test the search function with 1 through 10
		{
			if(linky.search(i)) //if search finds the value
			{
				std::cout << "search returns true when searching for " << i << " when it is in the list: Passed\n";
			}
			else
			{
				std::cout << "search returns true when searching for " << i << " when it is in the list: Failed\n";
			}
		}

		for(int i = 10; i > 0; i--) //remove all the values in the reverse order they were added
		{
			linky.removeBack();

			if(linky.search(i)) //if the value just removed is found
			{
				std::cout << "search does not find a value just removed by removeBack: Failed\n";
			}
			else
			{
				std::cout << "search does not find a value just removed by removeBack: Passed\n";
			}
		}

		testy = linky.toVector();

		if(testy.size() == 0) //if the list was emptied
		{
			std::cout << "removeBack removes all ten items in the list: Passed\n";
		}
		else
		{
			std::cout << "removeBack removes all ten items in the list: Failed\n";

			for(int i = 1; i < 11; i++) //remove all the values in the order they were added
			{
				linky.removeFront();

				if(linky.search(i)) //if the value just removed is found
				{
					std::cout << "search does not find a value just removed by removeFront: Failed\n";
				}
				else
				{
					std::cout << "search does not find a value just removed by removeFront: Passed\n";
				}
			}
			
			if(testy.size() == 0) //if the list was emptied
			{
				std::cout << "removeFront removes all ten items in the list: Passed\n";
			}
			else
			{
				std::cout << "removeFront removes all ten items in the list: Failed\n";
			}
		}
	}
	else //if the values were not added properly
	{
		std::cout << "addBack adds 1 through 10 to the list properly: Failed\n";
	}
}
