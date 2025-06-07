#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DeviceProfile.hpp"
#include "TextureLODSettings.hpp"
void* _Script_Engine::DeviceProfile::get_CVars() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::DeviceProfile::get_DeviceType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::DeviceProfile::get_BaseProfileName() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Object*& _Script_Engine::DeviceProfile::get_Parent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::DeviceProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DeviceProfile");
    return result;
}
