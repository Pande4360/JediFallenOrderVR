#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BroadphaseSettings.hpp"
void* _Script_Engine::BroadphaseSettings::get_MBPNumSubdivs() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::BroadphaseSettings::get_bUseMBPOnServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_Engine::BroadphaseSettings::get_bUseMBPOnClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::BroadphaseSettings::set_bUseMBPOnServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::BroadphaseSettings::set_bUseMBPOnClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BroadphaseSettings::get_MBPBounds() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::BroadphaseSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BroadphaseSettings");
    return result;
}
