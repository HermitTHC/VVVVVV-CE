#ifndef GRAPHICSRESOURCES_H
#define GRAPHICSRESOURCES_H

#if defined(__SWITCH__) || defined(__ANDROID__)
    #include <SDL2/SDL.h>
#else
    #include <SDL.h>
#endif

#include <map>

SDL_Surface* LoadImage(const char *filename, bool noBlend = true, bool noAlpha = false, bool optional = false);

class GraphicsResources
{
public:
    void init(void);
    ~GraphicsResources(void);

    SDL_Surface* im_tiles;
    SDL_Surface* im_tiles2;
    SDL_Surface* im_tiles3;
    SDL_Surface* im_entcolours;
    SDL_Surface* im_sprites;
    SDL_Surface* im_flipsprites;
    SDL_Surface* im_bfont;
    SDL_Surface* im_unifont;
    SDL_Surface* im_wideunifont;
    SDL_Surface* im_bfontmask;
    SDL_Surface* im_teleporter;
    SDL_Surface* im_image0;
    SDL_Surface* im_image1;
    SDL_Surface* im_image2;
    SDL_Surface* im_image3;
    SDL_Surface* im_image4;
    SDL_Surface* im_image5;
    SDL_Surface* im_image6;
    SDL_Surface* im_image7;
    SDL_Surface* im_image8;
    SDL_Surface* im_image9;
    SDL_Surface* im_image10;
    SDL_Surface* im_image11;
    SDL_Surface* im_image12;

    std::map<int, SDL_Surface*> im_customtiles;
    std::map<int, SDL_Surface*> im_customsprites;
};

#endif /* GRAPHICSRESOURCES_H */
