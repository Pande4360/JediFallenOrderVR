#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ROscillator.hpp"
void* _Script_Engine::ROscillator::get_Pitch() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ROscillator::get_Yaw() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::ROscillator::get_Roll() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::ROscillator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ROscillator");
    return result;
}
