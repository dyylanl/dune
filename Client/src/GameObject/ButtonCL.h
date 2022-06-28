//
// Created by riclui on 20/06/22.
//

#ifndef DUNE_BUTTONCL_H
#define DUNE_BUTTONCL_H

#include "SDL2pp/SDL2pp.hh"
#include "../Graphics/TextureManager.h"
#include "../Object/GameObject.h"


class ButtonCL : public GameObject{
protected:
    int m_id;
    char m_player;
    int m_constructionTime;
    bool m_selectStatus;
    bool m_ready;

public:
    ButtonCL(char textureID, SDL2pp::Point position, int id, char player, int constructionTime, bool selectStatus, bool ready);

    void update(EventManager &eventManager, BlockingQueue<CommandCL *> &queue);

    virtual void draw(SDL2pp::Renderer &renderer, TextureManager &textureManager);

    virtual void buildBuilding(BlockingQueue<CommandCL *> &queue, SDL2pp::Point point) = 0;
};


#endif //DUNE_BUTTONCL_H