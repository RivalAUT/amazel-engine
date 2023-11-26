#pragma once


#ifdef AZ_PLATFORM_WINDOWS

extern Amazel::Application* Amazel::CreateApplication();

int main(int argc, char** argv) {
	Amazel::LOG::Init();
	LOG_CORE_WARN("Engine starting!");
	LOG_INFO("Hello!");

	auto app = Amazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif

