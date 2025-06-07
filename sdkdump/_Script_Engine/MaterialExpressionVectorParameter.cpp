#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionParameter.hpp"
#include "MaterialExpressionVectorParameter.hpp"
void* _Script_Engine::MaterialExpressionVectorParameter::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionVectorParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionVectorParameter");
    return result;
}
