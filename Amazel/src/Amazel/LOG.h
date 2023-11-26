#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Amazel {
	class AMAZEL_API LOG
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

// Core log macros
#define LOG_CORE_ERROR(...) ::Amazel::LOG::GetCoreLogger()->error(__VA_ARGS__)
#define LOG_CORE_WARN(...) ::Amazel::LOG::GetCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_INFO(...) ::Amazel::LOG::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_DEBUG(...) ::Amazel::LOG::GetCoreLogger()->debug(__VA_ARGS__)
#define LOG_CORE_TRACE(...) ::Amazel::LOG::GetCoreLogger()->trace(__VA_ARGS__)

// Client log macros
#define LOG_ERROR(...) ::Amazel::LOG::GetClientLogger()->error(__VA_ARGS__)
#define LOG_WARN(...) ::Amazel::LOG::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_INFO(...) ::Amazel::LOG::GetClientLogger()->info(__VA_ARGS__)
#define LOG_DEBUG(...) ::Amazel::LOG::GetClientLogger()->debug(__VA_ARGS__)
#define LOG_TRACE(...) ::Amazel::LOG::GetClientLogger()->trace(__VA_ARGS__)
