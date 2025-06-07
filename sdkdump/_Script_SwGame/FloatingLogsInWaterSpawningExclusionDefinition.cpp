#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FloatingLogsInWaterSpawningExclusionDefinition.hpp"
void* _Script_SwGame::FloatingLogsInWaterSpawningExclusionDefinition::get_HalfLineAreas() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::FloatingLogsInWaterSpawningExclusionDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.FloatingLogsInWaterSpawningExclusionDefinition");
    return result;
}
