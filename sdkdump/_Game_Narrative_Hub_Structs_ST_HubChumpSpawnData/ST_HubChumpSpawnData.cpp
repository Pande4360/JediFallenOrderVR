#include "..\FUObjectArray.hpp"
#include "ST_HubChumpSpawnData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacterSpawner.hpp"
void _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::set_UseProxyVOOverrideDistance_37_0F0E96EE499905ACF20875BB9986FF66(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsAICharacterSpawner*& _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_SpawnerInWorld_25_C996586C4E75BAB3C2F758BC755D355D() {
    return *(_Script_RsGameTechRT::RsAICharacterSpawner**)((uintptr_t)this + 0x0);
}
void* _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_RequiredTags_28_FD2BC6AC4ACFB9F7024F159E139AA77E() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_OptionalSpeakerCharacterTag_14_FFFCADD04DA8ACAE11D5919837AE360B() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_RequiredUnsetTags_29_AAAF9ECF4B58DB14E56D9C8BD0B79586() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_UseProxyVOOverrideDistance_37_0F0E96EE499905ACF20875BB9986FF66() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
int32_t& _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_ChumpIdleLoopAnim_42_C1253FB846EF05B1A5A283AFB18AB3C6() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
float& _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_ProxyVOOverrideDistance_34_92FD1494469E3950FD90F1AFC7E24C57() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_ChumpIdleLoopAnim_Conversation_44_7C99215F4CD60350E46F04B1C727237D() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
bool _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::get_DisableTurnToFace_47_1AB00CC845F538A7714A4F824AE4E4CA() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::set_DisableTurnToFace_47_1AB00CC845F538A7714A4F824AE4E4CA(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Narrative/Hub/Structs/ST_HubChumpSpawnData.ST_HubChumpSpawnData");
    return result;
}
