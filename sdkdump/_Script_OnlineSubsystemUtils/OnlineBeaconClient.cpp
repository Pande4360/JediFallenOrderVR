#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetConnection.hpp"
#include "OnlineBeacon.hpp"
#include "OnlineBeaconClient.hpp"
#include "OnlineBeaconHostObject.hpp"
_Script_OnlineSubsystemUtils::OnlineBeaconHostObject*& _Script_OnlineSubsystemUtils::OnlineBeaconClient::get_BeaconOwner() {
    return *(_Script_OnlineSubsystemUtils::OnlineBeaconHostObject**)((uintptr_t)this + 0x388);
}
_Script_Engine::NetConnection*& _Script_OnlineSubsystemUtils::OnlineBeaconClient::get_BeaconConnection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineBeaconClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlineBeaconClient");
    return result;
}
void* _Script_OnlineSubsystemUtils::OnlineBeaconClient::get_ConnectionState() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Script_OnlineSubsystemUtils::OnlineBeaconClient::ClientOnConnected() {
    return;
}
