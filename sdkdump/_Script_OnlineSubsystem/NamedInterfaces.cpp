#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NamedInterfaces.hpp"
void* _Script_OnlineSubsystem::NamedInterfaces::get_NamedInterfaces() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystem::NamedInterfaces::get_NamedInterfaceDefs() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystem::NamedInterfaces::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystem.NamedInterfaces");
    return result;
}
