#include "..\FUObjectArray.hpp"
#include "ChunkPartData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_BuildPatchServices::ChunkPartData::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_BuildPatchServices::ChunkPartData::get_Offset() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_BuildPatchServices::ChunkPartData::get_Size() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_BuildPatchServices::ChunkPartData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/BuildPatchServices.ChunkPartData");
    return result;
}
