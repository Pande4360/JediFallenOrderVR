#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimLinkableElement.hpp"
#include "AnimNotify.hpp"
#include "AnimNotifyEvent.hpp"
#include "AnimNotifyState.hpp"
float& _Script_Engine::AnimNotifyEvent::get_Duration() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::AnimNotifyEvent::get_DisplayTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::AnimNotifyEvent::get_TriggerTimeOffset() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::AnimNotifyEvent::get_EndTriggerTimeOffset() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::AnimNotifyEvent::get_TriggerWeightThreshold() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::AnimNotifyEvent::get_NotifyName() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::AnimNotifyEvent::set_bTriggerOnFollower(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimNotify*& _Script_Engine::AnimNotifyEvent::get_Notify() {
    return *(_Script_Engine::AnimNotify**)((uintptr_t)this + 0x48);
}
_Script_Engine::AnimNotifyState*& _Script_Engine::AnimNotifyEvent::get_NotifyStateClass() {
    return *(_Script_Engine::AnimNotifyState**)((uintptr_t)this + 0x50);
}
void* _Script_Engine::AnimNotifyEvent::get_EndLink() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AnimNotifyEvent::get_MontageTickType() {
    return (void*)((uintptr_t)this + 0x91);
}
bool _Script_Engine::AnimNotifyEvent::get_bConvertedFromBranchingPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_Engine::AnimNotifyEvent::set_bConvertedFromBranchingPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AnimNotifyEvent::get_NotifyTriggerChance() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_Engine::AnimNotifyEvent::get_NotifyFilterType() {
    return (void*)((uintptr_t)this + 0x98);
}
int32_t& _Script_Engine::AnimNotifyEvent::get_NotifyFilterLOD() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
bool _Script_Engine::AnimNotifyEvent::get_bTriggerOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Engine::AnimNotifyEvent::set_bTriggerOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimNotifyEvent::get_bTriggerOnFollower() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::AnimNotifyEvent::get_TrackIndex() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNotifyEvent");
    return result;
}
