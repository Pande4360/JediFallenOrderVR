#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSubtract.hpp"
void* _Script_Engine::MaterialExpressionSubtract::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSubtract::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSubtract");
    return result;
}
void* _Script_Engine::MaterialExpressionSubtract::get_B() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::MaterialExpressionSubtract::get_ConstA() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::MaterialExpressionSubtract::get_ConstB() {
    return *(float*)((uintptr_t)this + 0x74);
}
