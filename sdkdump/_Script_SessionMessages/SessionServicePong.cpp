#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SessionServicePong.hpp"
bool _Script_SessionMessages::SessionServicePong::get_Authorized() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_SessionMessages::SessionServicePong::get_DeviceName() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_SessionMessages::SessionServicePong::set_Authorized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SessionMessages::SessionServicePong::get_IsConsoleBuild() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_SessionMessages::SessionServicePong::get_BuildDate() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SessionMessages::SessionServicePong::get_InstanceId() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SessionMessages::SessionServicePong::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SessionMessages.SessionServicePong");
    return result;
}
void* _Script_SessionMessages::SessionServicePong::get_InstanceName() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_SessionMessages::SessionServicePong::set_IsConsoleBuild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SessionMessages::SessionServicePong::get_PlatformName() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_SessionMessages::SessionServicePong::get_SessionId() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SessionMessages::SessionServicePong::get_SessionName() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SessionMessages::SessionServicePong::get_SessionOwner() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_SessionMessages::SessionServicePong::get_Standalone() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_SessionMessages::SessionServicePong::set_Standalone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
