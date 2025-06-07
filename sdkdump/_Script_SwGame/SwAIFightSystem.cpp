#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwAIFightSystem.hpp"
#include "SwAIPredatorPreyDirector.hpp"
_Script_SwGame::SwAIPredatorPreyDirector*& _Script_SwGame::SwAIFightSystem::get_PredatorPreyDirector() {
    return *(_Script_SwGame::SwAIPredatorPreyDirector**)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAIFightSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIFightSystem");
    return result;
}
void _Script_SwGame::SwAIFightSystem::OnVictimDied(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Script_SwGame::SwAIFightSystem::OnVictimDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
