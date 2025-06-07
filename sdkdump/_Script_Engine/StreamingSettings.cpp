#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "StreamingSettings.hpp"
bool _Script_Engine::StreamingSettings::get_AsyncLoadingThreadEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::StreamingSettings::set_AsyncLoadingThreadEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::StreamingSettings::get_MinBulkDataSizeForAsyncLoading() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::StreamingSettings::get_WarnIfTimeLimitExceeded() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void _Script_Engine::StreamingSettings::set_WarnIfTimeLimitExceeded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::StreamingSettings::get_TimeLimitExceededMultiplier() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::StreamingSettings::get_TimeLimitExceededMinTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::StreamingSettings::get_UseBackgroundLevelStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::StreamingSettings::set_UseBackgroundLevelStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StreamingSettings::get_AsyncLoadingUseFullTimeLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
void _Script_Engine::StreamingSettings::set_AsyncLoadingUseFullTimeLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::StreamingSettings::get_AsyncLoadingTimeLimit() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::StreamingSettings::get_PriorityAsyncLoadingExtraTime() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::StreamingSettings::get_LevelStreamingActorsUpdateTimeLimit() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::StreamingSettings::get_PriorityLevelStreamingActorsUpdateExtraTime() {
    return *(float*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Engine::StreamingSettings::get_LevelStreamingComponentsRegistrationGranularity() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::StreamingSettings::get_LevelStreamingUnregisterComponentsTimeLimit() {
    return *(float*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::StreamingSettings::get_LevelStreamingComponentsUnregistrationGranularity() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
bool _Script_Engine::StreamingSettings::get_EventDrivenLoaderEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Engine::StreamingSettings::set_EventDrivenLoaderEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::StreamingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StreamingSettings");
    return result;
}
