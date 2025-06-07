#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HierarchicalLODSetup.hpp"
void* _Script_Engine::HierarchicalLODSetup::get_HierarchicalLODSetup() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::HierarchicalLODSetup::get_OverrideBaseMaterial() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalLODSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HierarchicalLODSetup");
    return result;
}
