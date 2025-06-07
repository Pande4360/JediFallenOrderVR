#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetConnection.hpp"
#include "IpConnection.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::IpConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.IpConnection");
    return result;
}
