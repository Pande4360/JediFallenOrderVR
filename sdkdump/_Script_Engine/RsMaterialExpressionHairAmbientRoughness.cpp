#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionCustomOutput.hpp"
#include "RsMaterialExpressionHairAmbientRoughness.hpp"
void* _Script_Engine::RsMaterialExpressionHairAmbientRoughness::get_Input() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::RsMaterialExpressionHairAmbientRoughness::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsMaterialExpressionHairAmbientRoughness");
    return result;
}
