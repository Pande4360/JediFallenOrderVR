#include "..\FUObjectArray.hpp"
#include "ST_EchoScanDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_GlobalData_Economy_ST_EchoScanDefinition::ST_EchoScanDefinition::get_SceneName_13_6F4F278B4234F5F9F50D0B935D936FD6() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_GlobalData_Economy_ST_EchoScanDefinition::ST_EchoScanDefinition::get_RewardTier_5_39F9C56043240B0EA4D1818D367BB9F4() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Game_GlobalData_Economy_ST_EchoScanDefinition::ST_EchoScanDefinition::get_INFOForceHealthUpgrade_26_F95A54DA45343660D060EE8AD6435768() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Game_GlobalData_Economy_ST_EchoScanDefinition::ST_EchoScanDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Economy/ST_EchoScanDefinition.ST_EchoScanDefinition");
    return result;
}
