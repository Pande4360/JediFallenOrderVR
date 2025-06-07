#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct NarrativeEventResult {
    private: char pad_0[0x30]; public:
    void* get_Result();
    _Script_RsGameTechRT::RsConversation*& get_PlayingConversation();
    bool get_Success();
    void set_Success(bool value);
    void* get_ConversationActors();
    int32_t& get_QueuedItemID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
