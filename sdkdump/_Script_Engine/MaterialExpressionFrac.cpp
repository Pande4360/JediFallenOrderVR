#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionFrac.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFrac::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFrac");
    return result;
}
void* _Script_Engine::MaterialExpressionFrac::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
