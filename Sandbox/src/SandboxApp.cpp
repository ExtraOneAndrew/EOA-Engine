#include <EOA.h>

class Sandbox : public EOA::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

EOA::Application* EOA::CreateApplication()
{
	return new Sandbox();
}
