#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationRecordingSettings.hpp"
bool _Script_Engine::AnimationRecordingSettings::get_bRecordInWorldSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_Engine::AnimationRecordingSettings::get_bRemoveRootAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::AnimationRecordingSettings::set_bRecordInWorldSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AnimationRecordingSettings::set_bRemoveRootAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimationRecordingSettings::get_bAutoSaveAsset() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
float& _Script_Engine::AnimationRecordingSettings::get_SampleRate() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_Engine::AnimationRecordingSettings::set_bAutoSaveAsset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AnimationRecordingSettings::get_Length() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::AnimationRecordingSettings::get_InterpMode() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::AnimationRecordingSettings::get_TangentMode() {
    return (void*)((uintptr_t)this + 0xd);
}
_Script_CoreUObject::Class* _Script_Engine::AnimationRecordingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimationRecordingSettings");
    return result;
}
