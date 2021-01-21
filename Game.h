//
// Created by Hans on 2021-01-21.
//

#ifndef POPCATMAN_GAME_H
#define POPCATMAN_GAME_H
#include <SDL.h>
#include <iostream>


class Game {

public:
    Game();

    ~Game();

    void init(const char* TITLE, int xpos, int ypos, int width, int height, bool fullscreen);

    bool running();

    void eventHandler();

    void update();

    void render();

    void clean();

private:
    int count = 0;
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;

};


#endif //POPCATMAN_GAME_H
