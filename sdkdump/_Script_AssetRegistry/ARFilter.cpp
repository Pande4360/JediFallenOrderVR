#include "..\FUObjectArray.hpp"
#include "ARFilter.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AssetRegistry::ARFilter::set_bRecursivePaths(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AssetRegistry::ARFilter::get_PackageNames() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AssetRegistry::ARFilter::get_PackagePaths() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AssetRegistry::ARFilter::get_ObjectPaths() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_AssetRegistry::ARFilter::get_bRecursiveClasses() {
    return (*(uint8_t*)((uintptr_t)this + 0xe1 + 0)) & 1 != 0;
}
void* _Script_AssetRegistry::ARFilter::get_ClassNames() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AssetRegistry::ARFilter::get_RecursiveClassesExclusionSet() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_AssetRegistry::ARFilter::get_bRecursivePaths() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_AssetRegistry::ARFilter::set_bRecursiveClasses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AssetRegistry::ARFilter::get_bIncludeOnlyOnDiskAssets() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2 + 0)) & 1 != 0;
}
void _Script_AssetRegistry::ARFilter::set_bIncludeOnlyOnDiskAssets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AssetRegistry::ARFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AssetRegistry.ARFilter");
    return result;
}
