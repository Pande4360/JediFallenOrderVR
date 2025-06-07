#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureSample.hpp"
#include "MaterialExpressionTextureSampleParameter.hpp"
void* _Script_Engine::MaterialExpressionTextureSampleParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::MaterialExpressionTextureSampleParameter::get_ParameterName() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::MaterialExpressionTextureSampleParameter::get_Group() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSampleParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSampleParameter");
    return result;
}
