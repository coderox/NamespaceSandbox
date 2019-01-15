#pragma once

#include "Component.g.h"
#include "Another.Component.h"

namespace winrt::CppWinRTComponent::implementation
{
	struct Component : ComponentT<Component>
	{
		Component() = default;

		hstring Echo(hstring const& input);
		CppWinRTComponent::Another::Component Another() { return _another; }
		void Another(CppWinRTComponent::Another::Component const& value) { _another = value; }

	private:
		Another::Component _another;
	};
}

namespace winrt::CppWinRTComponent::factory_implementation
{
	struct Component : ComponentT<Component, implementation::Component>
	{
	};
}
