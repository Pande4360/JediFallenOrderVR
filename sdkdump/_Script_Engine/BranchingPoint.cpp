#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimLinkableElement.hpp"
#include "BranchingPoint.hpp"
void* _Script_Engine::BranchingPoint::get_EventName() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::BranchingPoint::get_DisplayTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::BranchingPoint::get_TriggerTimeOffset() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::BranchingPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BranchingPoint");
    return result;
}
