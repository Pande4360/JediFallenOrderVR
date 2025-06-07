#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHeroFlagSetDefinition.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroFlagSetDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHeroFlagSetDefinition");
    return result;
}
void* _Script_RsGameTechRT::RsHeroFlagSetDefinition::get_DefaultSetFlags() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsHeroFlagSetDefinition::get_DefaultInvalidFlags() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsHeroFlagSetDefinition::get_Sets() {
    return (void*)((uintptr_t)this + 0x50);
}
