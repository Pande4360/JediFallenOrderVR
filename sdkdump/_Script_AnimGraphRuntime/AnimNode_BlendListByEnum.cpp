#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendListBase.hpp"
#include "AnimNode_BlendListByEnum.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_BlendListByEnum::get_EnumToPoseIndex() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendListByEnum::get_ActiveEnumValue() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendListByEnum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum");
    return result;
}
