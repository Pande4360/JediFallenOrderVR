#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionAppendVector.hpp"
void* _Script_Engine::MaterialExpressionAppendVector::get_A() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionAppendVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionAppendVector");
    return result;
}
void* _Script_Engine::MaterialExpressionAppendVector::get_B() {
    return (void*)((uintptr_t)this + 0x58);
}
