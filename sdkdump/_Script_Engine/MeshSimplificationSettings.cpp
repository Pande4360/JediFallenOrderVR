#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "MeshSimplificationSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::MeshSimplificationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MeshSimplificationSettings");
    return result;
}
void* _Script_Engine::MeshSimplificationSettings::get_MeshReductionModuleName() {
    return (void*)((uintptr_t)this + 0x38);
}
