#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsTelemetryValues.hpp"
void* _Script_Engine::RsTelemetryValues::get_IntegerValues() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsTelemetryValues::get_FloatValues() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RsTelemetryValues::get_BooleanValues() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::RsTelemetryValues::get_IndexedStringValues() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::RsTelemetryValues::get_StringValues() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::RsTelemetryValues::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsTelemetryValues");
    return result;
}
