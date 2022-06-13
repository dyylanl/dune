//
// Created by riclui on 11/06/22.
//

#ifndef DUNE_RECVTHREAD_H
#define DUNE_RECVTHREAD_H


#include "../../../Common/includes/Thread.h"
#include "../Characters/Player.h"
#include "../../../Common/includes/Protocol.h"

class RecvThread : public Thread {
private:
    std::vector<Player> &m_gameObjects;
    EventManager &m_eventManager;
    TextureManager &m_textureManager;
    Socket skt;
    Protocol &protocol;
public:
    RecvThread(std::vector<Player> &gameObjects, EventManager &eventManager, TextureManager &textureManager, Socket &socket, Protocol &protocol)
            : m_gameObjects(gameObjects), m_eventManager(eventManager), m_textureManager(textureManager),skt(std::move(socket)), protocol(protocol){}
    void run() override;

    void crearUnidad();

    void stop();
};


#endif //DUNE_RECVTHREAD_H