#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "RsLightEventData.hpp"
void _Script_Engine::RsLightEventData::set_bStartDelayRandomize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsLightEventData::get_Event() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::CurveFloat*& _Script_Engine::RsLightEventData::get_IntensityCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x8);
}
void _Script_Engine::RsLightEventData::set_bResetLightColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RsLightEventData::set_bLoopDelayRandomize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsLightEventData::get_bOverrideLightColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::RsLightEventData::set_bOverrideLightColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RsLightEventData::get_StartDelayRandomRange() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RsLightEventData::get_LightColor() {
    return (void*)((uintptr_t)this + 0x14);
}
bool _Script_Engine::RsLightEventData::get_bResetLightColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
float& _Script_Engine::RsLightEventData::get_AnimSpeed() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::RsLightEventData::get_StartDelay() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::RsLightEventData::get_bStartDelayRandomize() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
bool _Script_Engine::RsLightEventData::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_Engine::RsLightEventData::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsLightEventData::get_bLoopDelayRandomize() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d + 0)) & 1 != 0;
}
float& _Script_Engine::RsLightEventData::get_LoopDelay() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::RsLightEventData::get_NextEvent() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::RsLightEventData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsLightEventData");
    return result;
}
