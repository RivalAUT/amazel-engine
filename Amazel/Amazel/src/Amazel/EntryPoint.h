#pragma once


#ifdef AZ_PLATFORM_WINDOWS

extern Amazel::Application* Amazel::CreateApplication();

void main(int argc, char** argv) {
	std::cout << "Amazel Engine" << std::endl;
	auto app = Amazel::CreateApplication();
	app->Run();
	delete app;
}

#endif

