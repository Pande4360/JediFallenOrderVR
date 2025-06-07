#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHeroStateModifierDefinition.hpp"
void _Script_RsGameTechRT::RsHeroStateModifierDefinition::set_bAllowPerStateModifications(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsHeroStateModifierDefinition::get_ValidStates() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_RsGameTechRT::RsHeroStateModifierDefinition::get_InvertValidStates() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsHeroStateModifierDefinition::set_InvertValidStates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsHeroStateModifierDefinition::get_DefaultModifications() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsHeroStateModifierDefinition::get_PerStateModifications() {
    return (void*)((uintptr_t)this + 0xa8);
}
bool _Script_RsGameTechRT::RsHeroStateModifierDefinition::get_bAllowPerStateModifications() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroStateModifierDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHeroStateModifierDefinition");
    return result;
}
