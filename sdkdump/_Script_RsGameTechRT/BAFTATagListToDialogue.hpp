#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct BAFTATagListToDialogue {
    private: char pad_0[0x30]; public:
    void* get_Tags();
    void* get_UnsetTags();
    _Script_DialoguePlugin::Dialogue*& get_Dialogue();
    int32_t& get_SpeakersCount();
    int32_t& get_SpeakersHash();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
