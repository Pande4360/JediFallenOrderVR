#include "..\FUObjectArray.hpp"
#include "ReminderTutorial_Data.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data::ReminderTutorial_Data::get_tutorialType_7_000751FF4BC6E1A900D3ABB5DAE5ACAB() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data::ReminderTutorial_Data::get_UnlockFlag_26_FD178CDB45C7054810E5DBA51DA6C3A7() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data::ReminderTutorial_Data::get_elapsedSeconds_2_1B35463644B1924A3334C9BE04ED9BE8() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data::ReminderTutorial_Data::get_timeStamp_4_944C59CD45BD541CE9EB8484DB98AC50() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data::ReminderTutorial_Data::get_TutorialMessage_29_7F21AC6440C335E753EC64BCAD0AEF71() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Definitions_ReminderTutorial_Data::ReminderTutorial_Data::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Characters/Hero/Logic/Definitions/ReminderTutorial_Data.ReminderTutorial_Data");
    return result;
}
