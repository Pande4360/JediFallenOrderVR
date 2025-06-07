#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FullyLoadedPackagesInfo.hpp"
void* _Script_Engine::FullyLoadedPackagesInfo::get_FullyLoadType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::FullyLoadedPackagesInfo::get_Tag() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::FullyLoadedPackagesInfo::get_PackagesToLoad() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::FullyLoadedPackagesInfo::get_LoadedObjects() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::FullyLoadedPackagesInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FullyLoadedPackagesInfo");
    return result;
}
