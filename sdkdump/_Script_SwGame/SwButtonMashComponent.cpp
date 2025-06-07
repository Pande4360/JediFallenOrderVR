#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "SwButtonMashComponent.hpp"
float& _Script_SwGame::SwButtonMashComponent::get_ButtonMashAnimNotifyTimeout() {
    return *(float*)((uintptr_t)this + 0x290);
}
void _Script_SwGame::SwButtonMashComponent::OnDied(_Script_Engine::Actor* DeadActor) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwButtonMashComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwButtonMashComponent");
    return result;
}
void _Script_SwGame::SwButtonMashComponent::MontageStarted(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_SwGame::SwButtonMashComponent::OnSingleButtonPress() {
    return;
}
void _Script_SwGame::SwButtonMashComponent::MontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
bool _Script_SwGame::SwButtonMashComponent::CanAcceptInput(void* ActionName) {
    return;
}
