#include "..\FUObjectArray.hpp"
#include "AnimNode_CurveSource.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_CurveSource::get_SourcePose() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_CurveSource::get_SourceBinding() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_AnimGraphRuntime::AnimNode_CurveSource::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_AnimGraphRuntime::AnimNode_CurveSource::get_CurveSource() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CurveSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CurveSource");
    return result;
}
