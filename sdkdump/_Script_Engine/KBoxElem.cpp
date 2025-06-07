#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KBoxElem.hpp"
#include "KShapeElem.hpp"
void* _Script_Engine::KBoxElem::get_Center() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::KBoxElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KBoxElem");
    return result;
}
void* _Script_Engine::KBoxElem::get_Rotation() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::KBoxElem::get_X() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::KBoxElem::get_Y() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::KBoxElem::get_Z() {
    return *(float*)((uintptr_t)this + 0x58);
}
