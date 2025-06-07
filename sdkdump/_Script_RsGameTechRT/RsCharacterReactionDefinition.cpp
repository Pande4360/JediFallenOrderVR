#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsCharacterReactionDefinition.hpp"
void* _Script_RsGameTechRT::RsCharacterReactionDefinition::get_DamageToReactionMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsCharacterReactionDefinition::get_ReactionDataContainer() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterReactionDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCharacterReactionDefinition");
    return result;
}
void* _Script_RsGameTechRT::RsCharacterReactionDefinition::GetReactionFromDamageType(_Script_Engine::DamageType* DamageType) {
    return;
}
