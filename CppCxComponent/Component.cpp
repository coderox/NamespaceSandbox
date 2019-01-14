#include "pch.h"
#include "Component.h"

using namespace CppCxComponent;
using namespace Platform;

Component::Component()
{
}

String^ Component::Echo(String^ input) {
	return "Hello " + input;
}