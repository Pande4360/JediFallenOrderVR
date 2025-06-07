#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "Interface_AssetUserData.hpp"
_Script_CoreUObject::Class* _Script_Engine::Interface_AssetUserData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Interface_AssetUserData");
    return result;
}
