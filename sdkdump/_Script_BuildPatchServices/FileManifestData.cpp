#include "..\FUObjectArray.hpp"
#include "FileManifestData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_BuildPatchServices::FileManifestData::get_Filename() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_BuildPatchServices::FileManifestData::get_FileHash() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_BuildPatchServices::FileManifestData::get_FileChunkParts() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_BuildPatchServices::FileManifestData::get_InstallTags() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_BuildPatchServices::FileManifestData::get_bIsUnixExecutable() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_BuildPatchServices::FileManifestData::set_bIsUnixExecutable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_BuildPatchServices::FileManifestData::get_SymlinkTarget() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_BuildPatchServices::FileManifestData::get_bIsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_BuildPatchServices::FileManifestData::set_bIsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_BuildPatchServices::FileManifestData::get_bIsCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_BuildPatchServices::FileManifestData::set_bIsCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_BuildPatchServices::FileManifestData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/BuildPatchServices.FileManifestData");
    return result;
}
