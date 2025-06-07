#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAxisProperties.hpp"
bool _Script_Engine::InputAxisProperties::get_bInvert() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
float& _Script_Engine::InputAxisProperties::get_DeadZone() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::InputAxisProperties::get_Sensitivity() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::InputAxisProperties::get_Exponent() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_Engine::InputAxisProperties::set_bInvert(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InputAxisProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputAxisProperties");
    return result;
}
