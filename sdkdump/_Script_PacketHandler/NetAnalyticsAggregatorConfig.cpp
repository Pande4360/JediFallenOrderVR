#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NetAnalyticsAggregatorConfig.hpp"
void* _Script_PacketHandler::NetAnalyticsAggregatorConfig::get_NetAnalyticsData() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_PacketHandler::NetAnalyticsAggregatorConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PacketHandler.NetAnalyticsAggregatorConfig");
    return result;
}
