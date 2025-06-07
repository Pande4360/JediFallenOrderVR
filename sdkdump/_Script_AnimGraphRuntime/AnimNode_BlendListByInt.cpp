#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendListBase.hpp"
#include "AnimNode_BlendListByInt.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendListByInt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByInt");
    return result;
}
int32_t& _Script_AnimGraphRuntime::AnimNode_BlendListByInt::get_ActiveChildIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
