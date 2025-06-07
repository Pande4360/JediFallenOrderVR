#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "SwAIFightComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAIFightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAIFightComponent");
    return result;
}
void _Script_SwGame::SwAIFightComponent::OnOwnerRevived(_Script_Engine::Actor* RevivedActor) {
    return;
}
