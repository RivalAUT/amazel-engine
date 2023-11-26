#include "azpch.h"
#include "Application.h"

#include "Amazel/Events/ApplicationEvent.h"
#include "Amazel/LOG.h"

#include <GLFW/glfw3.h>

namespace Amazel {
	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}
	Application::~Application() {
	}

	void Application::Run() {
		while (m_Running) {
			glClearColor(0.2, 0.2, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}

