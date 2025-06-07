#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavLinkDefinition.hpp"
void* _Script_Engine::NavLinkDefinition::get_Links() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::NavLinkDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavLinkDefinition");
    return result;
}
void* _Script_Engine::NavLinkDefinition::get_SegmentLinks() {
    return (void*)((uintptr_t)this + 0x38);
}
