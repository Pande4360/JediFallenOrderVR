#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTransformPosition.hpp"
void* _Script_Engine::MaterialExpressionTransformPosition::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionTransformPosition::get_TransformType() {
    return (void*)((uintptr_t)this + 0x59);
}
void* _Script_Engine::MaterialExpressionTransformPosition::get_TransformSourceType() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTransformPosition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTransformPosition");
    return result;
}
