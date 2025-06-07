#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsTelemetryValue.hpp"
#include "RsTelemetryValue_Int.hpp"
int32_t& _Script_Engine::RsTelemetryValue_Int::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsTelemetryValue_Int::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsTelemetryValue_Int");
    return result;
}
