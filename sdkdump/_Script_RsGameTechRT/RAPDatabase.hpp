#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RAPDatabase : public _Script_Engine::DataAsset {
    private: char pad_30[0x140]; public:
    void* get_Lines();
    void* get_DialogueToGameplayTags();
    void* get_DialogueMetadata();
    void* get_EventContextsForSpeakers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
