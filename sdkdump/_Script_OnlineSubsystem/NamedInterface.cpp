#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NamedInterface.hpp"
void* _Script_OnlineSubsystem::NamedInterface::get_InterfaceName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_OnlineSubsystem::NamedInterface::get_InterfaceObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystem::NamedInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystem.NamedInterface");
    return result;
}
