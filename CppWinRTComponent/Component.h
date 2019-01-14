#pragma once

#include "Component.g.h"

namespace winrt::CppWinRTComponent::implementation
{
	struct Component : ComponentT<Component>
	{
		Component() = default;

		hstring Echo(hstring const& input);
	};
}

namespace winrt::CppWinRTComponent::factory_implementation
{
	struct Component : ComponentT<Component, implementation::Component>
	{
	};
}
