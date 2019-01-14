#include "pch.h"
#include "Another.Component.h"

namespace winrt::CppWinRTComponent::Another::implementation
{
	hstring Component::Echo(hstring const& input)
	{
		return L"Another hello " + input;
	}
}
