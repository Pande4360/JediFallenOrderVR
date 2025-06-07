#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsDefenseDefinition.hpp"
#include "SwDefenseDefinition.hpp"
void* _Script_SwGame::SwDefenseDefinition::get_DefenseDataContainer() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::SwDefenseDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDefenseDefinition");
    return result;
}
