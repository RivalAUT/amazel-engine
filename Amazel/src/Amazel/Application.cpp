#include "Application.h"

#include "Amazel/Events/ApplicationEvent.h"
#include "Amazel/LOG.h"

namespace Amazel {
	Application::Application() {
	}
	Application::~Application() {
	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			LOG_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			LOG_TRACE(e);
		}
		while (true) {

		}
	}
}

