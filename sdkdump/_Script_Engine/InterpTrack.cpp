#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InterpTrack.hpp"
void* _Script_Engine::InterpTrack::get_ActiveCondition() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::InterpTrack::get_SubTracks() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::InterpTrack::get_TrackInstClass() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::InterpTrack::set_bDirGroupOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::InterpTrack::get_bOnePerGroup() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void* _Script_Engine::InterpTrack::get_TrackTitle() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::InterpTrack::set_bOnePerGroup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InterpTrack::get_bDirGroupOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 2 != 0;
}
void _Script_Engine::InterpTrack::set_bDisableTrack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::InterpTrack::get_bDisableTrack() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 4 != 0;
}
bool _Script_Engine::InterpTrack::get_bIsSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 8 != 0;
}
void _Script_Engine::InterpTrack::set_bIsSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::InterpTrack::get_bIsAnimControlTrack() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 16 != 0;
}
void _Script_Engine::InterpTrack::set_bIsAnimControlTrack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::InterpTrack::get_bSubTrackOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 32 != 0;
}
void _Script_Engine::InterpTrack::set_bSubTrackOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::InterpTrack::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 64 != 0;
}
void _Script_Engine::InterpTrack::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::InterpTrack::get_bIsRecording() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 128 != 0;
}
void _Script_Engine::InterpTrack::set_bIsRecording(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrack");
    return result;
}
