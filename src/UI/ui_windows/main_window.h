#include <stdio.h>
#include <string>
#include <vector>

#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>

#include <SDL2/SDL.h>

#include "../app_window.h"


#define MAIN_WINDOW_INPUT_BUFFER_SIZE 64

class MainWindow : public AppWindow {
public:
    MainWindow();
    ~MainWindow();
    
    std::string window_name = "##main";
    ImGuiWindowFlags window_flags = 0
        | ImGuiWindowFlags_MenuBar 
        | ImGuiWindowFlags_NoBringToFrontOnFocus
        | ImGuiWindowFlags_NoCollapse
        | ImGuiWindowFlags_NoMove
        | ImGuiWindowFlags_NoResize
        | ImGuiWindowFlags_NoTitleBar;


    // std::vector<std::string> log;
    std::string ns_name = "main";
    std::vector<std::string> cmd_history;

    // Methods:
    void background() override;
    void update() override;
    void draw() override;
private:
    // Variables:
    const std::string input_label = "_input";
    int win_x, win_y;

    // Menu state variables:

    
    // Navigation control variables;
    // int input_callback(ImGuiInputTextCallbackData* data);
};

