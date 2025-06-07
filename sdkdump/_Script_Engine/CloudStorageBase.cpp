#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CloudStorageBase.hpp"
#include "PlatformInterfaceBase.hpp"
void* _Script_Engine::CloudStorageBase::get_LocalCloudFiles() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::CloudStorageBase::get_bSuppressDelegateCalls() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::CloudStorageBase::set_bSuppressDelegateCalls(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::CloudStorageBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CloudStorageBase");
    return result;
}
