#pragma once

#ifdef DENEV_ENGINE_PLATFORM_WINDOWS

	#ifdef DENEV_ENGINE_BUILD_DLL
		#define DENEV_ENGINE_API __declspec(dllexport)
	#else
		#define DENEV_ENGINE_API __declspec(dllimport)
	#endif

#else
	#error DENEV ENGINe only support windows
#endif