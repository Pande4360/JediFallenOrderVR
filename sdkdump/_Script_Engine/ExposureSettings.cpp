#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExposureSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::ExposureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExposureSettings");
    return result;
}
bool _Script_Engine::ExposureSettings::get_bFixed() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
float& _Script_Engine::ExposureSettings::get_FixedEV100() {
    return *(float*)((uintptr_t)this + 0x0);
}
void _Script_Engine::ExposureSettings::set_bFixed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
