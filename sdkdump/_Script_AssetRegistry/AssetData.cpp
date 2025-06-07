#include "..\FUObjectArray.hpp"
#include "AssetData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AssetRegistry::AssetData::get_ObjectPath() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AssetRegistry::AssetData::get_PackageName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_AssetRegistry::AssetData::get_PackagePath() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AssetRegistry::AssetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AssetRegistry.AssetData");
    return result;
}
void* _Script_AssetRegistry::AssetData::get_AssetName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_AssetRegistry::AssetData::get_AssetClass() {
    return (void*)((uintptr_t)this + 0x20);
}
