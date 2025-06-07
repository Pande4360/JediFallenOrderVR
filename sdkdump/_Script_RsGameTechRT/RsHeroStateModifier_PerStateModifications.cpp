#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHeroStateModifier_PerStateModifications.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroStateModifier_PerStateModifications::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHeroStateModifier_PerStateModifications");
    return result;
}
void* _Script_RsGameTechRT::RsHeroStateModifier_PerStateModifications::get_State() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsHeroStateModifier_PerStateModifications::get_Modifications() {
    return (void*)((uintptr_t)this + 0x8);
}
