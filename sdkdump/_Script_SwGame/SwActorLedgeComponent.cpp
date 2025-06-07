#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsActorLedgeComponent.hpp"
#include "SwActorLedgeComponent.hpp"
#include "SwActorLedgeSettings.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwActorLedgeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwActorLedgeComponent");
    return result;
}
void _Script_SwGame::SwActorLedgeComponent::OnEnterLedgeNavState() {
    return;
}
_Script_SwGame::SwActorLedgeSettings* _Script_SwGame::SwActorLedgeComponent::GetSwLedgeSettings() {
    return;
}
