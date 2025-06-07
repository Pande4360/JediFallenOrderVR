#include "..\FUObjectArray.hpp"
#include "AISenseConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
float& _Script_AIModule::AISenseConfig::get_MaxAge() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_AIModule::AISenseConfig::get_DebugColor() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_AIModule::AISenseConfig::set_bStartsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISenseConfig::get_bStartsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::AISenseConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseConfig");
    return result;
}
