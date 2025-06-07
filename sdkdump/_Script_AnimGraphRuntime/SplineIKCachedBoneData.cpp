#include "..\FUObjectArray.hpp"
#include "SplineIKCachedBoneData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::SplineIKCachedBoneData::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AnimGraphRuntime::SplineIKCachedBoneData::get_RefSkeletonIndex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::SplineIKCachedBoneData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.SplineIKCachedBoneData");
    return result;
}
