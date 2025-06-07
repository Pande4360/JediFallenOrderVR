#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlineBeaconClient.hpp"
#include "TestBeaconClient.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::TestBeaconClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.TestBeaconClient");
    return result;
}
void _Script_OnlineSubsystemUtils::TestBeaconClient::ClientPing() {
    return;
}
void _Script_OnlineSubsystemUtils::TestBeaconClient::ServerPong() {
    return;
}
