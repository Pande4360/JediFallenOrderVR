#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureSampleParameter2D.hpp"
#include "MaterialExpressionTextureSampleParameterSubUV.hpp"
bool _Script_Engine::MaterialExpressionTextureSampleParameterSubUV::get_bBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionTextureSampleParameterSubUV::set_bBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSampleParameterSubUV::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSampleParameterSubUV");
    return result;
}
