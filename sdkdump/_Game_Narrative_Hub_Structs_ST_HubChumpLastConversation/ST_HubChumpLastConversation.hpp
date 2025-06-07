#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Structs_ST_HubChumpLastConversation {
#pragma pack(push, 1)
struct ST_HubChumpLastConversation {
    private: char pad_0[0xc]; public:
    void* get_Type_2_0033E7204C06963F9BC46B839F538AEA();
    float& get_CompletedTime_6_3D5E1BEC4DC558D1513AEAA6BF81F060();
    int32_t& get_HubConversationCount_9_466B62344810F0633713B1B980B325DC();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
