#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RAPDialogueMetaData {
    private: char pad_0[0x60]; public:
    bool get_bCritPath();
    void set_bCritPath(bool value);
    void* get_ChoiceMapping();
    void* get_PlayedTag();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
