#pragma once

#ifdef EZ_PLATFORM_WINDOWS

extern EOA::Application* EOA::CreateApplication();

int main(int argc, char** argv) {

	printf("EOA Engine\n");

	auto app = EOA::CreateApplication();

	app->Run();

	delete app;

}

#endif