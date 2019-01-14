#include "pch.h"
#include "Component.h"

namespace winrt::CppWinRTComponent::implementation
{
	hstring Component::Echo(hstring const& input)
	{
		return L"Hello " + input;
	}
}
