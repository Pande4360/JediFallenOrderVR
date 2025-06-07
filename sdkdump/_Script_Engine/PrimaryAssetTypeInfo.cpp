#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimaryAssetTypeInfo.hpp"
void* _Script_Engine::PrimaryAssetTypeInfo::get_AssetScanPaths() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::PrimaryAssetTypeInfo::get_Directories() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::PrimaryAssetTypeInfo::get_PrimaryAssetType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PrimaryAssetTypeInfo::get_AssetBaseClassLoaded() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::PrimaryAssetTypeInfo::get_AssetBaseClass() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::PrimaryAssetTypeInfo::get_bHasBlueprintClasses() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::PrimaryAssetTypeInfo::set_bIsEditorOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PrimaryAssetTypeInfo::set_bHasBlueprintClasses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PrimaryAssetTypeInfo::get_bIsEditorOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void* _Script_Engine::PrimaryAssetTypeInfo::get_SpecificAssets() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::PrimaryAssetTypeInfo::get_Rules() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_Engine::PrimaryAssetTypeInfo::get_bIsDynamicAsset() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::PrimaryAssetTypeInfo::set_bIsDynamicAsset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::PrimaryAssetTypeInfo::get_NumberOfAssets() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_Engine::PrimaryAssetTypeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimaryAssetTypeInfo");
    return result;
}
