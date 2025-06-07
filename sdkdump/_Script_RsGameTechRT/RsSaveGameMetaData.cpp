#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSaveGameMetaData.hpp"
void _Script_RsGameTechRT::RsSaveGameMetaData::set_bMainStoryComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSaveGameMetaData::get_PlanetRegion() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsSaveGameMetaData::get_ElapsedPlayTime() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_RsGameTechRT::RsSaveGameMetaData::get_Difficulty() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void _Script_RsGameTechRT::RsSaveGameMetaData::set_bIsNewGamePlus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSaveGameMetaData::get_bMainStoryComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSaveGameMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSaveGameMetaData");
    return result;
}
float& _Script_RsGameTechRT::RsSaveGameMetaData::get_PercentComplete() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_RsGameTechRT::RsSaveGameMetaData::get_bIsNewGamePlus() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
