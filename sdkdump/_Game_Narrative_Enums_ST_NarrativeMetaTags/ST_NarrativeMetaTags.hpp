#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_NarrativeMetaTags {
#pragma pack(push, 1)
struct ST_NarrativeMetaTags {
    private: char pad_0[0x7]; public:
    bool get_BackgroundConversation_1_596B155F41CC861CB5604FB0781D9EF7();
    void set_BackgroundConversation_1_596B155F41CC861CB5604FB0781D9EF7(bool value);
    bool get_ForceAlwaysPlay_3_1EFD435A4A74FFE2C26877BBF46D553E();
    void set_ForceAlwaysPlay_3_1EFD435A4A74FFE2C26877BBF46D553E(bool value);
    bool get_QueueIfFails_5_B449020C4E19E6F4EE166481FC05786E();
    void set_QueueIfFails_5_B449020C4E19E6F4EE166481FC05786E(bool value);
    bool get_MatchAllTempContent_7_A5EB32974C5684A1ED7CA58E0D917DF5();
    void set_MatchAllTempContent_7_A5EB32974C5684A1ED7CA58E0D917DF5(bool value);
    bool get_Ignore_9_CEC84D6E4B2EF0AD555B95A5EEA83F9C();
    void set_Ignore_9_CEC84D6E4B2EF0AD555B95A5EEA83F9C(bool value);
    bool get_WasEnqueued_11_CA136F7F4863E011F88B938E1CFDD66D();
    void set_WasEnqueued_11_CA136F7F4863E011F88B938E1CFDD66D(bool value);
    bool get_AbortOnCombat_14_15CC39F44F1051E509A70A96446A245A();
    void set_AbortOnCombat_14_15CC39F44F1051E509A70A96446A245A(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x7
#pragma pack(pop)
}
