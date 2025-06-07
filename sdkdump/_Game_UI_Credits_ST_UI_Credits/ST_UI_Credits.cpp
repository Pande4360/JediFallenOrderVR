#include "..\FUObjectArray.hpp"
#include "ST_UI_Credits.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_UI_Credits_ST_UI_Credits::ST_UI_Credits::get_CreditsFormat_14_2C5E9E1B4DC75E5758918F8F89E121E9() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_UI_Credits_ST_UI_Credits::ST_UI_Credits::get_CreditsTitle_5_733B276248A174D0D27B7A93E314DB62() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_UI_Credits_ST_UI_Credits::ST_UI_Credits::get_SubstituteTitle_15_4A02F1204AF14ADCBA962783FBFA2D5E() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Game_UI_Credits_ST_UI_Credits::ST_UI_Credits::get_CreditsName_9_78288F464A5849D22EA78394426D6C91() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Game_UI_Credits_ST_UI_Credits::ST_UI_Credits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/UI/Credits/ST_UI_Credits.ST_UI_Credits");
    return result;
}
