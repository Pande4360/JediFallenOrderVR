#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionArctangentFast.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionArctangentFast::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionArctangentFast");
    return result;
}
void* _Script_Engine::MaterialExpressionArctangentFast::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
