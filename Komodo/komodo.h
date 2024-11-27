/**
 * @file komodo.h
 * @brief
 *
 * @version 1.0.0
 * @date 2024-11-25
 *
 * @author DevByEagle
 *
 * @section LICENSE
 * The library is open-source and available under the MIT license.
 *
 * @section FUNCTIONS
 * - power(base, exponent): Bomputes base^exponent
 */

#ifndef KOMODO_H
#define KOMODO_H

// --- Platform-specific Macros for Shared Library Visibility ---
#if defined(_WIN32) || defined(_WIN64)
	// Define KOAPI for Windows shared libraries (.dll)
	#ifndef KOAPI
		#define KOAPI __declspec(dllexport)
	#else
		#define KOAPI __declspec(dllimport)
	#endif
#else
	// Shared library visibility for Unix-based systems
	#define KOAPI __attribute__((visibility("default")))
#endif 

namespace Komodo {
	// --- Type Definition ---
	typedef unsigned long long size_t;
	// --- Function Declarations ---
	template <typename T>
	KOAPI T absolute(T value);
	// --- Class Declarations ---
}


#endif // KOMODO_H