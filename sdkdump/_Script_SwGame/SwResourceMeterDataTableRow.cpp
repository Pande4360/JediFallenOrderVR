#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwResourceMeterDataTableRow.hpp"
float& _Script_SwGame::SwResourceMeterDataTableRow::get_ShadowTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwResourceMeterDataTableRow::get_AmountImmediate() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwResourceMeterDataTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwResourceMeterDataTableRow");
    return result;
}
float& _Script_SwGame::SwResourceMeterDataTableRow::get_AmountImmediatePercentageOfMaxBar() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwResourceMeterDataTableRow::get_AmountImmediatePercentageOfRemainingBar() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwResourceMeterDataTableRow::get_AmountOverTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwResourceMeterDataTableRow::get_RegenerationMultiplier() {
    return *(float*)((uintptr_t)this + 0x1c);
}
