#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDistanceFieldGradient.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDistanceFieldGradient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDistanceFieldGradient");
    return result;
}
void* _Script_Engine::MaterialExpressionDistanceFieldGradient::get_Position() {
    return (void*)((uintptr_t)this + 0x40);
}
