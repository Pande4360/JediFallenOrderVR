#include "..\FUObjectArray.hpp"
#include "ST_SkillDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
int32_t& _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_SkillID_33_4CF4B5DF46912389C9BB20BAE10D2338() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_MediaAssets::MediaSource*& _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_SkillVideo_70_378179B04227F82E0BE7CB89B2700C47() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x20);
}
void _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::set_UsesForce_82_F61C434B4E0BBBCE292B38B8AA26DD49(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Texture2D*& _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_LearnedIcon_59_3F1B890C4FD475BA5D88E894AAB860CC() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x10);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_SkillType_32_101CE35A4F43C7D56797A0BE3FC4CC75() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_Engine::Texture2D*& _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_Icon_42_034ABB494A40905245CFF39ADDC5547D() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x8);
}
_Script_MediaAssets::MediaPlayer*& _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_SkillMediaPlayer_69_372027C84D76216BFD8481B9C6972784() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x18);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_Name_27_5FA50EE44603B5F8306DFCAFA052DA26() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_Description_28_A48213D0429FF9A15FAC0AAD3B691460() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_SkillPointsRequired_18_853BEC784405609A11265099A1E5DF0D() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_UpgradeFlag_46_6808C32840CAED2F52F38C9D68CA4759() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_UnlockFlag_47_77AE3E214FBE31662AB54D97E78AE801() {
    return (void*)((uintptr_t)this + 0x5d);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_UnlockFlag02_80_4E5B9910457DC4B1170431A5851A3833() {
    return (void*)((uintptr_t)this + 0x5e);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_PrerequisiteFlag01_52_793379E64F1D5B6E293893B009202C1F() {
    return (void*)((uintptr_t)this + 0x5f);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_PrerequisiteFlag02_54_4BB67B4D41900CAEAE6123849B537C61() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_PrerequisiteFlag03_56_1110DE1B4BA1D1C458D0C6916C2821D9() {
    return (void*)((uintptr_t)this + 0x61);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_FanfareDescription_85_1616331141ADED3D2374FCA8BD0188C0() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_PrimaryInput_76_D8F7C47340E0006C66461BAD2F98A259() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_SecondaryInput_77_B99C0CCF4ADA6105D2A11DBE8E73A92E() {
    return (void*)((uintptr_t)this + 0x81);
}
bool _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::get_UsesForce_82_F61C434B4E0BBBCE292B38B8AA26DD49() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_GlobalData_Progression_ST_SkillDefinition::ST_SkillDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Progression/ST_SkillDefinition.ST_SkillDefinition");
    return result;
}
