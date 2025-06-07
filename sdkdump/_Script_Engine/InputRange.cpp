#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputRange.hpp"
float& _Script_Engine::InputRange::get_Min() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::InputRange::get_Max() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::InputRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputRange");
    return result;
}
