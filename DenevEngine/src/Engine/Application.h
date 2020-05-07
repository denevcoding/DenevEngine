#pragma once
#include "Core.h"
#include "Events/Event.h"

namespace DenevEngine
{
	class DENEV_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be define in CLIENT
	Application* CreateApplication();
}


