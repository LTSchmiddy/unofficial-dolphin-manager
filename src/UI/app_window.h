#include <stdio.h>
#include <string>

#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>

#include <SDL2/SDL.h>

#ifndef APP_WINDOW
#define APP_WINDOW

class AppWindow {
public:
    std::string window_type;
    std::string uid;
    std::string window_name;

    bool open;
    
    ImGuiWindowFlags window_flags = 0;

    // Constructor & Destructor:    
    AppWindow();
    AppWindow(std::string p_window_name);
    ~AppWindow();

    // Common functions:
    void handle_event(SDL_Event* event);

    virtual void background();

    virtual void update();
    virtual void draw();
// protected:

// private:
    

};
#endif