#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionParameter.hpp"
#include "MaterialExpressionStaticBoolParameter.hpp"
void _Script_Engine::MaterialExpressionStaticBoolParameter::set_DefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialExpressionStaticBoolParameter::get_DefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionStaticBoolParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionStaticBoolParameter");
    return result;
}
