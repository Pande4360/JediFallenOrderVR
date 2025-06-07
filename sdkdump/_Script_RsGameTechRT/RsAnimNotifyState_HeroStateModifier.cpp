#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
#include "RsAnimNotifyState_HeroStateModifier.hpp"
#include "RsHeroStateModifierDefinition.hpp"
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsAnimNotifyState_HeroStateModifier::get_ModifierDefinition() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xc0);
}
bool _Script_RsGameTechRT::RsAnimNotifyState_HeroStateModifier::get_bCheckValidBeforePushing() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAnimNotifyState_HeroStateModifier::set_bCheckValidBeforePushing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_HeroStateModifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_HeroStateModifier");
    return result;
}
