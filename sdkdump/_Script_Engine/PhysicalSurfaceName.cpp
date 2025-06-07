#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhysicalSurfaceName.hpp"
void* _Script_Engine::PhysicalSurfaceName::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::PhysicalSurfaceName::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicalSurfaceName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PhysicalSurfaceName");
    return result;
}
