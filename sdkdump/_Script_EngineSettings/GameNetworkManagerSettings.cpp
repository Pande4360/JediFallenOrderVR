#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameNetworkManagerSettings.hpp"
bool _Script_EngineSettings::GameNetworkManagerSettings::get_bIsStandbyCheckingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
int32_t& _Script_EngineSettings::GameNetworkManagerSettings::get_MinDynamicBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_EngineSettings::GameNetworkManagerSettings::get_MaxDynamicBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
float& _Script_EngineSettings::GameNetworkManagerSettings::get_StandbyRxCheatTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_EngineSettings::GameNetworkManagerSettings::get_TotalNetBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_EngineSettings::GameNetworkManagerSettings::get_BadPingThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_EngineSettings::GameNetworkManagerSettings::get_StandbyTxCheatTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_EngineSettings::GameNetworkManagerSettings::set_bIsStandbyCheckingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_EngineSettings::GameNetworkManagerSettings::get_PercentMissingForRxStandby() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_EngineSettings::GameNetworkManagerSettings::get_PercentMissingForTxStandby() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_EngineSettings::GameNetworkManagerSettings::get_PercentForBadPing() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_EngineSettings::GameNetworkManagerSettings::get_JoinInProgressStandbyWaitTime() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_EngineSettings::GameNetworkManagerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.GameNetworkManagerSettings");
    return result;
}
