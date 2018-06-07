#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "Label.h"


int main(int argc, char** argv)
{

	Label l("Hello World");
	Control& l2 = l;
	EventEngine e;
	e.run(l);

}