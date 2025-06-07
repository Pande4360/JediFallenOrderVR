#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsTelemetryValue.hpp"
#include "RsTelemetryValue_String.hpp"
void* _Script_Engine::RsTelemetryValue_String::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsTelemetryValue_String::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsTelemetryValue_String");
    return result;
}
