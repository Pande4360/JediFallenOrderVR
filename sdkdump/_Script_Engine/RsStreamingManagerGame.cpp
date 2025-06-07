#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "RsStreamingManager.hpp"
#include "RsStreamingManagerGame.hpp"
void* _Script_Engine::RsStreamingManagerGame::get_PlayerStartLists() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::Actor*& _Script_Engine::RsStreamingManagerGame::get_RestartAtPlayerStart() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_Engine::RsStreamingManagerGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsStreamingManagerGame");
    return result;
}
