#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace DenevEngine
{
	class DENEV_ENGINE_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		
	};
}

//Core Log Macros
#define DNV_CORE_TRACE(...)   ::DenevEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DNV_CORE_INFO(...)    ::DenevEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DNV_CORE_WARNING(...) ::DenevEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DNV_CORE_ERROR(...)   ::DenevEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DNV_CORE_FATAL(...)   ::DenevEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client Log Macros
#define DNV_TRACE(...)		  ::DenevEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DNV_INFO(...)		  ::DenevEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define DNV_WARNING(...)	  ::DenevEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DNV_ERROR(...)		  ::DenevEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define DNV_FATAL(...)		  ::DenevEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)

// if distribution build
/*#define DNV_CORE_INFO*/
