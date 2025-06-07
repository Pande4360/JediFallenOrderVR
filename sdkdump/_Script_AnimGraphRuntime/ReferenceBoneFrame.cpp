#include "..\FUObjectArray.hpp"
#include "ReferenceBoneFrame.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::ReferenceBoneFrame::get_Bone() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::ReferenceBoneFrame::get_Axis() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::ReferenceBoneFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.ReferenceBoneFrame");
    return result;
}
