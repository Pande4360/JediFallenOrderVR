#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AssetMappingTable.hpp"
_Script_CoreUObject::Class* _Script_Engine::AssetMappingTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AssetMappingTable");
    return result;
}
void* _Script_Engine::AssetMappingTable::get_MappedAssets() {
    return (void*)((uintptr_t)this + 0x28);
}
