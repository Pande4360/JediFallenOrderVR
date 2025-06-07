#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsHeroGlobalSettings.hpp"
void* _Script_RsGameTechRT::RsHeroGlobalSettings::get_RsHeroFlagSetDefinition() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsHeroGlobalSettings::get_DefaultSyncHeroStateModifierAssetRef() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsHeroGlobalSettings::get_NoExtCancelRef() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroGlobalSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHeroGlobalSettings");
    return result;
}
