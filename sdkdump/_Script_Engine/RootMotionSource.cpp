#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RootMotionSource.hpp"
void* _Script_Engine::RootMotionSource::get_Priority() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::RootMotionSource::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::RootMotionSource::get_LocalID() {
    return (void*)((uintptr_t)this + 0x12);
}
void* _Script_Engine::RootMotionSource::get_AccumulateMode() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::RootMotionSource::get_InstanceName() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::RootMotionSource::get_CurrentTime() {
    return *(float*)((uintptr_t)this + 0x24);
}
void _Script_Engine::RootMotionSource::set_bInLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RootMotionSource::get_Duration() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::RootMotionSource::get_PreviousTime() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RootMotionSource::get_Status() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::RootMotionSource::get_Settings() {
    return (void*)((uintptr_t)this + 0x31);
}
bool _Script_Engine::RootMotionSource::get_bInLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void* _Script_Engine::RootMotionSource::get_RootMotionParams() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::RootMotionSource::get_FinishVelocityParams() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSource");
    return result;
}
