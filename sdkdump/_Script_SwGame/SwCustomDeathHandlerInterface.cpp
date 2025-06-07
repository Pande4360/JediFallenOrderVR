#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwCustomDeathHandlerInterface.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwCustomDeathHandlerInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwCustomDeathHandlerInterface");
    return result;
}
void _Script_SwGame::SwCustomDeathHandlerInterface::OnPlayerDeath(_Script_Engine::Actor* DeadActor) {
    return;
}
