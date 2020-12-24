#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

#include <boost/foreach.hpp>

#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_opengl3.h>

// #include "app_window.h"
#include "menubar.h"
#include "main.h"

using namespace ImGui;
using namespace std;

bool menubar_is_main = false;
bool menubar_file_open;

void draw_menubar() {
    if (BeginMenu("File", &menubar_file_open)) {
        Checkbox("Show Demo Window", &show_demo_window);
        Checkbox("Show Style Window", &show_style_window);
        Checkbox("Menubar is main", &menubar_is_main);
        
        if (Button("Exit")) {
            quit_app = true;
        }
        
        EndMenu();   
    }
}