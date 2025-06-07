#include "..\FUObjectArray.hpp"
#include "AnimCustomInstance.hpp"
#include "AnimSequencerInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimSequencerInstance::get_AnimAssets() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimSequencerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.AnimSequencerInstance");
    return result;
}
