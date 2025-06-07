#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsClimbComponent.hpp"
#include "SwClimbComponent.hpp"
#include "SwClimbSettings.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwClimbComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwClimbComponent");
    return result;
}
void _Script_SwGame::SwClimbComponent::OnStaminaMeterEmptied(void* ResponsibleStaminaName, float TimeUntilForceRegen) {
    return;
}
void _Script_SwGame::SwClimbComponent::OnEnterClimbNavState() {
    return;
}
bool _Script_SwGame::SwClimbComponent::IsCurrentAttachmentClimbingClawsOnly() {
    return;
}
_Script_SwGame::SwClimbSettings* _Script_SwGame::SwClimbComponent::GetSwClimbSettings() {
    return;
}
