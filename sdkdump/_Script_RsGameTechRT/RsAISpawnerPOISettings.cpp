#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIPOI.hpp"
#include "RsAISpawnerPOISettings.hpp"
bool _Script_RsGameTechRT::RsAISpawnerPOISettings::get_bCanAssignPOI() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
_Script_RsGameTechRT::RsAIPOI*& _Script_RsGameTechRT::RsAISpawnerPOISettings::get_POIToUseWhenSpawn() {
    return *(_Script_RsGameTechRT::RsAIPOI**)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsAISpawnerPOISettings::get_bHasPOI() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsAISpawnerPOISettings::get_bSpawnAtPOIPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerPOISettings::set_bHasPOI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_RsGameTechRT::RsAISpawnerPOISettings::set_bSpawnAtPOIPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAISpawnerPOISettings::set_bCanAssignPOI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerPOISettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerPOISettings");
    return result;
}
