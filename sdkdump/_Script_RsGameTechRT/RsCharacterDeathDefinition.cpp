#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsCharacterDeathDefinition.hpp"
void* _Script_RsGameTechRT::RsCharacterDeathDefinition::get_DamageToDeathMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsCharacterDeathDefinition::get_DeathDataContainer() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterDeathDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCharacterDeathDefinition");
    return result;
}
