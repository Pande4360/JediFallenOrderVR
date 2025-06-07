#include "..\FUObjectArray.hpp"
#include "AnimNode_Root.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_Root::get_Result() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_AnimGraphRuntime::AnimNode_Root::get_ExtractRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Root::set_ExtractRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_Root::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_Root");
    return result;
}
