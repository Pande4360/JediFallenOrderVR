#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsAICharacterSpawner;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Structs_ST_HubChumpSpawnData {
#pragma pack(push, 1)
struct ST_HubChumpSpawnData {
    private: char pad_0[0x48]; public:
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_SpawnerInWorld_25_C996586C4E75BAB3C2F758BC755D355D();
    void* get_OptionalSpeakerCharacterTag_14_FFFCADD04DA8ACAE11D5919837AE360B();
    void* get_RequiredTags_28_FD2BC6AC4ACFB9F7024F159E139AA77E();
    void* get_RequiredUnsetTags_29_AAAF9ECF4B58DB14E56D9C8BD0B79586();
    bool get_UseProxyVOOverrideDistance_37_0F0E96EE499905ACF20875BB9986FF66();
    void set_UseProxyVOOverrideDistance_37_0F0E96EE499905ACF20875BB9986FF66(bool value);
    float& get_ProxyVOOverrideDistance_34_92FD1494469E3950FD90F1AFC7E24C57();
    int32_t& get_ChumpIdleLoopAnim_42_C1253FB846EF05B1A5A283AFB18AB3C6();
    int32_t& get_ChumpIdleLoopAnim_Conversation_44_7C99215F4CD60350E46F04B1C727237D();
    bool get_DisableTurnToFace_47_1AB00CC845F538A7714A4F824AE4E4CA();
    void set_DisableTurnToFace_47_1AB00CC845F538A7714A4F824AE4E4CA(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
