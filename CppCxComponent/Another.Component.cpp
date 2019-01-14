#include "pch.h"
#include "Another.Component.h"

using namespace CppCxComponent::Another;
using namespace Platform;

Component::Component()
{
}

String^ Component::Echo(String^ input) {
	return "Another hello " + input;
}