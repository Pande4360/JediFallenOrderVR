#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VirtualBone.hpp"
void* _Script_Engine::VirtualBone::get_SourceBoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::VirtualBone::get_VirtualBoneName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::VirtualBone::get_TargetBoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VirtualBone");
    return result;
}
