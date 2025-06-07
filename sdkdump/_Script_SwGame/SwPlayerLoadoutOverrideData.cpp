#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "SwPlayerLoadoutOverrideData.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwPlayerLoadoutOverrideData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPlayerLoadoutOverrideData");
    return result;
}
void* _Script_SwGame::SwPlayerLoadoutOverrideData::get_Loadout() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_SwGame::SwPlayerLoadoutOverrideData::get_Upgrades() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_SwGame::SwPlayerLoadoutOverrideData::get_HealthMeterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_SwGame::SwPlayerLoadoutOverrideData::get_ForceMeterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
int32_t& _Script_SwGame::SwPlayerLoadoutOverrideData::get_HealthPotCount() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::SwPlayerLoadoutOverrideData::get_LevelTags() {
    return (void*)((uintptr_t)this + 0x60);
}
