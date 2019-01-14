#pragma once

namespace CppCxComponent
{
    public ref class Component sealed
    {
    public:
        Component();
		Platform::String^ Echo(Platform::String^ input);
    };
}
