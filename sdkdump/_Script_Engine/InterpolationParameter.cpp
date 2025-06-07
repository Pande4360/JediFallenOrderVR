#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpolationParameter.hpp"
float& _Script_Engine::InterpolationParameter::get_InterpolationTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::InterpolationParameter::get_InterpolationType() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::InterpolationParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InterpolationParameter");
    return result;
}
