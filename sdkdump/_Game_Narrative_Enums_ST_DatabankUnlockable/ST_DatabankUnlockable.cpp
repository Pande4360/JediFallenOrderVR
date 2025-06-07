#include "..\FUObjectArray.hpp"
#include "ST_DatabankUnlockable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
void* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_TitleText_3_EA0678C94951C6B39DBE4EA5BEACE0EB() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_LinkListOrder_21_8F86A604491CD0A8139316B21A22F8C2() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_BodyText_5_4EB1A82E43768901366FCCB352E4CFD4() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_Type_10_C18E167F4B5DACB4C7BE40B590D2095F() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_CombatHint1_26_D81458B942A60E2A38FB9CBBC0B53424() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::Texture2D*& _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_TinyIcon_31_A0B0A5C940EC8EF693AC259A5294A264() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x98);
}
void* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_CombatHint2_27_9FDC131A497F46611D6AC4AF2A7A1B78() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_FeatureImage_34_02A4A8C84C3B00B7D3D1949C41B2388C() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_Dialogue_37_EC3EAB5C458F5C603E3996A082E98FF1() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0xa8);
}
_Script_Engine::Texture2D*& _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::get_TinyIconOptional_33_AC89E0F74EFD07A9C2B944B87614A05F() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_DatabankUnlockable.ST_DatabankUnlockable");
    return result;
}
