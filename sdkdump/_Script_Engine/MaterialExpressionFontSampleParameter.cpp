#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionFontSample.hpp"
#include "MaterialExpressionFontSampleParameter.hpp"
void* _Script_Engine::MaterialExpressionFontSampleParameter::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::MaterialExpressionFontSampleParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::MaterialExpressionFontSampleParameter::get_Group() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFontSampleParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFontSampleParameter");
    return result;
}
