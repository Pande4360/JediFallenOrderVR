#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsTelemetryValue.hpp"
#include "RsTelemetryValue_Float.hpp"
float& _Script_Engine::RsTelemetryValue_Float::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsTelemetryValue_Float::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsTelemetryValue_Float");
    return result;
}
