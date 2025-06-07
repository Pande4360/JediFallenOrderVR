#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapDoorComponent.hpp"
#include "SwDestructibleDoorActor.hpp"
#include "SwSimpleDestructibleActor.hpp"
_Script_RsGameTechRT::RsWorldMapDoorComponent*& _Script_SwGame::SwDestructibleDoorActor::get_WorldMapDoorComponent() {
    return *(_Script_RsGameTechRT::RsWorldMapDoorComponent**)((uintptr_t)this + 0x750);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDestructibleDoorActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDestructibleDoorActor");
    return result;
}
void _Script_SwGame::SwDestructibleDoorActor::OnDoorDestructed(_Script_Engine::Actor* DestructibleActor, int32_t PhaseIndex) {
    return;
}
