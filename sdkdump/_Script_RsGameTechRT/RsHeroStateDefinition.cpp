#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHeroStateDefinition.hpp"
void* _Script_RsGameTechRT::RsHeroStateDefinition::get_DefaultMotionTweaks() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroStateDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHeroStateDefinition");
    return result;
}
void* _Script_RsGameTechRT::RsHeroStateDefinition::get_States() {
    return (void*)((uintptr_t)this + 0x40);
}
