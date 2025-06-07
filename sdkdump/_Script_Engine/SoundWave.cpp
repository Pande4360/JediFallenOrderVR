#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveTable.hpp"
#include "SoundBase.hpp"
#include "SoundWave.hpp"
bool _Script_Engine::SoundWave::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::SoundWave::get_SampleRate() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
int32_t& _Script_Engine::SoundWave::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
void _Script_Engine::SoundWave::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::SoundWave::get_StreamingPriority() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
void* _Script_Engine::SoundWave::get_SampleRateQuality() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::SoundWave::get_SoundGroup() {
    return (void*)((uintptr_t)this + 0xb2);
}
float& _Script_Engine::SoundWave::get_Volume() {
    return *(float*)((uintptr_t)this + 0xdc);
}
bool _Script_Engine::SoundWave::get_bStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3 + 0)) & 2 != 0;
}
void _Script_Engine::SoundWave::set_bStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SoundWave::get_bMature() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3 + 0)) & 128 != 0;
}
void _Script_Engine::SoundWave::set_bVirtualizeWhenSilent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SoundWave::set_bMature(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SoundWave::get_bManualWordWrap() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_Engine::SoundWave::set_bManualWordWrap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundWave::get_bSingleLine() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 2 != 0;
}
void _Script_Engine::SoundWave::set_bSingleLine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SoundWave::get_LocalizedSubtitles() {
    return (void*)((uintptr_t)this + 0x100);
}
bool _Script_Engine::SoundWave::get_bVirtualizeWhenSilent() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 4 != 0;
}
float& _Script_Engine::SoundWave::get_SubtitlePriority() {
    return *(float*)((uintptr_t)this + 0xd8);
}
bool _Script_Engine::SoundWave::get_bIsAmbisonics() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 8 != 0;
}
void _Script_Engine::SoundWave::set_bIsAmbisonics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::SoundWave::get_SpokenText() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_Engine::SoundWave::get_Pitch() {
    return *(float*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_Engine::SoundWave::get_NumChannels() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
void* _Script_Engine::SoundWave::get_Subtitles() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_Engine::CurveTable*& _Script_Engine::SoundWave::get_Curves() {
    return *(_Script_Engine::CurveTable**)((uintptr_t)this + 0x110);
}
_Script_Engine::CurveTable*& _Script_Engine::SoundWave::get_InternalCurves() {
    return *(_Script_Engine::CurveTable**)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Engine::SoundWave::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundWave");
    return result;
}
