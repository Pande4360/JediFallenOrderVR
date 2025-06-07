#include "..\FUObjectArray.hpp"
#include "AssetBundleEntry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AssetRegistry::AssetBundleEntry::get_BundleScope() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetBundleEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AssetRegistry.AssetBundleEntry");
    return result;
}
void* _Script_AssetRegistry::AssetBundleEntry::get_BundleName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AssetRegistry::AssetBundleEntry::get_BundleAssets() {
    return (void*)((uintptr_t)this + 0x18);
}
