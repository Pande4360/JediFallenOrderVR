#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwForceMeterDataTableRow.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwForceMeterDataTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwForceMeterDataTableRow");
    return result;
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_ForceAmountImmediate() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_ForceAmountImmediatePercentageOfMaxBar() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_ForceAmountImmediatePercentageOfRemainingBar() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_ShadowTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_ForceAmountOverTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_RegenerationMultiplier() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_SwGame::SwForceMeterDataTableRow::get_MinForceRequired() {
    return *(float*)((uintptr_t)this + 0x20);
}
