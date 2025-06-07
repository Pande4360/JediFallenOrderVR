#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPinTelemetryPlatformSettings.hpp"
void* _Script_SwGame::RsPinTelemetryPlatformSettings::get_NetServiceName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_SwGame::RsPinTelemetryPlatformSettings::get_Domain() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::RsPinTelemetryPlatformSettings::get_TitleID() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::RsPinTelemetryPlatformSettings::get_GroupName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::RsPinTelemetryPlatformSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsPinTelemetryPlatformSettings");
    return result;
}
