#pragma once

#ifdef EZ_PLATFORM_WINDOWS
	#ifdef EZ_BUILD_DLL
		#define EOA_API _declspec(dllexport)
	#else
		#define EOA_API _declspec(dllimport)
	#endif
#else
	#error EOA only supports Windows!
#endif