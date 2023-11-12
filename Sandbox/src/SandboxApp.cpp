#include <Amazel.h>

class Sandbox : public Amazel::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Amazel::Application* Amazel::CreateApplication() {
	return new Sandbox();
}
