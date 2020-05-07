#pragma once

#ifdef DENEV_ENGINE_PLATFORM_WINDOWS

	#ifdef DENEV_ENGINE_BUILD_DLL
		#define DENEV_ENGINE_API __declspec(dllexport)
	#else
		#define DENEV_ENGINE_API __declspec(dllimport)
	#endif

#else
	#error DENEV ENGINE only support windows
#endif


//For events categorys and Colliders Layering on physics
#define BIT(x) (1 << x)