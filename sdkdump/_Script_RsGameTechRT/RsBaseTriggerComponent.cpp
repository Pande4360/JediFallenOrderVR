#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsBaseTriggerComponent.hpp"
bool _Script_RsGameTechRT::RsBaseTriggerComponent::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4b + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsBaseTriggerComponent::get_OnTriggerEntered() {
    return (void*)((uintptr_t)this + 0xb28);
}
void* _Script_RsGameTechRT::RsBaseTriggerComponent::get_OnTriggerExited() {
    return (void*)((uintptr_t)this + 0xb38);
}
void* _Script_RsGameTechRT::RsBaseTriggerComponent::get_TriggerType() {
    return (void*)((uintptr_t)this + 0xb48);
}
bool _Script_RsGameTechRT::RsBaseTriggerComponent::get_bDeactivateAfterTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0xb49 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBaseTriggerComponent::set_bDeactivateAfterTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb49 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBaseTriggerComponent::get_bDrawOnlyIfSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBaseTriggerComponent::set_bDrawOnlyIfSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4a + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsBaseTriggerComponent::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4b + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBaseTriggerComponent::get_ShapeColor() {
    return (void*)((uintptr_t)this + 0xb4c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBaseTriggerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBaseTriggerComponent");
    return result;
}
void* _Script_RsGameTechRT::RsBaseTriggerComponent::get_HeroPtr() {
    return (void*)((uintptr_t)this + 0xb50);
}
void _Script_RsGameTechRT::RsBaseTriggerComponent::SetTriggerEnabled(bool bEnabled) {
    return;
}
bool _Script_RsGameTechRT::RsBaseTriggerComponent::IsInTrigger(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_RsGameTechRT::RsBaseTriggerComponent::GetActorsInTrigger(void*& OutActorsInTrigger) {
    return;
}
