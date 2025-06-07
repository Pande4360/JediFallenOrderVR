#include "..\FUObjectArray.hpp"
#include "ST_NarrativeMetaTags.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_QueueIfFails_5_B449020C4E19E6F4EE166481FC05786E(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_BackgroundConversation_1_596B155F41CC861CB5604FB0781D9EF7() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_MatchAllTempContent_7_A5EB32974C5684A1ED7CA58E0D917DF5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_BackgroundConversation_1_596B155F41CC861CB5604FB0781D9EF7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_QueueIfFails_5_B449020C4E19E6F4EE166481FC05786E() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_ForceAlwaysPlay_3_1EFD435A4A74FFE2C26877BBF46D553E() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_ForceAlwaysPlay_3_1EFD435A4A74FFE2C26877BBF46D553E(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_MatchAllTempContent_7_A5EB32974C5684A1ED7CA58E0D917DF5() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_Ignore_9_CEC84D6E4B2EF0AD555B95A5EEA83F9C() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_Ignore_9_CEC84D6E4B2EF0AD555B95A5EEA83F9C(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_WasEnqueued_11_CA136F7F4863E011F88B938E1CFDD66D() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_WasEnqueued_11_CA136F7F4863E011F88B938E1CFDD66D(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::get_AbortOnCombat_14_15CC39F44F1051E509A70A96446A245A() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
void _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::set_AbortOnCombat_14_15CC39F44F1051E509A70A96446A245A(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Enums/ST_NarrativeMetaTags.ST_NarrativeMetaTags");
    return result;
}
