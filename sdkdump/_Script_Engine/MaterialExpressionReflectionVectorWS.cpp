#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionReflectionVectorWS.hpp"
void* _Script_Engine::MaterialExpressionReflectionVectorWS::get_CustomWorldNormal() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::MaterialExpressionReflectionVectorWS::get_bNormalizeCustomWorldNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionReflectionVectorWS::set_bNormalizeCustomWorldNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionReflectionVectorWS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionReflectionVectorWS");
    return result;
}
