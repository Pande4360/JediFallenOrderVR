#include "..\FUObjectArray.hpp"
#include "ClothLODData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntime::ClothLODData::get_PhysicalMeshData() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntime::ClothLODData::get_CollisionData() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothLODData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothLODData");
    return result;
}
