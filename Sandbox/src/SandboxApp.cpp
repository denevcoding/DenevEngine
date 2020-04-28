#include <DenevEngine.h>

class Sandbox : public DenevEngine::Application
{
public:
	Sandbox()
	{
		
	}
	~Sandbox()
	{
		
	}
};


DenevEngine::Application* DenevEngine::CreateApplication()
{
	return new Sandbox();
}