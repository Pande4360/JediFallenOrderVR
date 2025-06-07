#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "RsLightTriggerComponent.hpp"
void* _Script_Engine::RsLightTriggerComponent::get_Events() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::RsLightTriggerComponent::get_MaterialAdjustmentActors() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Script_Engine::RsLightTriggerComponent::get_bSaveBeginPlayState() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
bool _Script_Engine::RsLightTriggerComponent::get_bHandledBeginPlayEvent() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
void _Script_Engine::RsLightTriggerComponent::set_bSaveBeginPlayState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsLightTriggerComponent::get_ComponentPathMaterialMappings() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::RsLightTriggerComponent::get_MaterialInstances() {
    return (void*)((uintptr_t)this + 0x198);
}
void _Script_Engine::RsLightTriggerComponent::set_bHandledBeginPlayEvent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::RsLightTriggerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsLightTriggerComponent");
    return result;
}
bool _Script_Engine::RsLightTriggerComponent::RespondsToEvent(void* EventName) {
    return;
}
bool _Script_Engine::RsLightTriggerComponent::HandleEvent(void* EventName, bool bMatchStartingIntensity) {
    return;
}
void* _Script_Engine::RsLightTriggerComponent::GetActiveEvent() {
    return;
}
