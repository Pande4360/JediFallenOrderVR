#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "RsAbilityInstanceData.hpp"
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::RsAbilityInstanceData::get_HeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x90);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::RsAbilityInstanceData::get_CurrentAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityInstanceData");
    return result;
}
