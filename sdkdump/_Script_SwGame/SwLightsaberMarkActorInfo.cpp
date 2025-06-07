#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwLightsaberMarkActorInfo.hpp"
void* _Script_SwGame::SwLightsaberMarkActorInfo::get_ActorClass() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwLightsaberMarkActorInfo::get_LineWidth() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_SwGame::SwLightsaberMarkActorInfo::set_bPerformAllRaytracesOnHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwLightsaberMarkActorInfo::get_bPerformAllRaytracesOnHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
int32_t& _Script_SwGame::SwLightsaberMarkActorInfo::get_MaxSubframeRaycasts() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SwGame::SwLightsaberMarkActorInfo::get_MinSubframeRaycasts() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_SwGame::SwLightsaberMarkActorInfo::get_UVChannel() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
float& _Script_SwGame::SwLightsaberMarkActorInfo::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::SwLightsaberMarkActorInfo::get_EdgeIntensity() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::SwLightsaberMarkActorInfo::get_Mask() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_SwGame::SwLightsaberMarkActorInfo::get_ParticleEffect() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_SwGame::SwLightsaberMarkActorInfo::get_bPlayAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
float& _Script_SwGame::SwLightsaberMarkActorInfo::get_ParticleOffsetAlongNormal() {
    return *(float*)((uintptr_t)this + 0x68);
}
void _Script_SwGame::SwLightsaberMarkActorInfo::set_bPlayAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwLightsaberMarkActorInfo::get_SurfaceTypeAudioOverride() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_SwGame::SwLightsaberMarkActorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwLightsaberMarkActorInfo");
    return result;
}
