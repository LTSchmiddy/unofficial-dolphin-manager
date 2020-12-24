#include <string>

#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>


extern bool quit_app;
extern ImVec4 clear_color;
extern ImGuiIO* io;
extern SDL_Window* sdl_window;
extern ImGuiStyle* style;;
extern SDL_GLContext gl_context;
extern std::string glsl_version;
extern bool show_style_window;
extern bool show_demo_window;



extern uint32_t framerate_limit;
extern uint32_t bg_tick_limit;