//
// Created by Hans on 2021-01-21.
//

#include "Game.h"
#include "TextureManager.h"

SDL_Texture* playerTexture;
SDL_Rect srcR, dstR;

Game::Game() {}

Game::~Game() {}

void Game::init(const char *TITLE, int xpos, int ypos, int width, int height, bool fullscreen) {

    int flags = 0;

    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

        window = SDL_CreateWindow(TITLE, xpos, ypos, width, height, flags);

        renderer = SDL_CreateRenderer(window, -1, 0);

        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        }

        isRunning = true;
    }

    playerTexture = TextureManager::loadTexture(".\\resources\\right.bmp", renderer);

}

bool Game::running() { return isRunning; }

void Game::eventHandler() {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;

        default:
            break;
    }

}

void Game::update() {

    dstR.w = 128;
    dstR.h = 128;
    dstR.x = count;

    count++;

}

void Game::render() {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, playerTexture, NULL, &dstR);
    SDL_RenderPresent(renderer);
}

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}