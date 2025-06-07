#include "..\FUObjectArray.hpp"
#include "INT_HackPanel_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Interfaces_INT_HackPanel::INT_HackPanel_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Interfaces/INT_HackPanel.INT_HackPanel_C");
    return result;
}
void _Game_GlobalData_Interfaces_INT_HackPanel::INT_HackPanel_C::StartHackPanelAnim() {
    return;
}
void _Game_GlobalData_Interfaces_INT_HackPanel::INT_HackPanel_C::ShouldLoopHackingUntilSignaled(bool& bLoopHacking) {
    return;
}
