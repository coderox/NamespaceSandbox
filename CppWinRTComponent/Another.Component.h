#pragma once

#include "Another.Component.g.h"

namespace winrt::CppWinRTComponent::Another::implementation
{
	struct Component : ComponentT<Component>
	{
		Component() = default;

		hstring Echo(hstring const& input);
	};
}

namespace winrt::CppWinRTComponent::Another::factory_implementation
{
	struct Component : ComponentT<Component, implementation::Component>
	{
	};
}
