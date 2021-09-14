#if defined(FE_PLAT_WINDOWS) && defined(FE_CONF_DIST)
#	include <Windows.h>
#endif

#include <spdlog/spdlog.h>

#if defined(FE_PLAT_WINDOWS) && defined(FE_CONF_DIST)
int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ PWSTR pCmdLine, _In_ int nCmdShow)
#else
int main(int argc, char* argv[])
#endif
{
	spdlog::info("OpenGL Testbed");
}