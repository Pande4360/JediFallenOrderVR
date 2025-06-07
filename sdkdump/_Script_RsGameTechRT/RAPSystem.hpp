#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RAPDatabase;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RAPSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x78]; public:
    void* get_ShowCinematicSubtitleEvent();
    void* get_HideCinematicSubtitleEvent();
    void* get_RAPLineStartedEvent();
    void* get_RAPLineEndedEvent();
    void* get_RAPLineInteractionEvent();
    void* get_RAPConversationStartedEvent();
    void* get_RAPConversationFinishedEvent();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RAPDatabase* GetRAPDatabase();
}; // Size: 0xa0
#pragma pack(pop)
}
