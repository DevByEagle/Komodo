#include <type_traits>
#include "komodo.h"

namespace Komodo {
	template<typename T>
	T absolute(T value)
	{
		static_assert(std::is_integral<T>::value, "custom_abs requires an integral type");
		return (value < 0) ? -value : value;
	}
}
