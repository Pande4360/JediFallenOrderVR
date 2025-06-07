#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PlatformInterfaceData.hpp"
_Script_CoreUObject::Class* _Script_Engine::PlatformInterfaceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PlatformInterfaceData");
    return result;
}
void* _Script_Engine::PlatformInterfaceData::get_DataName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PlatformInterfaceData::get_StringValue() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::PlatformInterfaceData::get_IntValue() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::PlatformInterfaceData::get_Type() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Object*& _Script_Engine::PlatformInterfaceData::get_ObjectValue() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x28);
}
float& _Script_Engine::PlatformInterfaceData::get_FloatValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
