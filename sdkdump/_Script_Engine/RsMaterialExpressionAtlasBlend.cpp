#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustom.hpp"
#include "RsMaterialExpressionAtlasBlend.hpp"
void* _Script_Engine::RsMaterialExpressionAtlasBlend::get_AtlasBlendType() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::RsMaterialExpressionAtlasBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsMaterialExpressionAtlasBlend");
    return result;
}
