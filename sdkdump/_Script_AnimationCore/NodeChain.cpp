#include "..\FUObjectArray.hpp"
#include "NodeChain.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::NodeChain::get_Nodes() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::NodeChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.NodeChain");
    return result;
}
