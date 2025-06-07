#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwLightsaberMarkSurfaceInfo.hpp"
float& _Script_SwGame::SwLightsaberMarkSurfaceInfo::get_ParticleOffsetAlongNormal() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::SwLightsaberMarkSurfaceInfo::get_DecalMaterial() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwLightsaberMarkSurfaceInfo::get_ParticleEffect() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::SwLightsaberMarkSurfaceInfo::get_bPlayAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_SwGame::SwLightsaberMarkSurfaceInfo::set_bPlayAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwLightsaberMarkSurfaceInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwLightsaberMarkSurfaceInfo");
    return result;
}
