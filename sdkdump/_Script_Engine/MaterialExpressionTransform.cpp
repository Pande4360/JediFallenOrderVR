#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTransform.hpp"
void* _Script_Engine::MaterialExpressionTransform::get_TransformType() {
    return (void*)((uintptr_t)this + 0x59);
}
void* _Script_Engine::MaterialExpressionTransform::get_TransformSourceType() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionTransform::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTransform");
    return result;
}
