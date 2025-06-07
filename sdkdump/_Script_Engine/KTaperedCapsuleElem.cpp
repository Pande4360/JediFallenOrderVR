#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KShapeElem.hpp"
#include "KTaperedCapsuleElem.hpp"
void* _Script_Engine::KTaperedCapsuleElem::get_Rotation() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::KTaperedCapsuleElem::get_Center() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::KTaperedCapsuleElem::get_Radius0() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::KTaperedCapsuleElem::get_Radius1() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::KTaperedCapsuleElem::get_Length() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::KTaperedCapsuleElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KTaperedCapsuleElem");
    return result;
}
