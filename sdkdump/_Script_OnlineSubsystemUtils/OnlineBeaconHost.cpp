#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlineBeacon.hpp"
#include "OnlineBeaconHost.hpp"
int32_t& _Script_OnlineSubsystemUtils::OnlineBeaconHost::get_ListenPort() {
    return *(int32_t*)((uintptr_t)this + 0x388);
}
void* _Script_OnlineSubsystemUtils::OnlineBeaconHost::get_ClientActors() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineBeaconHost::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlineBeaconHost");
    return result;
}
