#include "..\FUObjectArray.hpp"
#include "AssetBundleData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AssetRegistry::AssetBundleData::get_Bundles() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetBundleData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AssetRegistry.AssetBundleData");
    return result;
}
