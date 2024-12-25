#pragma once

#include "Core.h"

namespace EOA {

	class EOA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	// To be defined in CLIENT
	Application* CreateApplication();

}