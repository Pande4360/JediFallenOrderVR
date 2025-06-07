#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsPinTelemetrySettings.hpp"
void* _Script_SwGame::RsPinTelemetrySettings::get_GameWorldNameMap() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_SwGame::RsPinTelemetrySettings::get_PinTestServerAddress() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_SwGame::RsPinTelemetrySettings::get_PinServerPort() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_SwGame::RsPinTelemetrySettings::get_PinShippingServerAddress() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_SwGame::RsPinTelemetrySettings::get_HeartbeatInterval() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_SwGame::RsPinTelemetrySettings::get_PlatformSettings() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_SwGame::RsPinTelemetrySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsPinTelemetrySettings");
    return result;
}
