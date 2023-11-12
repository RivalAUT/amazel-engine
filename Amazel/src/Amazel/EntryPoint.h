#pragma once


#ifdef AZ_PLATFORM_WINDOWS

extern Amazel::Application* Amazel::CreateApplication();

void main(int argc, char** argv) {
	Amazel::LOG::Init();
	AZ_CORE_WARN("Engine starting!");
	AZ_INFO("Hello!");

	auto app = Amazel::CreateApplication();
	app->Run();
	delete app;
}

#endif

