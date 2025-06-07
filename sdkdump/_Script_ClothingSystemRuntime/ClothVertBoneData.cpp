#include "..\FUObjectArray.hpp"
#include "ClothVertBoneData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ClothingSystemRuntime::ClothVertBoneData::get_NumInfluences() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntime::ClothVertBoneData::get_BoneIndices() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_ClothingSystemRuntime::ClothVertBoneData::get_BoneWeights() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothVertBoneData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothVertBoneData");
    return result;
}
