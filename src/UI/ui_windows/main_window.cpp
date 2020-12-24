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
#include "main_window.h"
#include "../menubar/menubar.h"
#include "main.h"

using namespace ImGui;
using namespace std;

// char input_buffer[MAIN_WINDOW_INPUT_BUFFER_SIZE];

MainWindow::MainWindow() {
}

MainWindow::~MainWindow() {}

void MainWindow::background() {
    
}

void MainWindow::update() {
    SDL_GetWindowSize(sdl_window, &win_x, &win_y);

    SetNextWindowPos(ImVec2(0, 0));
    SetNextWindowSize(ImVec2((float)win_x, (float)win_y));    
    Begin(window_name.c_str(), &open, window_flags);
    draw();
    End();
}


void MainWindow::draw() {
    if (!menubar_is_main){
        if (BeginMenuBar()) {
            draw_menubar();
            EndMenuBar();
        }
    }



}


