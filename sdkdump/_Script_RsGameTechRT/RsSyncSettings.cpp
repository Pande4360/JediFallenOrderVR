#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsSyncSettings.hpp"
void _Script_RsGameTechRT::RsSyncSettings::set_SyncsWithVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsSyncSettings::get_AngularVelocityCloseness() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_RsGameTechRT::RsSyncSettings::get_VelocityAcceleration() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsSyncSettings::get_VelocityCurveAsset() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsSyncSettings::get_AngularVelocityCurveAsset() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsSyncSettings::get_NonCharacterChannel() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_RsGameTechRT::RsSyncSettings::get_AngularVelocityBlendCurveAsset() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsSyncSettings::get_DefaultSyncHeroStateModifierAssetRef() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_RsGameTechRT::RsSyncSettings::get_DefaultSyncNavHeroStateModifierAssetRef() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsSyncSettings::get_DefaultSyncHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xd8);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsSyncSettings::get_DefaultSyncNavHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xe0);
}
float& _Script_RsGameTechRT::RsSyncSettings::get_NavSyncTimeout() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_RsGameTechRT::RsSyncSettings::get_NavSyncTimeoutDistance() {
    return *(float*)((uintptr_t)this + 0xec);
}
bool _Script_RsGameTechRT::RsSyncSettings::get_SyncsWithVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSyncSettings");
    return result;
}
