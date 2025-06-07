#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CheatManager.hpp"
#include "SwCheatManager.hpp"
void _Script_SwGame::SwCheatManager::AIReturnHomeAndGoToSleepAll() {
    return;
}
void* _Script_SwGame::SwCheatManager::get_DebugActorClass() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::SwCheatManager::get_PlayerControllerDebugComponentClasses() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_Engine::Actor*& _Script_SwGame::SwCheatManager::get_DebugActorInstance() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_SwGame::SwCheatManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwCheatManager");
    return result;
}
void _Script_SwGame::SwCheatManager::HubDebug() {
    return;
}
void _Script_SwGame::SwCheatManager::UnlockDatabank() {
    return;
}
void _Script_SwGame::SwCheatManager::AISleepAll() {
    return;
}
void _Script_SwGame::SwCheatManager::AIGod() {
    return;
}
void _Script_SwGame::SwCheatManager::AIAwakeAll() {
    return;
}
