#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "RsProxyLODSettings.hpp"
void* _Script_Engine::RsProxyLODSettings::get_PreviewProxySettings() {
    return (void*)((uintptr_t)this + 0x110);
}
float& _Script_Engine::RsProxyLODSettings::get_ProxyMinDrawDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RsProxyLODSettings::get_ProductionProxySettings() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::RsProxyLODSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsProxyLODSettings");
    return result;
}
