#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIDebugInput.hpp"
void* _Script_RsGameTechRT::RsAIDebugInput::get_DestroyAllAIHotkey() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsAIDebugInput::get_EnableAIHotkey() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAIDebugInput::get_KillAllAIHotkey() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsAIDebugInput::get_DebugMoveActorSprintHotkey() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIDebugInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIDebugInput");
    return result;
}
void* _Script_RsGameTechRT::RsAIDebugInput::get_DebugMoveActorWalkSlowHotkey() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_RsGameTechRT::RsAIDebugInput::get_DebugMoveActorRunHotkey() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsAIDebugInput::get_DebugMoveActorWalkFastHotkey() {
    return (void*)((uintptr_t)this + 0x90);
}
