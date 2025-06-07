#include "..\FUObjectArray.hpp"
#include "ClothPhysicalMeshData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_BackstopDistances() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_Vertices() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_Normals() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_BackstopRadiuses() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_Indices() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_MaxDistances() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_AnimDriveMultipliers() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_InverseMasses() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_BoneData() {
    return (void*)((uintptr_t)this + 0x80);
}
int32_t& _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_MaxBoneWeights() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
int32_t& _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_NumFixedVerts() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
void* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::get_SelfCollisionIndices() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothPhysicalMeshData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothPhysicalMeshData");
    return result;
}
