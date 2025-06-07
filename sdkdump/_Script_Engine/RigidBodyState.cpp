#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigidBodyState.hpp"
void* _Script_Engine::RigidBodyState::get_Flags() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RigidBodyState::get_AngVel() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::RigidBodyState::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RigidBodyState::get_Quaternion() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RigidBodyState::get_LinVel() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::RigidBodyState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigidBodyState");
    return result;
}
