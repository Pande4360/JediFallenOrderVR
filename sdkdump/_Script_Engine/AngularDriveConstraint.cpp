#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AngularDriveConstraint.hpp"
void* _Script_Engine::AngularDriveConstraint::get_AngularDriveMode() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::AngularDriveConstraint::get_TwistDrive() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::AngularDriveConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AngularDriveConstraint");
    return result;
}
void* _Script_Engine::AngularDriveConstraint::get_SwingDrive() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AngularDriveConstraint::get_SlerpDrive() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::AngularDriveConstraint::get_OrientationTarget() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AngularDriveConstraint::get_AngularVelocityTarget() {
    return (void*)((uintptr_t)this + 0x3c);
}
