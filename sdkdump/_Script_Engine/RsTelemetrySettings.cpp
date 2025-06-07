#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsTelemetrySettings.hpp"
bool _Script_Engine::RsTelemetrySettings::get_bTelemetryLoggingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
bool _Script_Engine::RsTelemetrySettings::get_bTelemetryLoggingEnabledInPIE() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_Engine::RsTelemetrySettings::set_bTelemetryLoggingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RsTelemetrySettings::set_bUploadTelemetryLogs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RsTelemetrySettings::set_bTelemetryLoggingEnabledInPIE(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsTelemetrySettings::get_TelemetryLogExtension() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::RsTelemetrySettings::get_bUploadTelemetryLogs() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void* _Script_Engine::RsTelemetrySettings::get_TelemetryUploadLocation() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::RsTelemetrySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsTelemetrySettings");
    return result;
}
