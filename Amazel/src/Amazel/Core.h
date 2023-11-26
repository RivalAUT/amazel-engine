#pragma once

#ifdef AZ_PLATFORM_WINDOWS
	#ifdef AZ_BUILD_DLL
		#define AMAZEL_API __declspec(dllexport)
	#else
		#define AMAZEL_API __declspec(dllimport)
	#endif
#else
	#error Amazel only supports Windows!
#endif

#define BIT(x) (1 << x)
