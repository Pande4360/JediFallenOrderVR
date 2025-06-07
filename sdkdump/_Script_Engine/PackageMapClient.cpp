#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\PackageMap.hpp"
#include "PackageMapClient.hpp"
_Script_CoreUObject::Class* _Script_Engine::PackageMapClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PackageMapClient");
    return result;
}
