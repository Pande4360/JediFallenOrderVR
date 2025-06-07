#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InteriorSettings.hpp"
bool _Script_Engine::InteriorSettings::get_bIsWorldSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::InteriorSettings::set_bIsWorldSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::InteriorSettings::get_ExteriorVolume() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::InteriorSettings::get_ExteriorTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::InteriorSettings::get_InteriorTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::InteriorSettings::get_ExteriorLPF() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::InteriorSettings::get_ExteriorLPFTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::InteriorSettings::get_InteriorVolume() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::InteriorSettings::get_InteriorLPF() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::InteriorSettings::get_InteriorLPFTime() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::InteriorSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InteriorSettings");
    return result;
}
