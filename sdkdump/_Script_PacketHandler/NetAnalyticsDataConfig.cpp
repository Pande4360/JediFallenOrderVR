#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetAnalyticsDataConfig.hpp"
void* _Script_PacketHandler::NetAnalyticsDataConfig::get_DataName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_PacketHandler::NetAnalyticsDataConfig::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_PacketHandler::NetAnalyticsDataConfig::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_PacketHandler::NetAnalyticsDataConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PacketHandler.NetAnalyticsDataConfig");
    return result;
}
