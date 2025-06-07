#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionArctangent2Fast.hpp"
void* _Script_Engine::MaterialExpressionArctangent2Fast::get_Y() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionArctangent2Fast::get_X() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionArctangent2Fast::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionArctangent2Fast");
    return result;
}
