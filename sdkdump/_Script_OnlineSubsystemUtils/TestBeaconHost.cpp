#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlineBeaconHostObject.hpp"
#include "TestBeaconHost.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::TestBeaconHost::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.TestBeaconHost");
    return result;
}
