#include "Game.h"

Game *game = nullptr;
const char* TITLE = "Popcat Man";
int width = 800;
int height = 600;

int main (int argc, char* args[]) {

    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game();

    game->init(TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, false);

    while (game->running()) {
        frameStart = SDL_GetTicks();

        game->eventHandler();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime) {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    game->clean();

    return 0;
}