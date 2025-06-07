#include "..\FUObjectArray.hpp"
#include "AssetRegistryImpl.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetRegistryImpl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AssetRegistry.AssetRegistryImpl");
    return result;
}
