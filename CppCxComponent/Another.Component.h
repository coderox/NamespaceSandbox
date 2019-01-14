#pragma once

namespace CppCxComponent
{
	namespace Another
	{
		public ref class Component sealed
		{
		public:
			Component();
			Platform::String^ Echo(Platform::String^ input);
		};
	}
}
