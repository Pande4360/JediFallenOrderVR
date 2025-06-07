#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SplinePoint.hpp"
_Script_CoreUObject::Class* _Script_Engine::SplinePoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SplinePoint");
    return result;
}
float& _Script_Engine::SplinePoint::get_InputKey() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SplinePoint::get_Position() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::SplinePoint::get_ArriveTangent() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::SplinePoint::get_LeaveTangent() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::SplinePoint::get_Type() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SplinePoint::get_Rotation() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::SplinePoint::get_Scale() {
    return (void*)((uintptr_t)this + 0x34);
}
