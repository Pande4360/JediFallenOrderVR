#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataAsset.hpp"
#include "RsWorldMapDefinition.hpp"
void* _Script_Engine::RsWorldMapDefinition::get_WorldName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::RsWorldMapDefinition::get_Regions() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::RsWorldMapDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsWorldMapDefinition");
    return result;
}
