#include "..\FUObjectArray.hpp"
#include "BuildPatchManifest.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void _Script_BuildPatchServices::BuildPatchManifest::set_bIsFileData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_ManifestFileVersion() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_AppID() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_BuildPatchServices::BuildPatchManifest::get_bIsFileData() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_AppName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_LaunchCommand() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_BuildVersion() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_LaunchExe() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_PrereqIds() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_PrereqName() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_PrereqPath() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_PrereqArgs() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_FileManifestList() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_ChunkList() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_BuildPatchServices::BuildPatchManifest::get_CustomFields() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_BuildPatchServices::BuildPatchManifest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/BuildPatchServices.BuildPatchManifest");
    return result;
}
