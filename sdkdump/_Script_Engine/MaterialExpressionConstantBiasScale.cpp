#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionConstantBiasScale.hpp"
void* _Script_Engine::MaterialExpressionConstantBiasScale::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionConstantBiasScale::get_Scale() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::MaterialExpressionConstantBiasScale::get_Bias() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionConstantBiasScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionConstantBiasScale");
    return result;
}
