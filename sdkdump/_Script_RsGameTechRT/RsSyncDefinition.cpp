#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsSyncDefinition.hpp"
void* _Script_RsGameTechRT::RsSyncDefinition::get_BreakOnMontageEnd() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsSyncDefinition::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x154);
}
void* _Script_RsGameTechRT::RsSyncDefinition::get_BreakOnTakeDamage() {
    return (void*)((uintptr_t)this + 0x31);
}
void* _Script_RsGameTechRT::RsSyncDefinition::get_LocationSyncType() {
    return (void*)((uintptr_t)this + 0x32);
}
void* _Script_RsGameTechRT::RsSyncDefinition::get_Master() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x158 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bDisallowAIAttacks() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsSyncDefinition::get_Slaves() {
    return (void*)((uintptr_t)this + 0x140);
}
float& _Script_RsGameTechRT::RsSyncDefinition::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x150);
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x158 + 0);
    *(uint8_t*)((uintptr_t)this + 0x158 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bAdjustSyncLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x159 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bAdjustSyncLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x159 + 0);
    *(uint8_t*)((uintptr_t)this + 0x159 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bNavToSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x15a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bNavToSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15a + 0);
    *(uint8_t*)((uintptr_t)this + 0x15a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsSyncDefinition::get_SyncDistance() {
    return *(float*)((uintptr_t)this + 0x15c);
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bNavIgnoreZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bNavIgnoreZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Script_RsGameTechRT::RsSyncDefinition::get_VelocityCurveOverride() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x168);
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bDisallowAIAttacks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bGroundWithRaycasts() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bGroundWithRaycasts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncDefinition::get_bOrientZWithGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x172 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncDefinition::set_bOrientZWithGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x172 + 0);
    *(uint8_t*)((uintptr_t)this + 0x172 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSyncDefinition");
    return result;
}
