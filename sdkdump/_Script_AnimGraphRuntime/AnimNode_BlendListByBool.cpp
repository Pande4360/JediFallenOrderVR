#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendListBase.hpp"
#include "AnimNode_BlendListByBool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimGraphRuntime::AnimNode_BlendListByBool::get_bActiveValue() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BlendListByBool::set_bActiveValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendListByBool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByBool");
    return result;
}
