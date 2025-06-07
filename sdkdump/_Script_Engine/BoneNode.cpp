#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoneNode.hpp"
void* _Script_Engine::BoneNode::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::BoneNode::get_ParentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BoneNode::get_TranslationRetargetingMode() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::BoneNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BoneNode");
    return result;
}
