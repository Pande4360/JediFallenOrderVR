#include "..\FUObjectArray.hpp"
#include "AnimPhysPlanarLimit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimPhysPlanarLimit::get_DrivingBone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::AnimPhysPlanarLimit::get_PlaneTransform() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimPhysPlanarLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimPhysPlanarLimit");
    return result;
}
