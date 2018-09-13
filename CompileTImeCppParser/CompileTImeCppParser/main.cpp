#include "StaticString.hpp"

template<typename StringHolder>
void f(StringHolder holder)
{
	constexpr auto s = holder();
}

int main()
{
	FUNC_STATIC_STRING(f, "Hello World");
}