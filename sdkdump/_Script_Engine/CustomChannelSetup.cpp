#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomChannelSetup.hpp"
bool _Script_Engine::CustomChannelSetup::get_bTraceType() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void* _Script_Engine::CustomChannelSetup::get_Channel() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::CustomChannelSetup::set_bTraceType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::CustomChannelSetup::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::CustomChannelSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomChannelSetup");
    return result;
}
bool _Script_Engine::CustomChannelSetup::get_bStaticObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x12 + 0)) & 1 != 0;
}
void* _Script_Engine::CustomChannelSetup::get_DefaultResponse() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::CustomChannelSetup::set_bStaticObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12 + 0);
    *(uint8_t*)((uintptr_t)this + 0x12 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
