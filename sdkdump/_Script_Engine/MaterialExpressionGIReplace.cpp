#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionGIReplace.hpp"
void* _Script_Engine::MaterialExpressionGIReplace::get_Default() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionGIReplace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionGIReplace");
    return result;
}
void* _Script_Engine::MaterialExpressionGIReplace::get_StaticIndirect() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionGIReplace::get_DynamicIndirect() {
    return (void*)((uintptr_t)this + 0x70);
}
