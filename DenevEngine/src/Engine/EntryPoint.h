#pragma once

//For use by Denev Engine Applications
#ifdef  DENEV_ENGINE_PLATFORM_WINDOWS
extern DenevEngine::Application* DenevEngine::CreateApplication();

int main(int argc, char** argv)
{
	//Initializing the Application
	DenevEngine::Log::Init();
	DNV_CORE_WARNING("Initialized!");
	int a=5;
	DNV_INFO("Hello! Var = {0}", a);

	//Creating Application From Entry Point
	auto app = DenevEngine::CreateApplication();

	//Application Loop
	app->Run();

	//Application End
	delete app;
}

#endif
