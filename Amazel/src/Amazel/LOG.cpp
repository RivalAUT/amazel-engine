#include "LOG.h"

namespace Amazel {

	std::shared_ptr<spdlog::logger> LOG::s_CoreLogger;
	std::shared_ptr<spdlog::logger> LOG::s_ClientLogger;

	void LOG::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("AMAZEL");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_CoreLogger->set_level(spdlog::level::trace);
	}
}
