#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PlatformInterfaceWebResponse.hpp"
void* _Script_Engine::PlatformInterfaceWebResponse::GetHeaderValue(void* HeaderName) {
    return;
}
void* _Script_Engine::PlatformInterfaceWebResponse::get_OriginalURL() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::PlatformInterfaceWebResponse::get_ResponseCode() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::PlatformInterfaceWebResponse::get_Tag() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::PlatformInterfaceWebResponse::get_StringResponse() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::PlatformInterfaceWebResponse::get_BinaryResponse() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::PlatformInterfaceWebResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlatformInterfaceWebResponse");
    return result;
}
int32_t _Script_Engine::PlatformInterfaceWebResponse::GetNumHeaders() {
    return;
}
void _Script_Engine::PlatformInterfaceWebResponse::GetHeader(int32_t HeaderIndex, void*& Header, void*& Value) {
    return;
}
