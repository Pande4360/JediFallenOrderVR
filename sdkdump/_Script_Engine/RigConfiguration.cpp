#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Rig.hpp"
#include "RigConfiguration.hpp"
_Script_CoreUObject::Class* _Script_Engine::RigConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigConfiguration");
    return result;
}
_Script_Engine::Rig*& _Script_Engine::RigConfiguration::get_Rig() {
    return *(_Script_Engine::Rig**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RigConfiguration::get_BoneMappingTable() {
    return (void*)((uintptr_t)this + 0x8);
}
