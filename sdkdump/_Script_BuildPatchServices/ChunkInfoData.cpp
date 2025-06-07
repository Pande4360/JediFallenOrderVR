#include "..\FUObjectArray.hpp"
#include "ChunkInfoData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_BuildPatchServices::ChunkInfoData::get_GroupNumber() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_BuildPatchServices::ChunkInfoData::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_BuildPatchServices::ChunkInfoData::get_Hash() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_BuildPatchServices::ChunkInfoData::get_ShaHash() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_BuildPatchServices::ChunkInfoData::get_FileSize() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_BuildPatchServices::ChunkInfoData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/BuildPatchServices.ChunkInfoData");
    return result;
}
