#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TimelineTemplate.hpp"
bool _Script_Engine::TimelineTemplate::get_bAutoPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_Engine::TimelineTemplate::get_TimelineLength() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::TimelineTemplate::get_bReplicated() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
void* _Script_Engine::TimelineTemplate::get_LengthMode() {
    return (void*)((uintptr_t)this + 0x2c);
}
void _Script_Engine::TimelineTemplate::set_bAutoPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::TimelineTemplate::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void _Script_Engine::TimelineTemplate::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::TimelineTemplate::set_bReplicated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::TimelineTemplate::get_bValidatedAsWired() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 8 != 0;
}
void _Script_Engine::TimelineTemplate::set_bValidatedAsWired(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::TimelineTemplate::get_bIgnoreTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 16 != 0;
}
void _Script_Engine::TimelineTemplate::set_bIgnoreTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::TimelineTemplate::get_EventTracks() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::TimelineTemplate::get_FloatTracks() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::TimelineTemplate::get_VectorTracks() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::TimelineTemplate::get_LinearColorTracks() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::TimelineTemplate::get_MetaDataArray() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::TimelineTemplate::get_TimelineGuid() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::TimelineTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TimelineTemplate");
    return result;
}
