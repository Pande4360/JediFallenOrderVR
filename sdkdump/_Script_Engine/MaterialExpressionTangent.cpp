#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTangent.hpp"
void* _Script_Engine::MaterialExpressionTangent::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::MaterialExpressionTangent::get_Period() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTangent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTangent");
    return result;
}
