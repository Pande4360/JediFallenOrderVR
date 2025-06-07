#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FloatingLogsInWaterSpawningExclusionAreaHalfLine.hpp"
void* _Script_SwGame::FloatingLogsInWaterSpawningExclusionAreaHalfLine::get_StartingPoint() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::FloatingLogsInWaterSpawningExclusionAreaHalfLine::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_SwGame::FloatingLogsInWaterSpawningExclusionAreaHalfLine::get_Direction() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::FloatingLogsInWaterSpawningExclusionAreaHalfLine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.FloatingLogsInWaterSpawningExclusionAreaHalfLine");
    return result;
}
