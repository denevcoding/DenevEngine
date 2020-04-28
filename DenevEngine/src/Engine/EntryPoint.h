#pragma once

//For use by Denev Engine Applications
#ifdef  DENEV_ENGINE_PLATFORM_WINDOWS
extern DenevEngine::Application* DenevEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Denev Engine started\n");
	auto app = DenevEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
